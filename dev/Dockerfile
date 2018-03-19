FROM ubuntu:bionic

MAINTAINER Lucas Zanella (me@lucaszanella.com)

ARG SDK_LINK=https://dl.google.com/android/repository/sdk-tools-linux-3859397.zip
ARG SDK_HASH=444e22ce8ca0f67353bda4b85175ed3731cae3ffa695ca18119cbacef1c1bea0

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
    curl git wget libgtk-3-dev build-essential ca-certificates sudo unzip

RUN echo "root:123" | chpasswd
    
WORKDIR /home/project/src

RUN curl -fsSL https://deb.nodesource.com/setup_9.x -o get-node.sh  && /bin/sh get-node.sh && rm get-node.sh\
    && apt-get install -y nodejs

RUN npm install -g exp create-proton-app create-react-native-app fb-watchman react-native-cli npm3

RUN npm i -g npm@4.6.1 #create-react-native-app only works with npm 4

EXPOSE 8081


ENV ANDROID_HOME /usr/local/android-sdk-linux
ENV PATH $PATH:$ANDROID_HOME/tools:$ANDROID_HOME/platform-tools

#Experimental, not working yet
RUN mkdir -p $ANDROID_HOME && cd $ANDROID_HOME && wget --progress=bar:force:noscroll -O sdk.zip $SDK_LINK \
    && echo "$SDK_HASH sdk.zip" | sha256sum --quiet --check || ( echo 'Corrupt or malicious download, aborting' ; exit 1 ) \
    && unzip sdk.zip && rm sdk.zip \
    && export PATH=$PATH:$ANDROID_HOME/tools:$ANDROID_HOME/platform-tools \
    && chgrp -R users $ANDROID_HOME \
    && chmod -R 0775 $ANDROID_HOME

#ENV PATH $PATH:$ANDROID_HOME/build-tools/23.0.1

#RUN (while true ; do sleep 5; echo y; done) | --no-ui --force --all --filter \
# platform-tools,android-26,build-tools-27.0.3,extra-android-support,\
# extra-android-m2repository,sys-img-x86_64-android-26,extra-google-m2repository

RUN mkdir -p /home/project/gradle_deps
ENV GRADLE_USER_HOME /home/project/gradle_deps

COPY entrypoint.sh /my_entrypoint.sh

RUN echo kern.maxfiles=5242880 | tee -a /etc/sysctl.conf \
    && echo kern.maxfilesperproc=524288 | tee -a /etc/sysctl.conf \
    && echo fs.inotify.max_user_watches=10000 | tee -a /etc/sysctl.conf \
    && echo fs.inotify.max_user_instances=1024 | tee -a /etc/sysctl.conf \
    && echo fs.inotify.max_user_watches=12288 | tee -a /etc/sysctl.conf

#RUN mkdir -p /home/deps && cd /home/deps

WORKDIR /home/project/src/jscam

ENTRYPOINT "/bin/bash"

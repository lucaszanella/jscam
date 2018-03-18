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

RUN npm install -g exp create-proton-app create-react-native-app fb-watchman

RUN npm i -g npm@4.6.1

RUN wget --progress=bar:force:noscroll -O /home/Android/sdk.zip $SDK_LINK \
    && echo "$SDK_HASH /home/Android/sdk.zip" | sha256sum --quiet --check || ( echo 'Corrupt or malicious download' ; exit 1 ) \
    && unziip /home/Android/sdk.zip


COPY entrypoint.sh /my_entrypoint.sh

#RUN sudo sysctl -w kern.maxfiles=5242880 && sudo sysctl -w kern.maxfilesperproc=524288

#RUN mkdir -p /home/deps && cd /home/deps

ENTRYPOINT "/bin/bash"

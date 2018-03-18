FROM ubuntu:bionic

MAINTAINER Lucas Zanella (me@lucaszanella.com)

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
    curl git wget libgtk-3-dev build-essential ca-certificates sudo

RUN echo "root:123" | chpasswd
    
WORKDIR /home/project/src

RUN curl -fsSL https://deb.nodesource.com/setup_9.x -o get-node.sh  && /bin/sh get-node.sh && rm get-node.sh\
    && apt-get install -y nodejs
    
RUN npm install -g exp create-proton-app create-react-native-app fb-watchman

RUN npm i -g npm@4.6.1

#RUN sudo sysctl -w kern.maxfiles=5242880 && sudo sysctl -w kern.maxfilesperproc=524288

#RUN mkdir -p /home/deps && cd /home/deps

ENTRYPOINT "/bin/bash"

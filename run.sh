docker-compose run --rm -u $( id -u $USER ):$( id -g $USER ) -v $PWD/src/home:/home/$USER -v $HOME/Android/Sdk:/home/lz/Android/Sdk dev

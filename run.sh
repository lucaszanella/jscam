docker-compose run --rm -u $( id -u $USER ):$( id -g $USER ) -v $PWD/src/home:/home/$USER -v $HOME/Android/Sdk:/home/$USER/Android/Sdk -e USER=$USER --entrypoint "/bin/bash /my_entrypoint.sh" dev

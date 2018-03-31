#docker-compose run --rm -u $( id -u $USER ):$( id -g $USER ) -v $PWD/dev/home:/home/$USER -v $HOME/Android/Sdk:/home/$USER/Android/Sdk -e USER=$USER --entrypoint "/bin/bash /my_entrypoint.sh" dev
#docker-compose run --rm -u $( id -u $USER ):$( id -g $USER ) -v $PWD/home:/home/$USER -e USER=$USER -e DISPLAY appunespdev
docker-compose run --rm -u $( id -u $USER ):$( id -g $USER ) -v $PWD/home:/home/$USER -v $HOME/Android/Sdk:/android-sdk-linux -e USER=$USER jscam

docker-compose run --rm -u $( id -u $USER ):$( id -g $USER )  -v $PWD/src/home:/home/$USER jscam

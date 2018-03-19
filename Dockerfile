from ubuntu
COPY helloworld.cpp /mnt
apt-get update
apt-get install gcc
gcc helloworld.cpp

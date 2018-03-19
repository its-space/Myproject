from ubuntu
COPY helloworld.cpp /mnt
run apt update
run apt install -y  g++
run  g++ /mnt/helloworld.cpp

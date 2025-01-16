FROM ubuntu:24.04
LABEL maintaner="giovanesantos1999@gmail.com"
RUN apt update && apt install -y  \
    gcc g++ cmake make  \
    libjsoncpp-dev uuid-dev \
    zlib1g-dev \
    openssl libssl-dev
RUN apt clean

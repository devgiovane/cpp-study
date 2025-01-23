FROM ubuntu:24.04
LABEL maintaner="giovanesantos1999@gmail.com"
# install basic
RUN apt update && apt install -y  \
    gcc g++ cmake make  \
    build-essential autoconf libtool pkg-config \
    git curl \
    libsqlite3-dev
# sisntem libs
RUN apt install -y \
    libjsoncpp-dev uuid-dev zlib1g-dev openssl libssl-dev
RUN apt clean
# build gRPC
RUN git clone --recurse-submodules -b v1.66.0 --depth 1 --shallow-submodules https://github.com/grpc/grpc
WORKDIR /grpc
RUN mkdir -p cmake/build && cd cmake/build && \
    cmake ../.. -DgRPC_INSTALL=ON -DgRPC_BUILD_TESTS=OFF -DCMAKE_CXX_STANDARD=17 -DCMAKE_INSTALL_PREFIX=/usr/local && \
    make -j 4 && \
    make install
RUN rm -rf /grpc
WORKDIR /app
EXPOSE 2510

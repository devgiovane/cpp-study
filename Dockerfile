FROM alpine:latest AS builder
RUN apk update && apk add build-base cmake
WORKDIR /app
COPY . .
RUN mkdir build && cd build && cmake .. && make -j

FROM alpine:latest
RUN apk update && apk add libstdc++
WORKDIR /app
COPY --from=builder /app/build/study /app/study
ENTRYPOINT [ "/app/study" ]

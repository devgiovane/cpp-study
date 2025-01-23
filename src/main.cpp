#include <ostream>
#include <iostream>
#include <grpcpp/grpcpp.h>

#include "core/user.hpp"
#include "core/pix.hpp"
#include "core/bank.hpp"
#include "core/account.hpp"

using namespace core;

int main() {
    auto user = User("John Doe", "123.456.789-10");
    auto bank = Bank("NuBank", "620");
    auto account = Account("1234567", "8", &bank);
    auto pix = Pix("", "123.456.789-10", &account);
    std::cout << user.getUid() << std::endl;
    std::cout << bank.getUid() << std::endl;
    std::cout << account.getUid() << std::endl;
    std::cout << pix.getUid() << std::endl;
    // const std::string server_address{"localhost:2510"};
    // grpc::ServerBuilder builder;
    // builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    // std::cout << "Server listening on " << server_address << std::endl;
    // const std::unique_ptr server{builder.BuildAndStart()};
    // if (!server) {
    //     std::cerr << "Server error in start" << std::endl;
    //     return 1;
    // }
    // server->Wait();
    return 0;
}

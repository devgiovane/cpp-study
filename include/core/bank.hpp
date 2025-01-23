#ifndef BANK_HPP
#define BANK_HPP

#include <string>

namespace core {

    class Bank {
        std::string uid;
        std::string name;
        std::string code;

    public:
        Bank(std::string name, std::string code);
        std::string getUid();
        std::string getName();
        std::string getCode();
    };

}

#endif //BANK_HPP

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
#include "bank.hpp"

namespace core {

    class Account {
        std::string uid;
        std::string number;
        std::string digit;
        Bank *bank;

    public:
        Account(std::string number, std::string digit, Bank *bank);
        std::string getUid();
        std::string getNumber();
        std::string getDigit();
        [[nodiscard]] Bank* getBank() const;
    };

}

#endif //ACCOUNT_HPP

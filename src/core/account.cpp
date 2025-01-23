#include "core/uuid.hpp"
#include "core/account.hpp"

namespace core {

    Account::Account(std::string number, std::string digit, Bank *bank) {
        this->uid = Uuid::v4();
        this->number = std::move(number);
        this->digit = std::move(digit);
        this->bank = bank;
    }

    std::string Account::getUid() {
        return this->uid;
    }

    std::string Account::getNumber() {
        return this->number;
    }

    std::string Account::getDigit() {
        return this->digit;
    }

    Bank* Account::getBank() const {
        return this->bank;
    }

}



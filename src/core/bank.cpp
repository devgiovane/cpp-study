#include "core/uuid.hpp"
#include "core/bank.hpp"

namespace core {

    Bank::Bank(std::string name, std::string code) {
        this->uid = Uuid::v4();
        this->name = std::move(name);
        this->code = std::move(code);
    }

    std::string Bank::getUid() {
        return this->uid;
    }

    std::string Bank::getName() {
        return this->name;
    }

    std::string Bank::getCode() {
        return this->code;
    }

}

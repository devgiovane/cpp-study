#include "core/user.hpp"
#include "core/uuid.hpp"

namespace core {

    User::User(std::string name, std::string document) {
        this->uid = Uuid::v4();
        this->name = std::move(name);
        this->document = std::move(document);
    }

    std::string User::getUid() {
        return this->uid;
    }

    std::string User::getName() {
        return this->name;
    }

    std::string User::getDocument() {
        return this->document;
    }

}

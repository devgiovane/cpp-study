#include <uuid/uuid.h>
#include "core/pix.hpp"

namespace core {

    Pix::Pix(std::string kind, std::string key, Account *account) {
        uuid_t uuid;
        uuid_generate(uuid);
        char uuid_str[37];
        uuid_unparse_lower(uuid, uuid_str);
        this->uid = uuid_str;
        this->kind = std::move(kind);
        this->key = std::move(key);
        this->account = account;
        this->status = ACTIVE;
    };

    std::string Pix::getUid() {
      return this->uid;
    }

    std::string Pix::getKind() {
      return this->kind;
    }

    std::string Pix::getKey() {
      return this->key;
    }

    Account Pix::getAccount() const {
      return *this->account;
    }

    PixStatus Pix::getStatus() const {
      return this->status;
    }

}


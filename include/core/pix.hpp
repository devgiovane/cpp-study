#ifndef PIX_HPP
#define PIX_HPP

#include <string>
#include "account.hpp"

namespace core {

    enum PixStatus {
  		ACTIVE = 1, INACTIVE
    };

    class Pix {
        std::string uid;
        std::string kind;
        std::string key;
        Account *account;
        PixStatus status;

    public:
        Pix(std::string kind, std::string key, Account* account);
        std::string getUid();
        std::string getKind();
        std::string getKey();
        [[nodiscard]] Account getAccount() const;
        [[nodiscard]] PixStatus getStatus() const;
    };

}

#endif //PIX_HPP

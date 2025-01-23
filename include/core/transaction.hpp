#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP

#include <string>

#include "pix.hpp"
#include "account.hpp"

namespace core {

    enum TransactionSatus {
        PENDING = 1,
        COMPLETED,
        ERROR,
        RECEIVED,
    };

    class Transaction {
        Account* accountFrom;
        Pix* pixTo;
        TransactionSatus status;
        std::string description;
        float amount;

        public:
            Transaction(Account* accountFrom, Pix* pixTo, float amount, std::string description);
            [[nodiscard]] Account* getAccountFrom() const;
            [[nodiscard]] Pix* getPixTo() const;
            [[nodiscard]] TransactionSatus getStatus() const;
            std::string getDescription();
            [[nodiscard]] float getAmount() const;
    };

}

#endif //TRANSACTION_HPP

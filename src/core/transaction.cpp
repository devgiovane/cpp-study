#include "core/transaction.hpp"

namespace core {

    Transaction::Transaction(Account *accountFrom, Pix *pixTo, float amount, std::string description) {
        this->accountFrom = accountFrom;
        this->pixTo = pixTo;
        this->description = std::move(description);
        this->amount = amount;
        this->status = PENDING;
    }

    Account* Transaction::getAccountFrom() const {
        return this->accountFrom;
    }

    Pix* Transaction::getPixTo() const {
        return this->pixTo;
    }

    std::string Transaction::getDescription() {
        return this->description;
    }

    float Transaction::getAmount() const {
        return this->amount;
    }

    TransactionSatus Transaction::getStatus() const {
        return this->status;
    }

}

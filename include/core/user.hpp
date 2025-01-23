#ifndef USER_HPP
#define USER_HPP

#include <string>

namespace core {

    class User {
        std::string uid;
        std::string name;
        std::string document;

    public:
        User(std::string name, std::string document);
        std::string getUid();
        std::string getName();
        std::string getDocument();
    };

}

#endif //USER_HPP

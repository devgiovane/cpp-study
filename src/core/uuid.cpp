#include <uuid/uuid.h>
#include "core/uuid.hpp"

namespace core {

    std::string Uuid::v4() {
        uuid_t uuid;
        uuid_generate(uuid);
        char uuid_str[37];
        uuid_unparse_lower(uuid, uuid_str);
        return uuid_str;
    }

}

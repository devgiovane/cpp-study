#ifndef PIXREPOSITORY_HPP
#define PIXREPOSITORY_HPP

#include <string>
#include "core/pix.hpp"

namespace infra::repository {

    class PixRepository {
          public:
              PixRepository();
              bool register_key(core::Pix& pix);
              core::Pix find_key_by_kind(std::string kind);
    };

}

#endif //PIXREPOSITORY_HPP

#include <base_contracts/interfaces/logger.hpp>

ACTION handle_logger::logcaller(name user) {
    require_auth(get_self());
}

#pragma once

#include "base_contracts/logger.cpp"

class[[eosio::contract]] main_contract: public handle_logger {
    public:
        main_contract(name receiver, name code, datastream<const char*> ds)
            : handle_logger(receiver, code, ds) {}

        [[eosio::contract("main_contract"), eosio::action]]
        void hello(name user);
};

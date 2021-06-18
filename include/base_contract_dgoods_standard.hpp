#pragma once

#include "base_contracts/logger.cpp"

CONTRACT main_contract: public handle_logger {
    public:
        main_contract(name receiver, name code, datastream<const char*> ds)
            : handle_logger(receiver, code, ds) {}

        [[eosio::contract("base_contract")]]
        ACTION hello(name user);
};

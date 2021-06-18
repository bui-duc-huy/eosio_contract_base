#pragma once

#include <eosio/asset.hpp>
#include <eosio/symbol.hpp>
#include <eosio/eosio.hpp>
#include <eosio/time.hpp>
#include <eosio/singleton.hpp>
#include <string>
#include <vector>

#include "base_contracts/dgoods.cpp"

using namespace std;
using namespace eosio;

CONTRACT handle_logger: public dgoods {
    public:

        handle_logger(name receiver, name code, datastream<const char*> ds)
            : dgoods(receiver, code, ds) {}

        [[eosio::contract("main_contract")]]
        ACTION logcaller(name user);
};

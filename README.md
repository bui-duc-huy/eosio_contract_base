# EOSIO smart contract inherit from dgoods standard 

## Using for initial new smart contract on EOSIO Blockchain
- [dGoods](https://dgoods.org/)

## Build project

```sh
mkdir build
cmake ..
make
```

## After build
  * The built smart contract is under the 'main_contract' directory in the 'build' directory
  * You can then do a 'set contract' action with 'cleos' and point in to the './build/main_contract' directory**
  * Additions to CMake should be done to the CMakeLists.txt in the './src' directory and not in the top level CMakeLists.txt

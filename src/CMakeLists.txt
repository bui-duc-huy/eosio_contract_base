project(main_contract)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( main_contract main_contract base_contract_dgoods_standard.cpp )
target_include_directories( main_contract PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( main_contract ${CMAKE_SOURCE_DIR}/../ricardian )

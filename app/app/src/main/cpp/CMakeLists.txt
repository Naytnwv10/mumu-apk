cmake_minimum_required(VERSION 3.22.1)
project("mumu_virt_engine")

add_library(
    mumu_virt_engine
    SHARED
    mumu_kvm_bridge.cpp
)

find_library(log-lib log)
target_link_libraries(mumu_virt_engine ${log-lib})

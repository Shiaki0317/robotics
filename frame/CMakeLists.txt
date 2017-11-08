cmake_minimum_required(VERSION 2.6)
# リリースビルド用オプション
SET(CMAKE_C_FLAGS_RELEASE "-Wall -O2")
# デバッグビルド用オプション
SET(CMAKE_C_FLAGS_DEBUG "-g")
# build type : release
SET(CMAKE_BUILD_TYPE Release)

# project name
project(flame)
# persion number
SET(serial "1.0.0")
# shared library version number
SET(soserial "1")


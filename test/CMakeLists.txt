cmake_minimum_required( VERSION 3.0 )
project( cmake_test )

# load the module to use pkg-config
find_package( PkgConfig )

# search library with pkg-config and name its results "LIBSAMPLE"
pkg_check_modules( EIGEN3 REQUIRED eigen3 )

# use the variable <RESULTNAME>_INCLUDE_DIRS to get include paths
include_directories( ${EIGEN3_INCLUDE_DIRS} )

add_executable( test_eigen test_eigen.cpp )

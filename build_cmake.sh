mkdir -p _build

cd _build

cmake -G "Unix Makefiles" -D CMAKE_INSTALL_PREFIX=/home/student/test_local ../IT-Cross-2017-Task1/Derivator/DerivatorLib/

make

cmake -D COMPONENT=developer -P cmake_install.cmake

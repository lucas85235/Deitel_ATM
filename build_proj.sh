#!/bin/bash

echo ""
echo "Verificando a existencia de diretorios . . ."
echo ""

#if [ -d $(pwd)/build ]
#then
#    rm -rf $(pwd)/build
#fi

echo "Compilando CMake"
echo ""
cmake -H. -Bbuild
echo ""

echo "Compilando MakeFiles"
echo ""
cd build/
make
echo ""

exit

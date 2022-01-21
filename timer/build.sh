cd build
cmake ../ && make
cp ../src/*.h ../output/include
cp ./libtimer.so ../output/lib
cd ../
echo "copy success"
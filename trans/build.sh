cd build
cmake .. && make
cp ../src/*.h ../output/include
cp ./*.so ../output/lib
cd ../
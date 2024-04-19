compile: main.cpp 
	 g++  NODE.cpp LL.cpp main.cpp -o LL

run: LL
	 ./LL


clean: LL
	 rm LL
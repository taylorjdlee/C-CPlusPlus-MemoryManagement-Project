# ece-654-memManageProject

## Setup

### 1. Valgrind (Linux)

* Install g++/gcc via 'sudo apt install g++'
* Use `gcc -o test -g test.c` to create an executable to be tested or `g++ -o test -g test.cpp` for C++ programs
* Download valgrind via the command 'sudo apt-get install valgrind'
* Test via the command 'valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./test'

### 2. Dr.Memory (Windows)

* Download Microsoft Visual Studio from [here][(https://visualstudio.microsoft.com/)
* Use `cl /Zi /MT /EHsc /Oy- /Ob0 /test.exe test.c` in the visual studio command line to create an executable to be tested or `cl /Zi /MT /EHsc /Oy- /Ob0 /test.exe test.cpp` for C++ programs
* Download the Dr.Memory installer from [here] (https://drmemory.org/page_download.html)
* Run the Dr.Memory.msi file
* Once installed you can drag the generated .exe file onto the Dr.Memory desktop application it should appear similar to below
* ![Dr.Memory](https://i.imgur.com/S6BcqE5.png)




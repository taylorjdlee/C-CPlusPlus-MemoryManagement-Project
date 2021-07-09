# ece-654-memManageProject

### 1. Valgrind (Linux)

* Download and install gcc/g++ via 'sudo apt install g++'
* For C programs use `gcc -o test -g test.c` to create an executable to be tested or `g++ -o test -g test.cpp` for C++ programs
* Download and install valgrind via the command 'sudo apt-get install valgrind'
* Test via the command 'valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./test' which will produce an output
* Follow this link for additional help https://www.valgrind.org/docs/manual/quick-start.html

### 2. AddressSanitizer (Windows)

* Download Microsoft Visual Studio https://visualstudio.microsoft.com/
* For C programs use `cl uninitialised_memory_write.c /fsanitize=address /Zi` in the visual studio command line to create an executable to be tested or `cl uninitialised_memory_write.cpp /fsanitize=address /Zi` for C++ programs
* Run the .exe to get your AddressSanitizer output
* Follow this link for additional help https://docs.microsoft.com/en-us/cpp/sanitizers/asan?view=msvc-160

### 3. Dr.Memory (Windows)

* Download Microsoft Visual Studio https://visualstudio.microsoft.com/
* For C programs use `cl /Zi /MT /EHsc /Oy- /Ob0 /test.exe test.c` in the visual studio command line to create an executable to be tested or `cl /Zi /MT /EHsc /Oy- /Ob0 /test.exe test.cpp` for C++ programs
* Download the Dr.Memory installer https://drmemory.org/page_download.html
* Run the Dr.Memory.msi file to install Dr.Memory
* Once installed you can drag the generated .exe file onto the Dr.Memory desktop application it should appear similar to below, this will produce an output
* Follow this link for additional help https://drmemory.org/page_prep.html#sec_prep_windows

![Dr.Memory](https://i.imgur.com/S6BcqE5.png)




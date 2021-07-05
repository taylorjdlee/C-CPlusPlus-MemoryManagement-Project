  #include <stdlib.h>
  #include <unistd.h>

  int main()
  {
    char* arr = malloc(10);
    *arr = 1;

    // Write 1 byte of arr to standard output
    write(1, arr, 1);

    // Write 10 bytes of arr to standard output
    write(1, arr, 10);
    
    free(arr);
    return 0;
  }

#include <unistd.h>
#include <stdio.h>
#include "cfile.h"


//==================================================================================
// The "say_hello()" function is in a .c (not .cpp) file.  The header-file that 
// declares it uses the c++ "extern C" construct to tell the C++ compiler that this
// function's symbol in the symbol table is in the C-style. (i.e., not name-mangled)
//==================================================================================


int main()
{
    printf("Hello world, from C++!\n");
    say_hello();
    printf("Hello again from C++\n");
}

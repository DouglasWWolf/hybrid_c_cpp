#include <stdio.h>

//==================================================================================
// Since this is a .c file that will be compiled as a C (not C++) program we can
// assume that the "say_hello" symbol will appear in the symbol table using "C"
// linkage. (i.e., without C++ name-mangling)
//==================================================================================

void say_hello()
{
    printf("Hello from C!\n");
}

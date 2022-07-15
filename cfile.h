//==================================================================================
// The #ifdef/extern "C" wrappers ensure that function names declared in this
// file will be assumed to have C-style symbol names (i.e., no C++ name-mangling), 
// even when compiled with a C++ compiler.
//
// This header file can be safely #include'd in either a .c or a .cpp source file
//==================================================================================

#ifdef __cplusplus
extern "C" {
#endif

void say_hello();


#ifdef __cplusplus
}
#endif


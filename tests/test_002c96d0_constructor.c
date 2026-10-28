/* Compile the actual constructor for host-memory fixtures. No Xbox ABI bridge. */
#include "../src/main_unclassified/band_002c/0x002c96d0.c"

#if defined(_WIN32)
__declspec(dllexport)
#endif
void *bf_test_002c96d0(void *output, uint32_t source)
{
    return FUN_002c96d0(output, source);
}

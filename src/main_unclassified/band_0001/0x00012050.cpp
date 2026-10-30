/* Brute Force 0x00012050; Original body SHA-256: EC243CEEE4EEC3F10EE90908D7EDB829E943FFE308D6D8E44C837A83016EA995
 * DRAFT: Unverified C11 model. ABI_UNVERIFIED; float-to-int conversion semantics require assembly proof. */
#include <stdint.h>
#include <stddef.h>
int32_t BF_00012050_C11_draft(uint32_t address, float param_2)
{
    const float upper = *(const float *)(uintptr_t)(address + UINT32_C(0x54));
    const float lower = *(const float *)(uintptr_t)(address + UINT32_C(0x50));
    /* TODO: Float precision/rounding and invalid conversion behavior remain unknown. */
    return (int32_t)(((upper - param_2) * 100.0) / lower);
}

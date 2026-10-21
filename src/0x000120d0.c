/* Brute Force 0x000120d0; Original body SHA-256: A64E91D3471A4FB7B85953214F39CA5876EC33002C6118E5540DA1D2A0FD8AF6
 * DRAFT: C11 model; ABI_UNVERIFIED, EAX and ECX modeled as args. */
#include <stdint.h>
#include <stddef.h>
/* TODO: Confirm original function's signature and original callee's ABI. */
extern void FUN_0008f6a0(void);
void BF_000120d0_C11_draft(uint32_t incoming_eax, uint32_t incoming_ecx)
{
    if (*(const int32_t *)(uintptr_t)(incoming_ecx + UINT32_C(0x10)) != (int32_t)incoming_eax) {
        FUN_0008f6a0();
    }
}

/* Brute Force 0x00012080; Original body SHA-256: C820898F593F971E27447B5C0A6E3EF5B2E49B796859CCE4F04B1B5D89A733C9
 * DRAFT: C11 model; ABI_UNVERIFIED, incoming ECX modeled as argument. */
#include <stdint.h>
#include <stddef.h>
/* TODO: Confirm call ABI and implicit register arguments. */
extern void FUN_0008f6e0(void);
void BF_00012080_C11_draft(uint32_t incoming_ecx)
{
    if (*(const int32_t *)(uintptr_t)(incoming_ecx + UINT32_C(4)) != 0) {
        FUN_0008f6e0();
        return;
    }
}

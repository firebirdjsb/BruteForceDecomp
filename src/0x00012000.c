/* Brute Force 0x00012000; Original body SHA-256: CC4EDD09EF3836CDAFF6F647B64566BFACBAE0E2B722ED4CF9691E99BF36B8F3
 * DRAFT: Unverified source reconstruction; ABI_UNVERIFIED. Not original source. */
#include <stdint.h>
#include <stddef.h>
typedef struct BF_local_region_12000 {
    uint8_t reserved_00[8]; /* uninitialized by observed pseudocode */
    uint32_t copied_value;
    uint32_t duplicate;
    uint32_t zero1;
    uint32_t arg1;
    uint32_t zero2;
    uint32_t arg2;
} BF_local_region_12000;
_Static_assert(sizeof(BF_local_region_12000) == 32, "stack model size");
_Static_assert(offsetof(BF_local_region_12000, copied_value) == 8, "stack model offset");
/* TODO: External call's ABI and prototype not established; placeholder only. */
extern void FUN_000e4190(uint32_t incoming_eax, void *stack_region);
/* TODO: incoming EAX modeled as a third explicit parameter, NOT original ABI. */
void BF_00012000_C11_draft(uint32_t param_1, uint32_t param_2, uint32_t incoming_eax)
{
    BF_local_region_12000 r; /* deliberately not initialized */
    r.copied_value = *(const uint32_t *)(uintptr_t)(incoming_eax + UINT32_C(0x50));
    r.arg1 = param_1;
    r.zero1 = 0;
    r.zero2 = 0;
    r.arg2 = param_2;
    r.duplicate = r.copied_value;
    FUN_000e4190(incoming_eax, r.reserved_00);
}

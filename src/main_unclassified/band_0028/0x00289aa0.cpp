/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E4FDC3874B54E0B84536AA287AF32999795DEBEB064BD5666AB11A76EB3EF96
 * Entry: 0x00289aa0, Ghidra index: 9141, label: FUN_00289aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
undefined4 FUN_00289aa0(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(uint *)(DAT_00469888 + 0x74) <= *(uint *)(DAT_00469888 + 0x78)) {
    FUN_002942f0(0);
  }
  if ((in_EAX != 0) &&
     ((*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + in_EAX * 0x10) == -2 ||
      (iVar1 = FUN_00292790(), iVar1 == 0)))) {
    return *(undefined4 *)(*(int *)(*(int *)(DAT_00469888 + 4) + -8 + in_EAX * 0x10) + 0x20);
  }
  return 0;
}

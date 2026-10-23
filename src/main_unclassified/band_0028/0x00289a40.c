/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B77249B9531FFA3D74C124186D2D8C1E79A4B8AB0C08B85FE869249178F91D31
 * Entry: 0x00289a40, Ghidra index: 9140, label: FUN_00289a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
int FUN_00289a40(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(uint *)(DAT_00469888 + 0x74) <= *(uint *)(DAT_00469888 + 0x78)) {
    FUN_002942f0(0);
  }
  if ((in_EAX != 0) &&
     ((*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + in_EAX * 0x10) == -2 ||
      (iVar1 = FUN_00292790(), iVar1 == 0)))) {
    return *(int *)(*(int *)(DAT_00469888 + 4) + -8 + in_EAX * 0x10) + 0x28;
  }
  return 0;
}

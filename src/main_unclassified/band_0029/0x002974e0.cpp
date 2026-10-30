/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 498321E5B223CDBF68AD8BCA70B87FAE87E3505673CA23C222EE52C5C2B352EB
 * Entry: 0x002974e0, Ghidra index: 9346, label: FUN_002974e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_002974e0(void)

{
  int iVar1;
  
  if (((*(int *)(DAT_00469888 + 0x14) < 1) ||
      (iVar1 = *(int *)(DAT_00469888 + 0x10) + 1, iVar1 == 0)) ||
     (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -3)) {
    FUN_00295240();
  }
  FUN_00289d80();
  if (((*(int *)(DAT_00469888 + 0x14) < 2) ||
      (iVar1 = *(int *)(DAT_00469888 + 0x10) + 2, iVar1 == 0)) ||
     ((*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -1 &&
      (iVar1 = FUN_00292690(), iVar1 != 0)))) {
    FUN_00295240();
  }
  FUN_002899f0();
  FUN_002ebf10();
  FUN_00289ea0();
  FUN_00289d80();
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24DF8AA2BB85D50ED2BEC4979CFA302C7ED52258D550F4585B7FBB34A353DF81
 * Entry: 0x000508e0, Ghidra index: 715, label: FUN_000508e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000508e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    if (param_1 != param_3) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[0x17] = param_3[0x17];
      puVar2 = param_3 + 3;
      puVar3 = param_1 + 3;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_001d59e0();
      FUN_00248d00();
    }
  }
  return;
}

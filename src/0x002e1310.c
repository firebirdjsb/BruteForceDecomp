/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87DC98B65EA8BBB67859C4987E1CE214475D078D97BACC610FEAAF1CD0F813A4
 * Entry: 0x002e1310, Ghidra index: 10367, label: FUN_002e1310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e1310(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined2 local_14;
  
  local_18._2_1_ = 0;
  puVar2 = &local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_14 = *param_2;
  local_18._3_1_ = 0x10;
  FUN_002e3f50();
  FUN_002e0960(&local_18,param_1);
  return;
}

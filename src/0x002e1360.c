/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D6F3DD5E3D4A422BCA34424403F86A19BD29B35E09EE8B0FE9D96FD5D48345A
 * Entry: 0x002e1360, Ghidra index: 10368, label: FUN_002e1360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e1360(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18._2_1_ = 0;
  puVar1 = &local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_18._3_1_ = 0x60;
  FUN_002e0960(&local_18,param_1);
  return;
}

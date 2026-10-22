/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0069AB178F347C6FBAF080E540977278F8FD2F51D7D5EADEB2990433BADFE6F
 * Entry: 0x002e12a0, Ghidra index: 10366, label: FUN_002e12a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e12a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  int local_8;
  undefined4 local_4;
  
  local_18._2_1_ = 0;
  puVar2 = &local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_8 = *(int *)(param_1 + 700);
  if (local_8 == 0) {
    return -0x7fffbffb;
  }
  local_4 = *(undefined4 *)(param_1 + 0x2c0);
  local_18._3_1_ = 0x31;
  iVar1 = FUN_002e0960(&local_18,param_1);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 700) = 0;
  }
  return iVar1;
}

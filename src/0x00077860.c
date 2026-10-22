/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03C58A192AE5E7E88CA204E8F32A108087820B85579E97429A0483FF67ADF588
 * Entry: 0x00077860, Ghidra index: 1404, label: FUN_00077860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00077860(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003075e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00077940(param_4,param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

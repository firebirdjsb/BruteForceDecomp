/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40E7316B0D9317588B7297C8E7B1060D39A4F310A1EE247847D669F0619BAA32
 * Entry: 0x002e1790, Ghidra index: 10371, label: FUN_002e1790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e1790(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_18._2_1_ = 0;
  puVar2 = &local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_13 = param_3;
  local_18._3_1_ = 0x20;
  local_14 = param_2;
  FUN_002e2c20(6,1);
  FUN_002e2c20(6,1);
  FUN_002e0960(&local_18,param_1);
  return;
}

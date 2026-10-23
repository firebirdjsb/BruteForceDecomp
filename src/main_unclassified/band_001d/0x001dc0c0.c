/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2626BA2C5F37D685F806AB178887EFC7D978C55F6A2EB19B1CDED2C27C131E16
 * Entry: 0x001dc0c0, Ghidra index: 6542, label: FUN_001dc0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc0c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308cf0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dd250(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

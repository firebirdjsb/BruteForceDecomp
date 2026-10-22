/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64EC057489CF14E423EAEC8669C35B566220892DC2A0E698D5EBA41358B25CF7
 * Entry: 0x0016e4e0, Ghidra index: 4817, label: FUN_0016e4e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0016e4e0(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307500;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    FUN_0016df50(in_ECX);
    param_3 = param_3 + 0x34;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

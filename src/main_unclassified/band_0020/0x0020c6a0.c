/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EEF970AFA8459399F6D9DF1818F9C096B14966E027B4D16E9169BC8FF7AACDB
 * Entry: 0x0020c6a0, Ghidra index: 7357, label: FUN_0020c6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c6a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307fe0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_0020c1f0(param_2);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

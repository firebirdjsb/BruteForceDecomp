/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1328FC1C021A8576D0397DC11958ECD078D5515C1E5462C3284F79097B4BAEF
 * Entry: 0x0020dc80, Ghidra index: 7393, label: FUN_0020dc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020dc80(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307b20;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001fd1e0();
    }
    param_1 = param_1 + 0x24;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

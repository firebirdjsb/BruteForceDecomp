/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF7819CE44316058E4514A5902951A32B3B146D3CCF9642D6ED87ED1E6377446
 * Entry: 0x001d9d80, Ghidra index: 6485, label: FUN_001d9d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d9d80(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003087c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001c9580();
    }
    param_1 = param_1 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

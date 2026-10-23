/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40BD4C2E65088CE69B94A743CAE5AC3AFE7CC7203A78B84DD2983569197AA5EB
 * Entry: 0x001dfae0, Ghidra index: 6689, label: FUN_001dfae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dfae0(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003073b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x400) {
    FUN_001dce90(in_ECX);
    param_3 = param_3 + 0x400;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

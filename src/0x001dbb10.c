/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9319EDD3C8C4C56011BAE5E61044C738B9C70BDE801C9A5D9BB44C958EAF1EE7
 * Entry: 0x001dbb10, Ghidra index: 6532, label: FUN_001dbb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dbb10(int param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003096b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001ca540(in_ECX);
    }
    param_1 = param_1 + 0x344;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

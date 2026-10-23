/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E621D00310204BAF9E64ABA64D7F1D5AED9BDA525E15CB3259B57B7613A18FA
 * Entry: 0x001da6f0, Ghidra index: 6500, label: FUN_001da6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001da6f0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307880;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dcf30(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B395D75833077FD05CD52E2C082258136D22A6F2348744D433EF9D5AA07638F
 * Entry: 0x001de3c0, Ghidra index: 6651, label: FUN_001de3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001de3c0(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003077a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_001dd070(in_ECX);
    param_3 = param_3 + 0x1c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

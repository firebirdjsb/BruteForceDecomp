/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDD4623AE772287BEFBE16F7B2A98C342E29567B0042185801D053ECFBE38B32
 * Entry: 0x0024c000, Ghidra index: 8280, label: FUN_0024c000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024c000(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308a50;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_0024bc50(param_4);
    param_3 = param_3 + 0x20;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

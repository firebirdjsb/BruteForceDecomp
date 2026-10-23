/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C61023F12B798928C1F15AE40FF131F669CFA728BA1D0440A77C565CA4691A9F
 * Entry: 0x0024b760, Ghidra index: 8255, label: FUN_0024b760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b760(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308640;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0024bcf0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B88175BF4969FC370430DA8CFD288F8DC0DACB5D29772FFAAE5521A384B1592
 * Entry: 0x001df240, Ghidra index: 6675, label: FUN_001df240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001df240(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307b70; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307b70U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_001dd220(param_4);
    param_3 = param_3 + 0xc;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

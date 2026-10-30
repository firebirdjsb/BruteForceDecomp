/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 739EA0F4C57B45D919E31FA47484B43329C15D3BA0018912BC6CACB29F3B22E5
 * Entry: 0x001defe0, Ghidra index: 6671, label: FUN_001defe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001defe0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309660; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309660U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1ac) {
    if (param_3 != 0) {
      FUN_001ca410();
    }
    param_3 = param_3 + 0x1ac;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

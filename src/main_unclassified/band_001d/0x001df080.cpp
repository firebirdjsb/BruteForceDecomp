/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6CD3770B4D4EE33BAA00FA20C99EFF0BAC69121ADFB9B70451B76704D77E9D9
 * Entry: 0x001df080, Ghidra index: 6672, label: FUN_001df080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001df080(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309930; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309930U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x344) {
    if (param_3 != 0) {
      FUN_001ca540(param_1);
    }
    param_3 = param_3 + 0x344;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

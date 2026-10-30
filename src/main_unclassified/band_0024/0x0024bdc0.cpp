/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EB95BEF66BD589A797B181E65D41A7F6743DA6BA168030CEBFCFFC7CA7FAE4C
 * Entry: 0x0024bdc0, Ghidra index: 8276, label: FUN_0024bdc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024bdc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308a70; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308a70U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_0024bb60(param_4);
    param_3 = param_3 + 0x14;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 822F30FE2893D9BAE3F0207C6CEF0B0D66E781A41FF3CA148C401F6930994A20
 * Entry: 0x001ddb30, Ghidra index: 6638, label: FUN_001ddb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ddb30(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308c50; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308c50U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x68) {
    if (param_3 != 0) {
      FUN_001c9660();
    }
    param_3 = param_3 + 0x68;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

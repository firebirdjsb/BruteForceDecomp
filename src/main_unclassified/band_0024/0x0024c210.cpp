/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5424E8400F54CE4822EF2D7631E5723C3BA8AF4FD11BD0990608B75629BBFFAE
 * Entry: 0x0024c210, Ghidra index: 8283, label: FUN_0024c210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024c210(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307a70; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307a70U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    if (param_3 != 0) {
      FUN_0023c960();
    }
    param_3 = param_3 + 0x38;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4202B46B637CE0D1075E08B4FAFBD20720935EEC4887E4C78DDA92B86C98D92F
 * Entry: 0x001df370, Ghidra index: 6677, label: FUN_001df370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001df370(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309140; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309140U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_001dd1a0(param_4);
    param_3 = param_3 + 0x14;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2422B74E1622635BBF9ECA56CBCF728EAB349906BE52EFB1E7CB5E3B26B8D66
 * Entry: 0x0017dca0, Ghidra index: 5090, label: FUN_0017dca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0017dca0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003088e0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003088e0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_0017d9b0(param_4);
    param_3 = param_3 + 0x18;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

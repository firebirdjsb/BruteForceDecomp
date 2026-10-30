/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF24749CCED9D42FA8ECB5141F1F0B2A429FBB3F4B89FB83DB75CC07DDEECC4B
 * Entry: 0x0028e430, Ghidra index: 9210, label: FUN_0028e430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028e430(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307290; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307290U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0028e530(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

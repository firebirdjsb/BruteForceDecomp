/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41F5C7AE950CE2E7E7DD21095FF211A967880CE64C5A490CBCB653878E8E978F
 * Entry: 0x0001d860, Ghidra index: 142, label: FUN_0001d860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Address from mapped original XBE; ABI/runtime mapping remains unverified. */
int FUN_0001d860(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x00307630u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_0001d700(in_ECX);
    param_3 = param_3 + 0xc;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

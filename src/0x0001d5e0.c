/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4333F63FD555DC3C3EBB582425FCB7EAE8B7BC485F62A32B92CD39F355BA392
 * Entry: 0x0001d5e0, Ghidra index: 135, label: FUN_0001d5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Address from mapped original XBE; ABI/runtime mapping remains unverified. */
void FUN_0001d5e0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x00306df0u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0001d6e0(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

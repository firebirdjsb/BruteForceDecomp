/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1732C2B8D7466DFD5D76111329B46723C08D21964CF2F81A553F5998C9B46382
 * Entry: 0x00050b50, Ghidra index: 721, label: FUN_00050b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Original mapped XBE image address; ABI/relocations unverified. */
void FUN_00050b50(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x003085c0u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00050e40(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

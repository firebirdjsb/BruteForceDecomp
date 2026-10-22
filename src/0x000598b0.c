/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 899A95051F0ED40C28EE88552752DC3EE205B34D9A51DE69B502BEB16CCBCAA7
 * Entry: 0x000598b0, Ghidra index: 892, label: FUN_000598b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00306f80; address-only label. Link definition and role unverified. */
extern unsigned char LAB_00306f80;

void FUN_000598b0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00306f80;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_000d2d80(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58742D4F7C78ABB8C60A372F257CD2EBE42101F341CB32BEBEB17BA416F6E3A2
 * Entry: 0x0004b7b0, Ghidra index: 616, label: FUN_0004b7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Original mapped address; ABI/relocations unverified. */
int FUN_0004b7b0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x00308a00u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    if (param_3 != 0) {
      FUN_001e0dd0(param_3);
    }
    param_3 = param_3 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

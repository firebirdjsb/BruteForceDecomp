/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C176D27CE74BA89AC6259DF2C4CBF1D753CB03D0A74AD448295131354DF2A482
 * Entry: 0x001dad50, Ghidra index: 6509, label: FUN_001dad50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dad50(undefined4 *param_1,int param_2)

{
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308d60; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308d60U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
      param_1[2] = in_ECX[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(in_ECX + 3);
      FUN_001cc3b0(param_1 + 4);
      param_1[8] = in_ECX[8];
      FUN_001e0dd0(param_1 + 9);
      FUN_001e0dd0(param_1 + 0xd);
    }
    param_1 = param_1 + 0x11;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

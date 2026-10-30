/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78D8A5A833FB63055BF0999C6168973E769A651CA7A0379214B53BE86891EF6F
 * Entry: 0x001da4a0, Ghidra index: 6497, label: FUN_001da4a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001da4a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308780; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308780U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      uVar1 = in_ECX[3];
      uVar2 = in_ECX[2];
      param_1[1] = in_ECX[1];
      param_1[2] = uVar2;
      param_1[3] = uVar1;
      param_1[4] = in_ECX[4];
      FUN_001cba30(param_1 + 5);
    }
    param_1 = param_1 + 9;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

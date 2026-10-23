/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E18F956BC289EB5F99872E4291285C12765729FC423632FEAEAC02AC1520A674
 * Entry: 0x001db3c0, Ghidra index: 6520, label: FUN_001db3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db3c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308740; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308740U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
      param_1[2] = in_ECX[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(in_ECX + 3);
      *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
      param_1[10] = 0xf;
      param_1[9] = 0;
      if ((uint)param_1[10] < 0x10) {
        puVar1 = param_1 + 5;
      }
      else {
        puVar1 = (undefined4 *)param_1[5];
      }
      *(undefined1 *)puVar1 = 0;
      FUN_0001f4f0(in_ECX + 4,0,0xffffffff);
    }
    param_1 = param_1 + 0xb;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

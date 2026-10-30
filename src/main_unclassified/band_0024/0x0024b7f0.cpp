/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FF5089DD6E59FDC5B4333514924CD7F309AAD03821FB3002F2E9CF109854A9B
 * Entry: 0x0024b7f0, Ghidra index: 8256, label: FUN_0024b7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b7f0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308630; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308630U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
      param_1[2] = in_ECX[2];
      param_1[3] = in_ECX[3];
      param_1[4] = in_ECX[4];
      param_1[0xb] = 0xf;
      param_1[10] = 0;
      if ((uint)param_1[0xb] < 0x10) {
        puVar1 = param_1 + 6;
      }
      else {
        puVar1 = (undefined4 *)param_1[6];
      }
      *(undefined1 *)puVar1 = 0;
      FUN_0001f4f0(in_ECX + 5,0,0xffffffff);
      param_1[0xc] = in_ECX[0xc];
      param_1[0xd] = in_ECX[0xd];
    }
    param_1 = param_1 + 0xe;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18DA18FE9A19812A535C1A8E91211E1F65E24FA9540B9118BFB9336A6FAF1F9B
 * Entry: 0x001da570, Ghidra index: 6498, label: FUN_001da570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001da570(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308d70;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[7] = 0xf;
      param_1[6] = 0;
      if ((uint)param_1[7] < 0x10) {
        puVar1 = param_1 + 2;
      }
      else {
        puVar1 = (undefined4 *)param_1[2];
      }
      *(undefined1 *)puVar1 = 0;
      FUN_0001f4f0(in_ECX + 1,0,0xffffffff);
      param_1[8] = in_ECX[8];
      param_1[9] = in_ECX[9];
      param_1[10] = in_ECX[10];
      FUN_001e0dd0(param_1 + 0xb);
    }
    param_1 = param_1 + 0xf;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

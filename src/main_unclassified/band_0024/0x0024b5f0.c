/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1A9520EC1963BE18DD2B7A4DFE36AE41194778CF2BF763FA825E680EFEB77FE
 * Entry: 0x0024b5f0, Ghidra index: 8253, label: FUN_0024b5f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b5f0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309060; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309060U;
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
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(in_ECX + 8);
      param_1[9] = in_ECX[9];
      param_1[10] = in_ECX[10];
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(in_ECX + 0xb);
      FUN_00248740(param_1 + 0xc);
    }
    param_1 = param_1 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

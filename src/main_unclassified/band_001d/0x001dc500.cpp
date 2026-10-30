/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44F7A3EA5F6E9D5220BC17D6451BD10113323501F01E8BCC0C8CA3C990DF2FCA
 * Entry: 0x001dc500, Ghidra index: 6550, label: FUN_001dc500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc500(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308720; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308720U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[7] = 7;
      param_1[6] = 0;
      if ((uint)param_1[7] < 8) {
        puVar1 = param_1 + 2;
      }
      else {
        puVar1 = (undefined4 *)param_1[2];
      }
      *(undefined2 *)puVar1 = 0;
      FUN_00087940(param_1 + 1,0,0xffffffff);
      param_1[0xe] = 0xf;
      param_1[0xd] = 0;
      if ((uint)param_1[0xe] < 0x10) {
        puVar1 = param_1 + 9;
      }
      else {
        puVar1 = (undefined4 *)param_1[9];
      }
      *(undefined1 *)puVar1 = 0;
      FUN_0001f4f0(in_ECX + 8,0,0xffffffff);
      param_1[0xf] = in_ECX[0xf];
    }
    param_1 = param_1 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

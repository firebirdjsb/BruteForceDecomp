/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6499E38D0029444A46176C6B6654A3A2D011CB8855CE7ACEA49360A1839D2AFE
 * Entry: 0x00142460, Ghidra index: 4121, label: FUN_00142460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00142460(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308490;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uVar2 = FUN_00061500(param_1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = 0;
  puVar1 = *(undefined4 **)(param_2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  uVar3 = 0;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    uVar3 = **(undefined4 **)(param_1 + 4);
  }
  FUN_00142bf0(param_1,uVar3,uVar2,puVar1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

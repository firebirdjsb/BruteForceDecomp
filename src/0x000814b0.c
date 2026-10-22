/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2DFC09929C0FD072ED5B9B54F5A678C99884C29E052326991C85DC75798669E
 * Entry: 0x000814b0, Ghidra index: 1523, label: FUN_000814b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000814b0(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x58))();
  if (((*piVar1 == 0x17506391) &&
      (iVar2 = (**(code **)(*in_ECX + 0x210))(), piVar1 = param_1, param_1 != (int *)0x0)) &&
     (iVar2 != 0)) {
    iVar2 = param_1[3];
    FUN_0001fe40(&uStack_8,4,2,&LAB_0012de40);
    uStack_8 = *(undefined4 *)(iVar2 + 8);
    uStack_4 = 0x3761692;
    iVar2 = FUN_000782c0(2);
    if (iVar2 != 0) {
      FUN_00077eb0(iVar2,(float)param_2);
    }
    piVar1 = (int *)FUN_0001fe00(&uStack_8,4,2,FUN_00050b40);
  }
  return (uint)piVar1 & 0xffffff00;
}

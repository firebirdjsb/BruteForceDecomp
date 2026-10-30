/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9713500FFF21CDC0C713012165FEBFCC4F6A27A952ACF999DAA26FDBFFE52BCD
 * Entry: 0x000e4ca0, Ghidra index: 2853, label: FUN_000e4ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e4ca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int unaff_retaddr;
  int iStack_1c;
  int iStack_14;
  
  piVar5 = (int *)(**(code **)(*(int *)(param_2 + 0x48) + 0x18))();
  iVar1 = *piVar5;
  iVar2 = piVar5[2];
  iVar3 = piVar5[1];
  iVar4 = piVar5[3];
  iVar6 = (**(code **)(**(int **)(param_1 + 0xe4) + 0x18))(*(int **)(param_1 + 0xe4));
  iVar7 = (**(code **)(**(int **)(unaff_retaddr + 0xe4) + 0x14))(*(int **)(unaff_retaddr + 0xe4));
  *(int *)(iVar3 + 0xc) = (int)((float)iVar6 * (float)iVar7 * 0.0015625);
  *(int *)(iVar3 + 0x10) = (int)((float)iStack_14 * (float)iStack_1c * 0.0020833334);
  FUN_000e45f0(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
               (int)((float)(iVar2 - iVar1) * (float)iVar7 * 0.0015625),
               (int)((float)(iVar4 - iVar3) * (float)iStack_1c * 0.0020833334));
  return;
}

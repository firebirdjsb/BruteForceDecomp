/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27ACD44C7F6F70EBADF0754439C993C35273C7BD40D3393EC9765C89078746CE
 * Entry: 0x00164420, Ghidra index: 4678, label: FUN_00164420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164420(int *param_1)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int *piVar4;
  
  iVar2 = ((int)param_1 - (int)in_EAX) / 0x18;
  if (iVar2 < 0x29) {
    if (*unaff_EBX < *in_EAX) {
      FUN_00164ab0();
    }
    if (*param_1 < *unaff_EBX) {
      FUN_00164ab0(param_1);
    }
    if (*unaff_EBX < *in_EAX) {
      FUN_00164ab0();
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    piVar1 = in_EAX + iVar2 * 6;
    if (in_EAX[iVar2 * 6] < *in_EAX) {
      FUN_00164ab0(piVar1);
    }
    if (in_EAX[iVar2 * 0xc] < *piVar1) {
      FUN_00164ab0(in_EAX + iVar2 * 0xc,piVar1);
    }
    if (*piVar1 < *in_EAX) {
      FUN_00164ab0(piVar1);
    }
    if (*unaff_EBX < unaff_EBX[iVar2 * -6]) {
      FUN_00164ab0();
    }
    if (unaff_EBX[iVar2 * 6] < *unaff_EBX) {
      FUN_00164ab0(unaff_EBX + iVar2 * 6);
    }
    if (*unaff_EBX < unaff_EBX[iVar2 * -6]) {
      FUN_00164ab0();
    }
    piVar3 = param_1 + iVar2 * -6;
    piVar4 = param_1 + iVar2 * -0xc;
    if (*piVar3 < *piVar4) {
      FUN_00164ab0(piVar3,piVar4);
    }
    if (*param_1 < *piVar3) {
      FUN_00164ab0(param_1,piVar3);
    }
    if (*piVar3 < *piVar4) {
      FUN_00164ab0(piVar3,piVar4);
    }
    if (*unaff_EBX < *piVar1) {
      FUN_00164ab0();
    }
    if (*piVar3 < *unaff_EBX) {
      FUN_00164ab0(piVar3);
    }
    if (*unaff_EBX < *piVar1) {
      FUN_00164ab0();
      return;
    }
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 128766922069400383614C46006E28E506D2A5332B29BC32BE4CEEBE780A41AE
 * Entry: 0x00164850, Ghidra index: 4682, label: FUN_00164850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164850(int *param_1)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  
  iVar2 = ((int)param_1 - (int)in_EAX) / 0x14;
  if (iVar2 < 0x29) {
    if (*unaff_EBX < *in_EAX) {
      FUN_00164e70();
    }
    if (*param_1 < *unaff_EBX) {
      FUN_00164e70();
    }
    if (*unaff_EBX < *in_EAX) {
      FUN_00164e70();
      return;
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    piVar1 = in_EAX + iVar2 * 5;
    if (in_EAX[iVar2 * 5] < *in_EAX) {
      FUN_00164e70();
    }
    if (in_EAX[iVar2 * 10] < *piVar1) {
      FUN_00164e70();
    }
    if (*piVar1 < *in_EAX) {
      FUN_00164e70();
    }
    if (*unaff_EBX < unaff_EBX[iVar2 * -5]) {
      FUN_00164e70();
    }
    if (unaff_EBX[iVar2 * 5] < *unaff_EBX) {
      FUN_00164e70();
    }
    if (*unaff_EBX < unaff_EBX[iVar2 * -5]) {
      FUN_00164e70();
    }
    piVar3 = param_1 + iVar2 * -5;
    if (*piVar3 < param_1[iVar2 * -10]) {
      FUN_00164e70();
    }
    if (*param_1 < *piVar3) {
      FUN_00164e70();
    }
    if (*piVar3 < param_1[iVar2 * -10]) {
      FUN_00164e70();
    }
    if (*unaff_EBX < *piVar1) {
      FUN_00164e70();
    }
    if (*piVar3 < *unaff_EBX) {
      FUN_00164e70();
    }
    if (*unaff_EBX < *piVar1) {
      FUN_00164e70();
      return;
    }
  }
  return;
}

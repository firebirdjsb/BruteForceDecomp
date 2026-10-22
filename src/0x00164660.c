/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 875ECC072AEB39F7D0248A153847C9CE07B06AE2896E400C9BA1F594B12BF591
 * Entry: 0x00164660, Ghidra index: 4680, label: FUN_00164660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164660(int *param_1)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  
  iVar2 = ((int)param_1 - (int)in_EAX) / 0x18;
  if (iVar2 < 0x29) {
    if (*unaff_EBX < *in_EAX) {
      FUN_00164d20();
    }
    if (*param_1 < *unaff_EBX) {
      FUN_00164d20();
    }
    if (*unaff_EBX < *in_EAX) {
      FUN_00164d20();
      return;
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    piVar1 = in_EAX + iVar2 * 6;
    if (in_EAX[iVar2 * 6] < *in_EAX) {
      FUN_00164d20();
    }
    if (in_EAX[iVar2 * 0xc] < *piVar1) {
      FUN_00164d20();
    }
    if (*piVar1 < *in_EAX) {
      FUN_00164d20();
    }
    if (*unaff_EBX < unaff_EBX[iVar2 * -6]) {
      FUN_00164d20();
    }
    if (unaff_EBX[iVar2 * 6] < *unaff_EBX) {
      FUN_00164d20();
    }
    if (*unaff_EBX < unaff_EBX[iVar2 * -6]) {
      FUN_00164d20();
    }
    piVar3 = param_1 + iVar2 * -6;
    if (*piVar3 < param_1[iVar2 * -0xc]) {
      FUN_00164d20();
    }
    if (*param_1 < *piVar3) {
      FUN_00164d20();
    }
    if (*piVar3 < param_1[iVar2 * -0xc]) {
      FUN_00164d20();
    }
    if (*unaff_EBX < *piVar1) {
      FUN_00164d20();
    }
    if (*piVar3 < *unaff_EBX) {
      FUN_00164d20();
    }
    if (*unaff_EBX < *piVar1) {
      FUN_00164d20();
      return;
    }
  }
  return;
}

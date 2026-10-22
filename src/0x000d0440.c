/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E500AC507F28F28927B9673BCEDB75FF3CA0B2C22D83BD061732D99C4F1C5C0C
 * Entry: 0x000d0440, Ghidra index: 2574, label: FUN_000d0440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d0440(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_ECX;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  while (iVar1 != 0) {
    piVar2 = (int *)*unaff_EDI;
    *unaff_EDI = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = *unaff_EDI;
  }
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  iVar1 = unaff_EDI[2];
  while (iVar1 != 0) {
    piVar2 = (int *)unaff_EDI[2];
    unaff_EDI[2] = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = unaff_EDI[2];
  }
  unaff_EDI[2] = 0;
  unaff_EDI[3] = 0;
  if (unaff_EDI[5] != 0) {
    FUN_000d11b0(unaff_EDI + 4);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_EDI[5]);
  }
  unaff_EDI[5] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[7] = 0;
  piVar2 = unaff_EDI + 0xb;
  if (unaff_EDI[0xb] != 0) {
    FUN_000d0680(unaff_EDI);
  }
  puVar3 = (undefined4 *)unaff_EDI[8];
  while (puVar5 = puVar3, puVar5 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar5;
    if ((int)puVar5[2] < 0) {
      puVar3 = (undefined4 *)puVar5[1];
      if (puVar3 == (undefined4 *)0x0) {
        unaff_EDI[8] = 0;
      }
      else {
        *puVar3 = 0;
      }
      unaff_EDI[9] = (int)puVar3;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar5);
    }
  }
  iVar1 = unaff_EDI[8];
  while (iVar1 != 0) {
    piVar4 = (int *)unaff_EDI[8];
    unaff_EDI[8] = *piVar4;
    *piVar4 = 0;
    piVar4[1] = 0;
    iVar1 = unaff_EDI[8];
  }
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  iVar1 = *piVar2;
  while (iVar1 != 0) {
    piVar4 = (int *)*piVar2;
    *piVar2 = *piVar4;
    *piVar4 = 0;
    piVar4[1] = 0;
    iVar1 = *piVar2;
  }
  *piVar2 = 0;
  unaff_EDI[0xc] = 0;
  iVar1 = unaff_EDI[8];
  while (iVar1 != 0) {
    piVar2 = (int *)unaff_EDI[8];
    unaff_EDI[8] = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = unaff_EDI[8];
  }
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  if (unaff_EDI[5] == 0) {
    unaff_EDI[5] = 0;
    unaff_EDI[6] = 0;
    unaff_EDI[7] = 0;
    iVar1 = unaff_EDI[2];
    while (iVar1 != 0) {
      piVar2 = (int *)unaff_EDI[2];
      unaff_EDI[2] = *piVar2;
      *piVar2 = 0;
      piVar2[1] = 0;
      iVar1 = unaff_EDI[2];
    }
    unaff_EDI[2] = 0;
    unaff_EDI[3] = 0;
    iVar1 = *unaff_EDI;
    while (iVar1 != 0) {
      piVar2 = (int *)*unaff_EDI;
      *unaff_EDI = *piVar2;
      *piVar2 = 0;
      piVar2[1] = 0;
      iVar1 = *unaff_EDI;
    }
    *unaff_EDI = 0;
    unaff_EDI[1] = 0;
    return;
  }
  FUN_000d11b0(unaff_EDI + 4,in_ECX);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EDI[5]);
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C397892FEF0279668F235D46F186C61B433D0CEC0BBC3405C0D9DAE010F2C40
 * Entry: 0x0011a840, Ghidra index: 3609, label: FUN_0011a840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011a840(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  float unaff_EBP;
  int *piVar3;
  int *piVar4;
  int *unaff_EDI;
  float10 fVar5;
  float fVar6;
  float fVar7;
  
  if ((undefined4 *)unaff_EDI[0x157] == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)unaff_EDI[0x157];
  }
  if (piVar3 != (int *)unaff_EDI[0x157]) {
    do {
      cVar2 = (**(code **)(*(int *)piVar3[2] + 4))(param_1);
      if (cVar2 == '\0') {
        if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar3[2])(1);
        }
        piVar4 = (int *)*piVar3;
        if (piVar3 != (int *)unaff_EDI[0x157]) {
          *(int **)piVar3[1] = piVar4;
          *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar3);
        }
      }
      else {
        piVar4 = (int *)*piVar3;
      }
      piVar3 = piVar4;
    } while (piVar4 != (int *)unaff_EDI[0x157]);
  }
  if ((*(byte *)(unaff_EDI[3] + 0x1a8) & 1) != 0) {
    piVar3 = (int *)unaff_EDI[0x169];
    fVar7 = (float)unaff_EDI[0x124];
    if (((*(byte *)(piVar3 + 7) & 1) != 0) && (piVar3[6] != 0)) {
      fVar5 = (float10)(**(code **)(*piVar3 + 0xbc))(param_1);
      fVar5 = (float10)fVar7 - fVar5;
      fVar7 = (float)fVar5;
      if (fVar5 < (float10)0.0 == (fVar5 == (float10)0.0)) {
        FUN_001258d0(unaff_EDI,fVar7);
      }
      else {
        FUN_001258d0(unaff_EDI,0);
        (**(code **)(*unaff_EDI + 0x15c))(8,0);
      }
    }
    (**(code **)(*piVar3 + 0xc0))(param_1);
    iVar1 = unaff_EDI[0x1a];
    fVar5 = (float10)(**(code **)(*piVar3 + 0xe4))();
    (**(code **)(iVar1 + 0x14))((float)fVar5);
    if (((*(byte *)(piVar3 + 7) & 1) == 0) || (piVar3[6] == 0)) {
      fVar6 = *(float *)(unaff_EDI[3] + 0x228) * fVar7;
      if (unaff_EDI[0x7e] == 8) {
        fVar6 = fVar6 * 0.25;
      }
      if (unaff_EDI[0x7e] == 6) {
        fVar6 = fVar6 + fVar6;
      }
      if ((char)unaff_EDI[0x17] != '\0') {
        fVar6 = fVar6 * 4.0;
      }
      fVar6 = fVar6 + unaff_EBP;
      if ((float)unaff_EDI[0x125] <= fVar6) {
        fVar6 = (float)unaff_EDI[0x125];
      }
      FUN_001258d0(unaff_EDI,fVar6);
    }
    if (((char)unaff_EDI[0x164] != '\0') &&
       ((fVar6 = (float)unaff_EDI[0x161], unaff_EDI[0x161] = (int)(fVar6 - fVar7),
        fVar6 - fVar7 < 0.0 || (unaff_EDI[400] == 0)))) {
      unaff_EDI[0x161] = 0;
      *(undefined1 *)(unaff_EDI + 0x164) = 0;
      FUN_00122800(unaff_EDI);
      return;
    }
  }
  return;
}

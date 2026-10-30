/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EA7B4199D78397EE2DE3C9DCF7354A29F2DFFE19DC937A2DF3B7F1D9FC31EDF
 * Entry: 0x0005ab70, Ghidra index: 912, label: FUN_0005ab70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0005ab70(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[0x93];
  unaff_EDI[0x94] = unaff_EDI[0x94] | 1;
  piVar10 = (int *)0x0;
  if (*(undefined4 **)(iVar1 + 0x30) != (undefined4 *)0x0) {
    piVar10 = (int *)**(undefined4 **)(iVar1 + 0x30);
  }
  if (piVar10 == *(int **)(iVar1 + 0x30)) {
    return (int *)0x0;
  }
  do {
    piVar2 = (int *)piVar10[3];
    if ((piVar2 != unaff_EBX) && (iVar11 = (**(code **)(*piVar2 + 0x3c))(), iVar11 == 0x18)) {
      puVar3 = *(undefined4 **)(param_1 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar12 = (undefined4 *)*puVar3;
      }
      for (; (puVar13 = puVar3, puVar12 != puVar3 &&
             (puVar13 = puVar12, (int *)puVar12[2] != piVar2)); puVar12 = (undefined4 *)*puVar12) {
      }
      if ((puVar13 == puVar3) &&
         (iVar11 = (**(code **)(*unaff_EDI + 0x40))(),
         fVar4 = *(float *)(iVar11 + 0x2c) - (float)piVar2[7],
         fVar5 = *(float *)(iVar11 + 0x28) - (float)piVar2[6],
         fVar6 = *(float *)(iVar11 + 0x24) - (float)piVar2[5],
         fVar8 = *(float *)(iVar11 + 0x2c) - (float)unaff_EBX[7],
         fVar9 = *(float *)(iVar11 + 0x28) - (float)unaff_EBX[6],
         fVar7 = *(float *)(iVar11 + 0x24) - (float)unaff_EBX[5],
         fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 <
         fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8)) {
        return piVar2;
      }
    }
    piVar10 = (int *)*piVar10;
    if (piVar10 == (int *)*(int *)(iVar1 + 0x30)) {
      return (int *)0x0;
    }
  } while( true );
}

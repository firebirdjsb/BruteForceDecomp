/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E6A6D8BE2F1797F01A4010127A2E626904C8AAD02693D2C10BE766A53128D4A
 * Entry: 0x000d1680, Ghidra index: 2599, label: FUN_000d1680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_001f4740(int param_1,int *param_2,int *param_3,float param_4,float param_5);
extern int FUN_000d1820(void);

void FUN_000d1680(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_EAX;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 in_ECX;
  char *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 4) = in_ECX;
  piVar1 = (int *)(unaff_ESI + 0xc);
  FUN_001f4740(in_ECX,piVar1,unaff_ESI + 0x10,*in_EAX,in_EAX[2]);
  piVar2 = (int *)(unaff_ESI + 0x1c);
  piVar3 = (int *)(unaff_ESI + 0x18);
  FUN_001f4740(*(undefined4 *)(unaff_ESI + 4),piVar3,piVar2,*param_1,param_1[2]);
  *piVar3 = *piVar3 + 1;
  iVar7 = *piVar1;
  *piVar2 = *piVar2 + 1;
  if (-1 < iVar7) {
    param_1 = (undefined4 *)**(undefined4 **)(*(int *)(unaff_ESI + 4) + 0x20);
    if (((((iVar7 < (int)param_1) && (-1 < *(int *)(unaff_ESI + 0x10))) &&
         (iVar4 = (*(undefined4 **)(*(int *)(unaff_ESI + 4) + 0x20))[1],
         *(int *)(unaff_ESI + 0x10) < iVar4)) && ((-1 < *piVar3 && (*piVar3 < (int)param_1)))) &&
       ((-1 < *piVar2 && (*piVar2 < iVar4)))) {
      cVar9 = '\0';
      goto LAB_000d170c;
    }
  }
  cVar9 = '\x01';
LAB_000d170c:
  *unaff_ESI = cVar9;
  if (cVar9 != '\0') {
    iVar7 = *(int *)(unaff_ESI + 4);
    param_1 = (undefined4 *)**(int **)(iVar7 + 0x20);
    piVar5 = piVar1;
    if (**(int **)(iVar7 + 0x20) <= *piVar1) {
      piVar5 = (int *)&param_1;
    }
    iVar4 = *piVar5;
    *piVar1 = iVar4;
    param_1 = (undefined4 *)0x0;
    piVar5 = piVar1;
    if (iVar4 < 1) {
      piVar5 = (int *)&param_1;
    }
    *piVar1 = *piVar5;
    param_1 = *(undefined4 **)(*(int *)(iVar7 + 0x20) + 4);
    piVar5 = (int *)(unaff_ESI + 0x10);
    piVar6 = piVar5;
    if ((int)param_1 <= *(int *)(unaff_ESI + 0x10)) {
      piVar6 = (int *)&param_1;
    }
    iVar4 = *piVar6;
    *piVar5 = iVar4;
    param_1 = (undefined4 *)0x0;
    piVar6 = piVar5;
    if (iVar4 < 1) {
      piVar6 = (int *)&param_1;
    }
    *piVar5 = *piVar6;
    param_1 = (undefined4 *)**(int **)(iVar7 + 0x20);
    piVar6 = piVar3;
    if (**(int **)(iVar7 + 0x20) <= *piVar3) {
      piVar6 = (int *)&param_1;
    }
    iVar4 = *piVar6;
    *piVar3 = iVar4;
    param_1 = (undefined4 *)0x0;
    piVar6 = piVar3;
    if (iVar4 < 1) {
      piVar6 = (int *)&param_1;
    }
    *piVar3 = *piVar6;
    param_1 = *(undefined4 **)(*(int *)(iVar7 + 0x20) + 4);
    piVar6 = piVar2;
    if ((int)param_1 <= *piVar2) {
      piVar6 = (int *)&param_1;
    }
    iVar7 = *piVar6;
    *piVar2 = iVar7;
    param_1 = (undefined4 *)0x0;
    piVar6 = piVar2;
    if (iVar7 < 1) {
      piVar6 = (int *)&param_1;
    }
    iVar4 = *piVar6;
    iVar7 = *piVar1;
    *piVar2 = iVar4;
    if ((iVar7 == *piVar3) || (*piVar5 == iVar4)) {
      *piVar1 = *piVar3;
      *piVar5 = *piVar2;
      unaff_ESI[8] = '\0';
      unaff_ESI[9] = '\0';
      unaff_ESI[10] = '\0';
      unaff_ESI[0xb] = '\0';
      return;
    }
  }
  *(int *)(unaff_ESI + 0x14) = iVar7;
  uVar8 = FUN_000d1820();
  *(undefined4 *)(unaff_ESI + 8) = uVar8;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F6011B4468143C3A4420D71DB6FC5C8CEAD6DB3360950AD7C26DEF5A5FC68B8
 * Entry: 0x000ca000, Ghidra index: 2499, label: FUN_000ca000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ca000(int param_1,int param_2)

{
  byte *pbVar1;
  float fVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int unaff_retaddr;
  float fVar7;
  float fStack_c;
  
  piVar4 = *(int **)(param_1 + 100);
  cVar6 = FUN_000c9920();
  if (cVar6 != '\0') {
    fVar7 = (float)piVar4[6];
    iVar5 = piVar4[0xb];
    *(byte *)(piVar4 + 0x12) = *(byte *)(piVar4 + 0x12) & 0xe7;
    fVar2 = *(float *)(iVar5 + 0x40);
    *(float *)(iVar5 + 0x40) = fVar7;
    if (fVar7 != fVar2) {
      FUN_000c9890(iVar5);
    }
    (**(code **)(*piVar4 + 0x30))(param_2);
  }
  *(byte *)(*(int *)(param_1 + 100) + 0x13) = *(byte *)(*(int *)(param_1 + 100) + 0x13) & 0xfe;
  (**(code **)(**(int **)(param_1 + 100) + 0x14))(0);
  fStack_c = 0.0;
  fVar7 = 0.0;
  if (param_2 == 1) {
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x68) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    FUN_000bb9d0(*(undefined4 *)(unaff_retaddr + 0x68));
    (**(code **)(**(int **)(unaff_retaddr + 0x68) + 0x14))(0);
    sVar3 = *(short *)(*(int *)(unaff_retaddr + 0x68) + 0xe);
  }
  else {
    if (param_2 != 2) {
      pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x68) + 0x13);
      *pbVar1 = *pbVar1 | 1;
      goto LAB_000ca117;
    }
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x68) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    FUN_000bb9d0(*(undefined4 *)(unaff_retaddr + 0x68));
    (**(code **)(**(int **)(unaff_retaddr + 0x68) + 0x14))(0);
    sVar3 = *(short *)(*(int *)(unaff_retaddr + 0x68) + 0xe);
  }
  fVar7 = (float)(int)sVar3;
LAB_000ca117:
  iVar5 = *(int *)(*(int *)(unaff_retaddr + 100) + 0x2c);
  if (*(int *)(iVar5 + 0x24) != 0) {
    if (*(short *)(iVar5 + 0x34) < 1) {
      fStack_c = 0.0;
    }
    else {
      fStack_c = (float)(int)*(short *)(iVar5 + 0x30);
    }
  }
  iVar5 = *(int *)(unaff_retaddr + 100);
  *(short *)(iVar5 + 4) = (short)(int)fVar7;
  *(undefined2 *)(iVar5 + 6) = 3;
  iVar5 = *(int *)(unaff_retaddr + 0x6c);
  *(short *)(iVar5 + 4) = (short)(int)(fVar7 + *(float *)(unaff_retaddr + 0x70) + fStack_c);
  *(undefined2 *)(iVar5 + 6) = 0;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A15D864CE1C280F3FDA149B00FFD5C5CA990FB66481DC6E26DB4A6AECE7B344
 * Entry: 0x001252b0, Ghidra index: 3695, label: FUN_001252b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cbec;
extern uint32_t DAT_0046d064;
undefined4 FUN_001252b0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  /* XBE 0x00125475: LEA ECX,[ESP+0x10] selects a 16-byte local
   * region immediately before the 36-byte [ESP+0x20] buffer.
   * The first guest DWORD is cleared at 0x0012547C before vcall +0xC4.
   * Callee write extent and EAX register handoff remain ABI_UNVERIFIED. */
  uint32_t guest_out_40[4];
  undefined1 auStack_30 [36];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  fVar4 = (float)param_1[0x14];
  if ((float)param_1[0x14] <= (float)param_1[0x155]) {
    fVar4 = (float)param_1[0x155];
  }
  if (DAT_0040cbec <= fVar4) {
    fVar4 = DAT_0040cbec;
  }
  fVar5 = fVar4 / (float)param_1[0x14];
  if (1.0 <= fVar4 / (float)param_1[0x14]) {
    fVar5 = 1.0;
  }
  (**(code **)(*param_1 + 0xbc))();
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(byte *)(param_2 + 0x5c) = *(byte *)(param_2 + 0x5c) & 0xf7;
  iVar2 = (**(code **)(*param_1 + 0x40))();
  if ((DAT_0046d064 != -0x1134c607) && (iVar2 != 0)) {
    piVar3 = (int *)FUN_000da800();
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(piVar3[0x3a] + 0xc) = 0;
      (**(code **)(*piVar3 + 0x44))(iVar2);
      FUN_0021c380(fVar5);
    }
  }
  iVar2 = param_1[2];
  piVar3 = (int *)FUN_00160da0(0xffffffff,1);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 8))(iVar2);
    if (piVar3 != (int *)0x0) {
      FUN_000da880(iVar2,piVar3,1);
      FUN_000da8f0(iVar2);
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*param_1 + 0x40))();
        uStack_8 = *(undefined4 *)(iVar2 + 0x28);
        iStack_4 = *(int *)(iVar2 + 0x2c);
        uStack_c = *(undefined4 *)(iVar2 + 0x24);
        FUN_0001d0c0();
        (**(code **)(*piVar3 + 0x50))(auStack_30);
        iVar2 = param_1[5];
        if ((iVar2 == 0) || (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 3)) {
          iVar2 = 0;
        }
        if (piVar3[0x79] != iVar2) {
          FUN_0008f6a0(iVar2);
        }
        if (piVar3[0x7b] != param_1[7]) {
          FUN_0008f6a0(param_1[7]);
        }
        guest_out_40[0] = 0;
        cVar1 = (**(code **)(*piVar3 + 0xc4))(guest_out_40);
        if (cVar1 != '\0') {
          FUN_0016a760(*(undefined4 *)(*(int *)(iStack_4 + 8) + 0xa44));
        }
        *(short *)((int)piVar3 + 0x1de) = (short)(int)*(float *)(iStack_4 + 0x50);
        *(byte *)(piVar3 + 0x6f) = *(byte *)(piVar3 + 0x6f) | 2;
        *(undefined1 *)((int)piVar3 + 0x79) = 0;
        (**(code **)(**(int **)(piVar3[3] + 0x15c) + 0x10))(piVar3);
        *(byte *)(piVar3 + 0x77) = *(byte *)(piVar3 + 0x77) | 2;
      }
    }
  }
  FUN_0014dfd0();
  if (*(int *)(param_1[0xba] + 0x1ac) != 0) {
    cVar1 = (**(code **)(*(int *)param_1[0x169] + 0x70))(*(int *)(param_1[0xba] + 0x1ac));
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1[0xba] + 0x1ac) + 0x34))(1);
      goto LAB_00125549;
    }
  }
  if (*(int **)(param_1[0xba] + 0x1ac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1[0xba] + 0x1ac) + 0x38))();
  }
LAB_00125549:
  (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x38))();
  (**(code **)(*(int *)(param_1[0xba] + 0x144) + 0x38))();
  (**(code **)(*(int *)param_1[0xba] + 0x38))();
  (**(code **)(*(int *)(param_1[0xba] + 0x44) + 0x38))();
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xdf;
  param_1[0x155] = 0;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfe;
  if (param_1[0x167] != 0) {
    cVar1 = FUN_0005c0a0();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xa0))();
      return 1;
    }
  }
  param_1[0x6a] = -0x3d3a0000;
  return 1;
}

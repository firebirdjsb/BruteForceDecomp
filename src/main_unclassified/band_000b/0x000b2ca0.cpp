/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1AE9DDFCE60E4DFFD63D5E593FA6035573E4C7957C317EF95B22C69F2F71F87
 * Entry: 0x000b2ca0, Ghidra index: 2160, label: FUN_000b2ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_000b2800(int param_1);
extern float10 FUN_000b2770(int param_1);
extern float10 FUN_000b2870(int param_1);
extern float10 FUN_000b28e0(int param_1);

void FUN_000b2ca0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  int iStack_10;
  short sStack_c;
  undefined1 local_8 [4];
  int iStack_4;
  
  iVar3 = *(int *)(param_1 + 0x34);
  FUN_000b2970(iVar3,local_8);
  sVar1 = *(short *)(iVar3 + 0x20);
  bVar6 = false;
  bVar5 = false;
  sVar2 = *(short *)(iVar3 + 0x22);
  if (sVar1 < 600) {
LAB_000b2d00:
    if (sVar2 < 400) goto LAB_000b2d09;
  }
  else {
    if (sVar2 < 400) {
      if (sVar1 < 600) goto LAB_000b2d00;
      if (sVar2 < 400) goto LAB_000b2ceb;
    }
    else {
LAB_000b2ceb:
      bVar5 = true;
    }
    if (sVar1 < 600) goto LAB_000b2d00;
    if (sVar2 < 400) {
      if (599 < sVar1) goto LAB_000b2d09;
      goto LAB_000b2d00;
    }
  }
  bVar6 = true;
LAB_000b2d09:
  if (bVar5) {
    *(undefined2 *)(*(int *)(iStack_4 + 100) + 0xe) = 0x80;
    *(undefined2 *)(*(int *)(iStack_4 + 100) + 0xc) = 0x20;
    *(undefined2 *)(*(int *)(iStack_4 + 0x68) + 0xe) = 0x80;
    *(undefined2 *)(*(int *)(iStack_4 + 0x68) + 0xc) = 0xffe0;
  }
  else {
    *(undefined2 *)(*(int *)(iStack_4 + 100) + 0xe) = 0x50;
    *(undefined2 *)(*(int *)(iStack_4 + 100) + 0xc) = 0x14;
    *(undefined2 *)(*(int *)(iStack_4 + 0x68) + 0xe) = 0x50;
    *(undefined2 *)(*(int *)(iStack_4 + 0x68) + 0xc) = 0xffec;
  }
  fVar7 = (float10)FUN_000b2800(iVar3);
  iVar4 = *(int *)(iStack_4 + 100);
  *(short *)(iVar4 + 4) = -(*(short *)(iVar4 + 0xe) / 2);
  *(short *)(iVar4 + 6) = (short)(int)fVar7 - sStack_c;
  fVar7 = (float10)FUN_000b2770(iVar3);
  iVar4 = *(int *)(iStack_4 + 0x68);
  *(short *)(iVar4 + 4) = -(*(short *)(iVar4 + 0xe) / 2);
  *(short *)(iVar4 + 6) = (short)(int)fVar7 - sStack_c;
  if (bVar6) {
    *(undefined2 *)(*(int *)(iStack_4 + 0x6c) + 0xe) = 0xffe0;
    *(undefined2 *)(*(int *)(iStack_4 + 0x6c) + 0xc) = 0x80;
    *(undefined2 *)(*(int *)(iStack_4 + 0x70) + 0xe) = 0x20;
    *(undefined2 *)(*(int *)(iStack_4 + 0x70) + 0xc) = 0x80;
  }
  else {
    *(undefined2 *)(*(int *)(iStack_4 + 0x6c) + 0xe) = 0xffec;
    *(undefined2 *)(*(int *)(iStack_4 + 0x6c) + 0xc) = 0x50;
    *(undefined2 *)(*(int *)(iStack_4 + 0x70) + 0xe) = 0x14;
    *(undefined2 *)(*(int *)(iStack_4 + 0x70) + 0xc) = 0x50;
  }
  sVar1 = *(short *)(*(int *)(iStack_4 + 0x6c) + 0xc);
  sVar2 = *(short *)(*(int *)(iStack_4 + 0x6c) + 0xe);
  fVar7 = (float10)FUN_000b2870(iVar3);
  iVar4 = *(int *)(iStack_4 + 0x6c);
  *(short *)(iVar4 + 4) = (short)(int)((fVar7 - (float10)iStack_10) - (float10)(int)sVar2);
  *(short *)(iVar4 + 6) = -(sVar1 / 2);
  sVar1 = *(short *)(*(int *)(iStack_4 + 0x70) + 0xc);
  sVar2 = *(short *)(*(int *)(iStack_4 + 0x70) + 0xe);
  fVar7 = (float10)FUN_000b28e0(iVar3);
  iVar3 = *(int *)(iStack_4 + 0x70);
  *(short *)(iVar3 + 4) = (short)(int)((fVar7 - (float10)iStack_10) - (float10)(int)sVar2);
  *(short *)(iVar3 + 6) = -(sVar1 / 2);
  return;
}

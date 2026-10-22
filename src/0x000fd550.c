/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93EA998A0BDE93C4DB16BF9DDB54D88816FDC303F35EA677267C89A01EAB6343
 * Entry: 0x000fd550, Ghidra index: 3165, label: FUN_000fd550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000fd550(undefined4 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  
  iVar4 = FUN_002ea01d(0x88);
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_001032e0();
  }
  fVar1 = (float)param_2[2];
  fVar2 = *(float *)(in_EAX + 0x10);
  piVar5[3] = (int)((float)param_2[1] + *(float *)(in_EAX + 0xc));
  piVar5[4] = (int)(fVar1 + fVar2);
  (**(code **)(*piVar5 + 0x1c))();
  piVar5[5] = param_2[3];
  (**(code **)(*piVar5 + 0x1c))();
  piVar5[6] = param_2[4];
  (**(code **)(*piVar5 + 0x1c))();
  iVar4 = *(int *)(in_EAX + 0x18);
  piVar5[0x20] = *(int *)(in_EAX + 0x14);
  piVar5[0x21] = iVar4;
  piVar5[9] = *param_2;
  (**(code **)(*piVar5 + 0x2c))();
  piVar6 = (int *)FUN_000a7770(in_EAX);
  piVar3 = (int *)piVar5[0x1f];
  if (piVar3 != piVar6) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      piVar5[0x1f] = 0;
    }
    piVar5[0x1f] = (int)piVar6;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  piVar5[0x18] = *(int *)(in_EAX + 0x20);
  *(undefined4 *)((int)piVar5 + 0x2d) = *(undefined4 *)(in_EAX + 4);
  (**(code **)(*piVar5 + 0x34))();
  FUN_000fbdd0();
  if (param_2[5] != 0) {
    FUN_000fbea0(param_2[5]);
  }
  bVar7 = *(byte *)(piVar5 + 0x1c) ^ (*(char *)(in_EAX + 0x1c) << 2 ^ *(byte *)(piVar5 + 0x1c)) & 4;
  *(byte *)(piVar5 + 0x1c) = bVar7;
  *(byte *)(piVar5 + 0x1c) = (*(char *)(in_EAX + 0x1d) << 1 ^ bVar7) & 2 ^ bVar7;
  iVar4 = FUN_000ff9e0(piVar5);
  if (iVar4 != -1) {
    FUN_000fbd40();
    return 1;
  }
  return 0;
}

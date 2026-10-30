/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E39043C92A0F007C7AA11B8A24749F6CEBA14E437BA1D1A41F58F6EE7629CC7
 * Entry: 0x00354d01, Ghidra index: 13115, label: FUN_00354d01
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_0035418a; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_0035418a(int param_1);
int FUN_00354d01(int *param_1,uint param_2,short param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  uint *puVar7;
  int local_c [2];
  
  if ((((param_3 == 0) || (param_2 == 0)) || (param_2 == 0xffffffff)) ||
     ((((byte)param_2 & 0xf0) == 0xe0 || (((byte)param_2 == 0x7f && (param_2 != 0x100007f)))))) {
    return -0x7ff8d8bf;
  }
  if ((char)param_1[0x1f] == '\x01') {
    return -0x7ff8d8da;
  }
  local_c[0] = in_ECX;
  if (((*(byte *)(param_1 + 3) & 0x20) == 0) &&
     (iVar4 = FUN_003457b3(param_1,param_2 & 0xffff0000), iVar4 < 0)) {
    return iVar4;
  }
  KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
    iVar4 = param_1[0x10];
    if (iVar4 < 0) goto LAB_00354ec9;
  }
  else {
    iVar4 = *param_1;
    piVar1 = (int *)param_1[1];
    *piVar1 = iVar4;
    *(int **)(iVar4 + 4) = piVar1;
    *(ushort *)((int)param_1 + 0x82) = (ushort)*(byte *)(in_ECX + 0x32);
    param_1[0x2f] = 0x200;
    param_1[0x33] = 0x200;
    *(undefined2 *)(param_1 + 0x20) = 0;
    param_1[0x21] = 0;
    param_1[0x2d] = 0xffff;
    param_1[0x2e] = 0xffff;
    param_1[0x35] = 0;
    iVar4 = (uint)*(byte *)(in_ECX + 0x34) * 5;
    param_1[0x36] = iVar4;
    param_1[0x37] = iVar4;
    piVar1 = param_1 + 0x19;
    param_1[0x1a] = (int)piVar1;
    *piVar1 = (int)piVar1;
    param_1[0x1d] = -1;
    param_1[0x1b] = 0;
    param_1[0x1e] = (int)FUN_0035418a;
    FUN_00345541(0xfffe0667,0);
    param_1[5] = 0;
    param_1[0x10] = 0;
    puVar2 = *(undefined4 **)(in_ECX + 0xbdc);
    *param_1 = in_ECX + 0xbd8;
    param_1[1] = (int)puVar2;
    *puVar2 = param_1;
    *(int **)(in_ECX + 0xbdc) = param_1;
  }
  if ((*(byte *)(param_1 + 0x1f) < 2) || (param_4 != 0)) {
    puVar7 = *(uint **)(in_ECX + 0xbd8U);
    puVar7 = (uint *)(-(uint)(puVar7 != (uint *)(in_ECX + 0xbd8U)) & (uint)puVar7);
    while (puVar3 = puVar7, puVar3 != (uint *)0x0) {
      if (puVar3 == (uint *)0x0) {
        uVar5 = *(uint *)(in_ECX + 0xbd8);
      }
      else {
        uVar5 = *puVar3;
      }
      puVar7 = (uint *)(-(uint)(uVar5 != in_ECX + 0xbd8U) & uVar5);
      if (((((puVar3[3] & 2) != 0) &&
           (*(short *)((int)puVar3 + 0x4a) == *(short *)((int)param_1 + 0x4a))) &&
          (puVar3[0x11] == param_2)) && ((short)puVar3[0x12] == param_3)) {
        if ((puVar3[3] & 0x1000000) == 0) {
          iVar4 = -0x7ff8d8c0;
          goto LAB_00354ec9;
        }
        FUN_00346cd5(puVar3,1);
      }
    }
    if (param_4 == 0) {
      *(undefined1 *)(param_1 + 0x1f) = 2;
    }
    param_1[0x33] = 0x518;
    uVar5 = ((param_1[0x17] + 0x517U) / 0x518) * 0x518;
    param_1[0x17] = uVar5;
    uVar6 = (uint)*(byte *)(in_ECX + 0x2f) * 0x400;
    if (uVar6 <= uVar5 && uVar5 + (uint)*(byte *)(in_ECX + 0x2f) * -0x400 != 0) {
      param_1[0x17] = uVar6;
    }
    param_1[0x11] = param_2;
    *(short *)(param_1 + 0x12) = param_3;
    FUN_00352e4c(local_c);
    param_1[0x26] = local_c[0];
    param_1[0x32] = param_1[0x17];
    iVar4 = FUN_00354267(param_1,param_4);
  }
  else {
    iVar4 = -0x7ff8d8cb;
  }
LAB_00354ec9:
  KfLowerIrql();
  return iVar4;
}

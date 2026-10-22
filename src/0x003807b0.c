/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9EC71298663587D92A5E28BAE17DE3EDFEA48B6CE83C137EF84CD543AEE4B28
 * Entry: 0x003807b0, Ghidra index: 13534, label: FUN_003807b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003807b0(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  byte *pbVar6;
  undefined4 *in_EDX;
  
  iVar3 = *in_ECX;
  KeRaiseIrqlToDpcLevel();
  if ((iVar3 == 0) || ((*(byte *)(iVar3 + 4) & 2) != 0)) {
    *in_EDX = 0x48f;
    goto LAB_003808ce;
  }
  if (*(char *)(iVar3 + 0xd) == '\0') {
    *in_EDX = 0x32;
    goto LAB_003808ce;
  }
  if (in_EDX[1] == 0) {
LAB_0038080b:
    in_EDX[3] = 0;
  }
  else {
    iVar4 = ObReferenceObjectByHandle(in_EDX[1],ExEventObjectType_exref,in_EDX + 3);
    if (iVar4 < 0) {
      in_EDX[1] = 0;
      goto LAB_0038080b;
    }
  }
  pbVar6 = (byte *)(in_EDX + 0x10);
  bVar2 = *pbVar6;
  if ((bVar2 == 0) && (*(byte *)(iVar3 + 0xd) < *(byte *)((int)in_EDX + 0x41))) {
    *(byte *)((int)in_EDX + 0x41) = *(byte *)(iVar3 + 0xd);
  }
  if ((*(byte *)(*(int *)(iVar3 + 0xe) + 0x28) & 2) != 0) {
    pbVar6 = (byte *)((int)in_EDX + 0x42);
  }
  iVar4 = in_ECX[4];
  puVar1 = in_EDX + 4;
  in_EDX[7] = in_EDX;
  in_EDX[6] = &LAB_003805cf;
  if (iVar4 == 0) {
    in_EDX[10] = pbVar6;
    in_EDX[9] = (uint)*(byte *)((int)in_EDX + 0x41);
    *(undefined1 *)puVar1 = 0x30;
    *(undefined1 *)((int)in_EDX + 0x11) = 0x40;
    in_EDX[8] = 0;
    *(undefined1 *)(in_EDX + 0xb) = 1;
    *(undefined1 *)((int)in_EDX + 0x2d) = 0;
    *(undefined1 *)((int)in_EDX + 0x2e) = 0;
    *(undefined1 *)(in_EDX + 0xe) = 0x21;
    *(undefined1 *)((int)in_EDX + 0x39) = 9;
    *(ushort *)((int)in_EDX + 0x3a) = bVar2 | 0x200;
    *(ushort *)(in_EDX + 0xf) = (ushort)*(byte *)(iVar3 + 5);
    *(ushort *)((int)in_EDX + 0x3e) = (ushort)*(byte *)((int)in_EDX + 0x41);
  }
  else {
    *(undefined1 *)puVar1 = 0x28;
    *(undefined1 *)((int)in_EDX + 0x11) = 0x41;
    iVar3 = in_ECX[4];
    in_EDX[10] = pbVar6;
    in_EDX[8] = iVar3;
    in_EDX[9] = (uint)*(byte *)((int)in_EDX + 0x41);
    *(undefined1 *)(in_EDX + 0xb) = 1;
    *(undefined1 *)((int)in_EDX + 0x2d) = 0;
    *(undefined1 *)((int)in_EDX + 0x2e) = 0;
  }
  in_EDX[2] = in_ECX;
  uVar5 = FUN_00381379(puVar1);
  uVar5 = FUN_00380fe3(uVar5);
  *in_EDX = uVar5;
LAB_003808ce:
  KfLowerIrql();
  return *in_EDX;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A15EB641DA2517AE1E9EC5FF209B1F0F00444E49A4CD29779BD60C647442E42
 * Entry: 0x00346965, Ghidra index: 12835, label: FUN_00346965
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00346965(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined8 local_10;
  
  piVar2 = param_2;
  uVar5 = *(uint *)(param_1 + 0xc);
  if ((uVar5 & 2) == 0) {
    if ((uVar5 & 0x20) == 0) {
      return -0x7ff8d8da;
    }
  }
  else if ((uVar5 & 0x40) == 0) {
    return -0x7ff8d8b7;
  }
  if ((uVar5 & 0x10) == 0) {
    iVar1 = param_2[1];
    if (iVar1 == 0) {
      *param_2 = 0;
    }
    else {
      if ((*(int *)(iVar1 + 0x10) == 0) ||
         (iVar3 = ObReferenceObjectByHandle(*(int *)(iVar1 + 0x10),ExEventObjectType_exref,&param_2)
         , piVar4 = param_2, iVar3 != 0)) {
        piVar4 = (int *)0x0;
      }
      *piVar2 = (int)piVar4;
      if (piVar4 == (int *)0x0) {
        return -0x7ff8d885;
      }
    }
    uVar5 = *(uint *)(param_1 + 0xc) >> 1 & 1;
    if (uVar5 == 0) {
      bVar6 = *(int **)(param_1 + 0x24) == (int *)(param_1 + 0x24);
    }
    else {
      bVar6 = *(int *)(param_1 + 0x2c) == 0;
    }
    if ((bVar6) && (iVar1 == 0)) {
      if ((*(uint *)(param_1 + 0xc) & 0x40000) == 0) {
        piVar2[1] = (int)local_24;
        *piVar2 = param_1 + 0x10;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else if ((uVar5 == 0) || (*(byte *)(param_1 + 0x7c) < 7)) {
        return -0x7ff8d8cd;
      }
    }
    if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
      iVar3 = FUN_003553fc(param_1,piVar2);
    }
    else {
      iVar3 = FUN_00353e7b(param_1,piVar2);
    }
    if (iVar3 == -0x7ff8fc1b) {
      if (iVar1 == 0) {
        iVar3 = *(int *)(param_1 + 0x54);
        local_10 = __allmul(iVar3,iVar3 >> 0x1f,0xffffd8f0,0xffffffff);
        KeWaitForSingleObject(*piVar2,6,1,0,-(uint)(iVar3 != 0) & (uint)&local_10);
        if (local_18 == -0x7ff8fc1b) {
          KeRaiseIrqlToDpcLevel();
          if (local_18 == -0x7ff8fc1b) {
            FUN_00345e88(param_1,piVar2,0x8007274c);
          }
          KfLowerIrql();
        }
        *(undefined4 *)piVar2[3] = local_1c;
        piVar2[2] = local_20;
        iVar3 = local_18;
      }
    }
    else if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = piVar2[2];
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)piVar2[3];
      *(int *)(iVar1 + 0xc) = iVar3;
      KeSetEvent(*piVar2,0,0);
      ObfDereferenceObject();
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x40)) {
      iVar3 = -0x7ff8d8b6;
    }
  }
  return iVar3;
}

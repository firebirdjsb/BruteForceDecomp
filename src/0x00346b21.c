/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5305F846A41C6DF4AAE7A515CB1CCA858196AD5DEA4D85D732E1256360BC8896
 * Entry: 0x00346b21, Ghidra index: 12836, label: FUN_00346b21
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
int FUN_00346b21(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_2;
  iVar1 = param_1;
  if (((*(uint *)(param_1 + 0xc) & 0x40) == 0) && (param_2[5] == 0)) {
    return -0x7ff8d8b7;
  }
  if ((*(uint *)(param_1 + 0xc) & 8) != 0) {
    if (*(int *)(param_1 + 0x40) < 0) {
      return *(int *)(param_1 + 0x40);
    }
    return -0x7ff8d8b6;
  }
  iVar5 = param_2[1];
  param_2 = (int *)iVar5;
  if (iVar5 != 0) {
    if ((*(int *)(iVar5 + 0x10) == 0) ||
       (iVar3 = ObReferenceObjectByHandle(*(int *)(iVar5 + 0x10),ExEventObjectType_exref,&param_1),
       iVar4 = param_1, iVar3 != 0)) {
      iVar4 = 0;
    }
    *piVar2 = iVar4;
    if (iVar4 == 0) {
      return -0x7ff8d885;
    }
  }
  if (*(uint *)(iVar1 + 0x58) <= *(uint *)(iVar1 + 0x3c)) {
    if (iVar5 == 0) {
      if (((*(byte *)(iVar1 + 0xe) & 4) != 0) || (*(int *)(iVar1 + 0x30) != 0)) {
        return -0x7ff8d8cd;
      }
      iVar5 = FUN_00345e05(iVar1,0x1000,*(undefined4 *)(iVar1 + 0x50));
      if (iVar5 < 0) {
        return iVar5;
      }
    }
    else {
      iVar5 = FUN_00345ba3(iVar1,piVar2);
      if (iVar5 == -0x7ff8fc1b) {
        return -0x7ff8fc1b;
      }
      if (iVar5 < 0) goto LAB_00346c0a;
    }
  }
  if ((*(byte *)(iVar1 + 0xc) & 2) == 0) {
    iVar5 = FUN_003554bb(iVar1,piVar2,0);
  }
  else {
    iVar5 = FUN_00354523(iVar1,piVar2,0);
  }
LAB_00346c0a:
  if (param_2 != (int *)0x0) {
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(int *)((int)param_2 + 8) = piVar2[4];
    *(int *)((int)param_2 + 0xc) = iVar5;
    KeSetEvent(*piVar2,0,0);
    ObfDereferenceObject();
  }
  return iVar5;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C3BCDB88A8C3D8052FB57068756A1160B511BA66BAD2750B3CFC11C6F25A7C4
 * Entry: 0x002f5810, Ghidra index: 10897, label: FUN_002f5810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f5810(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  iVar1 = NtReadFile(param_1,0,0,0,local_c,param_4,0x1c,&local_14);
  if (-1 < iVar1) {
    if (local_8 == 0x1c) {
      uVar3 = param_4[6];
      if (0x6c < uVar3) {
        uVar3 = 0x6c;
      }
      iVar1 = NtReadFile(param_1,0,0,0,local_c,param_4 + 7,uVar3 - 0x1c,0);
      if (iVar1 < 0) goto LAB_002f587b;
      if (local_8 == uVar3 - 0x1c) {
        if (param_4[5] == 0x46534358) {
          if (uVar3 < 0x6c) {
            puVar5 = (undefined4 *)(uVar3 + (int)param_4);
            for (uVar2 = 0x6c - uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            for (uVar3 = 0x6c - uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar5 = 0;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
            }
          }
          if (param_3 == 0) {
            return 1;
          }
          iVar1 = FUN_002f5738(param_1,param_2,param_4,local_28);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = 5;
          bVar6 = true;
          piVar4 = local_28;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar6 = *piVar4 == *param_4;
            piVar4 = piVar4 + 1;
            param_4 = param_4 + 1;
          } while (bVar6);
          if (bVar6) {
            return 1;
          }
          uVar7 = 5;
        }
        else {
          uVar7 = 0xd;
        }
        XAPILIB__SetLastError(uVar7);
        return 0;
      }
    }
    iVar1 = -0x3ffffff0;
  }
LAB_002f587b:
  XAPILIB__XapiSetLastNTError(iVar1);
  return 0;
}

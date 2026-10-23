/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2522433E5570E5BA0394AA5AC4000BE7A17CBDE5153108CF86BD4FF156818C4
 * Entry: 0x002f58ec, Ghidra index: 10898, label: XLoadContentSignaturesWithFileName
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * XAPILIB__XLoadContentSignaturesWithFileName(dword param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined1 local_10c [116];
  undefined1 local_98 [32];
  byte local_78;
  undefined4 local_48;
  int local_44;
  int local_40 [5];
  int local_2c [5];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)0x0;
  iVar1 = FUN_002f2b3f(param_2,0x80000000,1,0,3,0,0);
  if (iVar1 == -1) {
    return (undefined4 *)0x0;
  }
  if (param_1 == 0) {
    param_1 = XBE_CERTIFICATE_HEADER_00010180.TitleID;
  }
  iVar2 = FUN_002f5810(iVar1,param_1,1,local_98);
  if (iVar2 != 0) {
    if (((local_78 & 1) == 0) || (local_44 == 0)) {
      uVar7 = 2;
    }
    else {
      puVar3 = (undefined4 *)LocalAlloc(0,local_44 + 0x10);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[3] = puVar3 + 4;
        local_18 = 0;
        uStack_14 = 0;
        uStack_c = 0;
        uStack_8 = 0;
        local_10 = local_48;
        iVar2 = ReadFile(iVar1,puVar3[3],local_44,&param_2,&local_18);
        if ((iVar2 != 0) && (local_44 == param_2)) {
          iVar2 = puVar3[3];
          puVar3[1] = *(int *)(iVar2 + 8) + iVar2;
          puVar3[2] = *(int *)(iVar2 + 8) + iVar2;
          CloseHandle(iVar1);
          XcSHAInit(local_10c);
          XcSHAUpdate(local_10c,puVar3[3],local_44);
          XcSHAFinal(local_10c,local_2c);
          iVar1 = 5;
          bVar6 = true;
          piVar4 = local_2c;
          piVar5 = local_40;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar6 = *piVar4 == *piVar5;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (bVar6) {
            *puVar3 = 0x66736378;
            return puVar3;
          }
          goto LAB_002f5a10;
        }
        goto LAB_002f5a0a;
      }
      uVar7 = 8;
    }
    SetLastError(uVar7);
  }
LAB_002f5a0a:
  CloseHandle(iVar1);
LAB_002f5a10:
  if (puVar3 != (undefined4 *)0x0) {
    LocalFree(puVar3);
  }
  return (undefined4 *)0x0;
}

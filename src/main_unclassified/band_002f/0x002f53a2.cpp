/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2D988B1E3E9EB77B8EECC404DBDE48A542F5B7305F038DCB9EB8A7A0F2AF9B4
 * Entry: 0x002f53a2, Ghidra index: 10891, label: FUN_002f53a2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f53a2(uint *param_1,uint param_2,char *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 local_70 [20];
  int local_5c;
  uint local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  
  uVar8 = 0;
  if ((*param_1 & 0x10) == 0) {
    return 0;
  }
  puVar3 = param_1 + 0xb;
  do {
    uVar2 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((char)uVar2 != '\0');
  if ((int)puVar3 - ((int)param_1 + 0x2d) != 0x10) {
    return 0;
  }
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)param_1 + (0x14c - (int)param_3)] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  puVar3 = param_1 + 0xb;
  do {
    uVar2 = *puVar3;
    *(char *)((int)param_4 + 0x120 + (int)puVar3) = (char)uVar2;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((char)uVar2 != '\0');
  if ((int)param_4 + 0x10U < 0x103) {
    *(undefined1 *)((int)param_1 + (int)param_4 + 0x15d) = 0;
    *(undefined1 *)((int)param_1 + (int)param_4 + 0x15c) = 0x5c;
  }
  if (0xf3 < (int)((int)param_4 + 0x10U)) {
    return 0;
  }
  param_4 = (undefined1 *)((int)param_1 + (int)param_4 + 0x15c);
  pcVar4 = "\\ContentMeta.xbx";
  do {
    cVar1 = *pcVar4;
    (param_4 + -0x38774c)[(int)pcVar4] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = FUN_002f2b3f(param_1 + 0x53,0x80000000,1,0,3,0x80,0);
  if (iVar5 == -1) goto LAB_002f5535;
  iVar6 = XAPILIB__ReadFile(iVar5,local_70,0x6c,&param_3,0);
  if ((iVar6 == 0) || (param_3 != (char *)0x6c)) {
LAB_002f54ef:
    bVar7 = false;
  }
  else {
    bVar7 = false;
    if (local_5c == 0x46534358) {
      local_50 = local_50 & 1;
      param_1[0x50] = local_48;
      param_1[0x51] = local_44;
      param_1[0x52] = local_40;
      bVar7 = false;
      if (local_50 != 0) {
        if (param_2 != 0) {
          local_50 = local_40 & param_2;
        }
        bVar7 = false;
        if (local_50 != 0) {
          if ((local_38 == 0) || (iVar6 = XAPILIB__SetFilePointer(iVar5,local_3c,0,0), iVar6 == -1))
          goto LAB_002f54ef;
          bVar7 = true;
        }
      }
    }
  }
  param_2 = local_38 + -2;
  uVar8 = 0;
  if (bVar7) {
    iVar6 = FUN_002f390d(iVar5,0);
    uVar8 = 0;
    if (iVar6 != 0) {
      uVar8 = FUN_002f5142(iVar5,&param_2,0,L"Name",param_1 + 0x94,0x80);
    }
  }
  XAPILIB__CloseHandle(iVar5);
LAB_002f5535:
  *param_4 = 0;
  return uVar8;
}

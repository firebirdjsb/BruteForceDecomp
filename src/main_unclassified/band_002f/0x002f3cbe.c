/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B21C5B3D8D63A68D850C84DA3A330E6AAF0AB5B8FAEF46B1C9CADC0FB8C341C6
 * Entry: 0x002f3cbe, Ghidra index: 10847, label: XCreateSaveGame
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__XCreateSaveGame
              (char *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char local_12c [268];
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar5 = -(int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(local_12c + iVar5)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  pcVar2 = local_12c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_002f387b();
  pcVar2 = local_12c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(local_12c + 1);
  if (param_3 == 3) {
    pcVar2 = "\\SaveMeta.xbx";
    do {
      cVar1 = *pcVar2;
      (&stack0xffc78a40 + uVar3)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_002f3be2();
    local_12c[uVar3] = '\0';
    iVar5 = iVar4;
  }
  else {
    iVar5 = FUN_002f4839();
    if (iVar5 != 0) {
      pcVar2 = "\\SaveMeta.xbx";
      do {
        cVar1 = *pcVar2;
        (&stack0xffc78a40 + uVar3)[(int)pcVar2] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      RtlInitAnsiString();
      local_8 = 0;
      local_14 = local_20;
      local_18 = 0xfffffffd;
      local_10 = 0x40;
      local_c = 1;
      iVar5 = NtCreateFile();
      local_12c[uVar3] = '\0';
      if (iVar5 < 0) {
        iVar5 = RtlNtStatusToDosError();
LAB_002f3f0e:
        FUN_002f48a5();
        return iVar5;
      }
      FUN_002ea9a9();
      iVar5 = FUN_002eaa70();
      for (iVar5 = iVar5 << 1; iVar5 != 0; iVar5 = iVar5 - param_2) {
        iVar4 = WriteFile();
        if (iVar4 == 0) {
          iVar5 = GetLastError();
          CloseHandle();
          goto LAB_002f3f0e;
        }
      }
      CloseHandle();
      goto LAB_002f3ed1;
    }
    iVar4 = GetLastError();
    iVar5 = 0x491;
    if (iVar4 == 0xb7) {
      pcVar2 = "\\SaveMeta.xbx";
      do {
        cVar1 = *pcVar2;
        (&stack0xffc78a40 + uVar3)[(int)pcVar2] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_002f3be2();
      local_12c[uVar3] = '\0';
      if (iVar5 != 0) {
        return 0x52;
      }
      FUN_002f3c62();
      iVar5 = 0;
    }
    if (param_3 == 1) {
      return iVar4;
    }
  }
  if (iVar5 != 0) {
    return iVar4;
  }
LAB_002f3ed1:
  if ((param_5 != 0) && (lstrcpynA(), uVar3 < param_6 - 1U)) {
    ((undefined1 *)(uVar3 + param_5))[1] = 0;
    *(undefined1 *)(uVar3 + param_5) = 0x5c;
  }
  return 0;
}

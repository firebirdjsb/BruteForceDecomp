/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E47413DA922C972B8ECBB34C8287F1A7702CD84934B8123CFD4C8F55FBC5AD5
 * Entry: 0x002f5544, Ghidra index: 10892, label: XFindFirstContent
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * XAPILIB__XFindFirstContent(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  char local_10c [260];
  int local_8;
  
  iVar5 = -(int)param_1;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_10c + iVar5)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = local_10c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(local_10c + 1);
  pcVar2 = "$C\\*";
  local_8 = iVar3;
  do {
    cVar1 = *pcVar2;
    (&stack0xffc78768 + iVar3)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  puVar4 = (undefined4 *)FUN_002f46db();
  do {
    cVar1 = *param_1;
    param_1[(int)(local_10c + iVar5)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  pcVar2 = "$C\\";
  do {
    cVar1 = *pcVar2;
    (&stack0xffc7875c + iVar3)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_8 = local_8 + 3;
  if (puVar4 == (undefined4 *)0xffffffff) {
    return (undefined4 *)0xffffffff;
  }
  iVar5 = FUN_002f53a2();
  if (iVar5 == 0) {
    iVar5 = FUN_002f47e8();
    if (iVar5 != 0) {
      do {
        iVar3 = FUN_002f53a2();
        if (iVar3 != 0) break;
        iVar5 = FUN_002f47e8();
      } while (iVar5 != 0);
      if (iVar5 != 0) goto LAB_002f5633;
    }
    CloseHandle();
    puVar4 = (undefined4 *)0xffffffff;
    SetLastError();
  }
LAB_002f5633:
  puVar6 = puVar4;
  if (puVar4 != (undefined4 *)0xffffffff) {
    puVar6 = (undefined4 *)LocalAlloc();
    if (puVar6 == (undefined4 *)0x0) {
      CloseHandle();
      puVar6 = (undefined4 *)0xffffffff;
      SetLastError();
    }
    else {
      puVar6[2] = param_2;
      puVar6[3] = local_8;
      *puVar6 = 0x434f4e54;
      puVar6[1] = puVar4;
      lstrcpynA();
    }
  }
  return puVar6;
}

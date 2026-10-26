/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E98E729033BCCA285521BA9451E62B5F9E9D4FE86EC37295A4789F33F2F86F7A
 * Entry: 0x002f3ff1, Ghidra index: 10849, label: XFindFirstSaveGame
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * XAPILIB__XFindFirstSaveGame(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iStack00000008;
  char local_108 [260];
  
  iVar5 = -(int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(local_108 + iVar5)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  pcVar2 = local_108;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  /* Original 0x002F402A: LEA ECX,[EBP+EBX-0x104], where EBX
   * holds the string length. The constant '*' plus terminating NUL
   * are copied from 0x0038751C to local_108 + length; not to a
   * synthetic host address stack0xffc789dc. */
  char *guest_append_cursor = local_108 + (pcVar2 - (local_108 + 1));
  pcVar3 = "*";
  do {
    cVar1 = *pcVar3;
    *guest_append_cursor++ = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  puVar4 = (undefined4 *)FUN_002f46db();
  if (puVar4 == (undefined4 *)0xffffffff) {
    return (undefined4 *)0xffffffff;
  }
  iVar5 = FUN_002f3ae0();
  if (iVar5 == 0) {
    iStack00000008 = FUN_002f47e8();
    if (iStack00000008 != 0) {
      do {
        iVar5 = FUN_002f3ae0();
        if (iVar5 != 0) break;
        iStack00000008 = FUN_002f47e8();
      } while (iStack00000008 != 0);
      if (iStack00000008 != 0) goto LAB_002f40a7;
    }
    CloseHandle();
    puVar4 = (undefined4 *)0xffffffff;
    SetLastError();
  }
LAB_002f40a7:
  puVar6 = puVar4;
  if (puVar4 != (undefined4 *)0xffffffff) {
    puVar6 = (undefined4 *)LocalAlloc();
    if (puVar6 == (undefined4 *)0x0) {
      CloseHandle();
      puVar6 = (undefined4 *)0xffffffff;
      SetLastError();
    }
    else {
      *puVar6 = 0x53425645;
      puVar6[1] = puVar4;
      puVar6[2] = (int)pcVar2 - (int)(local_108 + 1);
      lstrcpynA();
    }
  }
  return puVar6;
}

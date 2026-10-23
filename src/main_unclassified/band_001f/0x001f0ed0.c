/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D7EA597DFE405F89DC021BBCE7D73883CAE102831649BCB81A56CBE156A350C
 * Entry: 0x001f0ed0, Ghidra index: 6984, label: FUN_001f0ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f0ed0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *unaff_ESI;
  undefined4 *puVar4;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    *unaff_ESI = 1;
    do {
      XAPILIB__SleepEx(1,1);
    } while (*(int *)(unaff_ESI + 4) != 0);
  }
  uVar2 = 0;
  puVar4 = (undefined4 *)(unaff_ESI + 0xc);
  iVar3 = 3;
  do {
    XAPILIB__SetEvent(*(undefined4 *)(unaff_ESI + 0x30));
    XAPILIB__Sleep(0);
    iVar1 = XAPILIB__CloseHandle(*puVar4);
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_ESI + 8) = 9;
      uVar2 = 0x80004005;
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar4 = (undefined4 *)(unaff_ESI + 0x18);
  iVar3 = 7;
  do {
    iVar1 = XAPILIB__CloseHandle(*puVar4);
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_ESI + 8) = 10;
      uVar2 = 0x80004005;
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar2;
}

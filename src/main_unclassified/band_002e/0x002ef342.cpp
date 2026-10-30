/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C8C0C6B6EA3D59FD63414A169D09089BC04DCEA1C57D013A019B42FBD1BBE16
 * Entry: 0x002ef342, Ghidra index: 10709, label: FUN_002ef342
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4dc;
extern uint32_t DAT_004a8e98;
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002ef342(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_004a8e98 <= param_1) {
    DAT_0040f4dc = 0;
    _DAT_0040f4d8 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) {
    _DAT_0040f4d8 = 9;
    DAT_0040f4dc = 0;
    return 0xffffffff;
  }
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_002ef3b9;
    }
    uVar3 = __get_osfhandle(param_1);
    iVar1 = XAPILIB__CloseHandle(uVar3);
    if (iVar1 == 0) {
      iVar1 = XAPILIB__GetLastError();
      goto LAB_002ef3bb;
    }
  }
LAB_002ef3b9:
  iVar1 = 0;
LAB_002ef3bb:
  FUN_002f0f1a(param_1);
  *(undefined1 *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + iVar4) = 0;
  if (iVar1 == 0) {
    return 0;
  }
  __dosmaperr(iVar1);
  return 0xffffffff;
}

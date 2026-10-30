/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF158B6943CCF580A2814E2E842AC26E5A683CF9F090F524EA0E9607C17A15F6
 * Entry: 0x002f178f, Ghidra index: 10780, label: FUN_002f178f
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

undefined8 FUN_002f178f(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  if (param_1 < DAT_004a8e98) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_002f1811;
    local_8 = param_3;
    iVar2 = __get_osfhandle(param_1);
    if (iVar2 == -1) goto LAB_002f1818;
    iVar2 = XAPILIB__SetFilePointer(iVar2,param_2,&local_8,param_4);
    if (iVar2 != -1) {
LAB_002f1800:
      pbVar1 = (byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_002f1828;
    }
    iVar3 = XAPILIB__GetLastError();
    if (iVar3 == 0) goto LAB_002f1800;
    __dosmaperr(iVar3);
  }
  else {
LAB_002f1811:
    DAT_0040f4dc = 0;
LAB_002f1818:
    _DAT_0040f4d8 = 9;
  }
  iVar2 = -1;
  local_8 = 0xffffffff;
LAB_002f1828:
  return CONCAT44(local_8,iVar2);
}

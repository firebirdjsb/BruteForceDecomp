/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 280DE2C289F6EB6DF0CC37C7880D03EABA1BABF41333F0EAFE0EE128D60E5254
 * Entry: 0x002ef651, Ghidra index: 10714, label: FUN_002ef651
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

int FUN_002ef651(uint param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < DAT_004a8e98) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      iVar2 = __get_osfhandle(param_1);
      if (iVar2 == -1) {
        _DAT_0040f4d8 = 9;
        return -1;
      }
      iVar2 = XAPILIB__SetFilePointer(iVar2,param_2,0,param_3);
      if (iVar2 == -1) {
        iVar3 = XAPILIB__GetLastError();
      }
      else {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        pbVar1 = (byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + iVar4);
        *pbVar1 = *pbVar1 & 0xfd;
        return iVar2;
      }
      __dosmaperr(iVar3);
      return -1;
    }
  }
  DAT_0040f4dc = 0;
  _DAT_0040f4d8 = 9;
  return -1;
}

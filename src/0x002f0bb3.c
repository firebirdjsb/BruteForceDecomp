/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37451D7FF21C18DEE76C742C4CF6112EEFE9F8D1FD4FBDC0014BA0CEF6172F1E
 * Entry: 0x002f0bb3, Ghidra index: 10756, label: FUN_002f0bb3
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

undefined4 FUN_002f0bb3(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0040f4dc;
  if ((param_1 < DAT_004a8e98) &&
     ((*(byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    uVar1 = __get_osfhandle(param_1);
    iVar2 = XAPILIB__FlushFileBuffers(uVar1);
    if (iVar2 == 0) {
      iVar2 = XAPILIB__GetLastError();
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  DAT_0040f4dc = iVar2;
  _DAT_0040f4d8 = 9;
  return 0xffffffff;
}

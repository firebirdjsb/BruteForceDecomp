/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60C6A3B8036DA397168567BD62FB6CA51EA732986598E528865CE09BD4CA519A
 * Entry: 0x0035b1a0, Ghidra index: 13196, label: FUN_0035b1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412ae0;
extern uint32_t DAT_00412ae8;
extern uint32_t DAT_00412aec;
extern uint32_t DAT_00412af0;
extern uint32_t DAT_00412af4;
extern uint32_t DAT_00412af8;
extern uint32_t DAT_004b50f0;
extern uint32_t _DAT_004b50f4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0035b1a0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_8;
  int local_4;
  
  if (DAT_004b50f0 == 0) {
    if (DAT_00412af0 != 0 || DAT_00412af4 != 0) {
      XAPILIB__QueryPerformanceCounter(&local_8);
      iVar1 = XAPILIB__GetTickCount();
      uVar4 = __allmul(local_8 - DAT_00412ae8,
                       (local_4 - DAT_00412aec) - (uint)(local_8 < DAT_00412ae8),1000,0);
      iVar2 = __aulldiv(uVar4,DAT_00412af0,DAT_00412af4);
      iVar2 = iVar2 + _DAT_004b50f4;
      uVar3 = (iVar1 - DAT_00412af8) - (iVar2 - DAT_00412ae0);
      if (200 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
        _DAT_004b50f4 = _DAT_004b50f4 + uVar3;
        iVar2 = iVar2 + uVar3;
      }
      if (0xc0000000 < (uint)(iVar2 - DAT_00412ae0)) {
        return DAT_00412ae0;
      }
      DAT_00412af8 = iVar1;
      DAT_00412ae0 = iVar2;
      return iVar2;
    }
  }
  else {
    DAT_004b50f0 = 0;
    iVar1 = XAPILIB__QueryPerformanceFrequency(&DAT_00412af0);
    if (iVar1 != 0) {
      XAPILIB__QueryPerformanceCounter(&DAT_00412ae8);
      DAT_00412ae0 = 0;
      DAT_00412af8 = XAPILIB__GetTickCount();
      return 0;
    }
    DAT_00412af0 = 0;
    DAT_00412af4 = 0;
  }
  iVar1 = XAPILIB__GetTickCount();
  return iVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F0A8D8AEEC294DE0819306F6D81CEAFC59ACC80FC00D239A545764B5D183ECF
 * Entry: 0x002ead9b, Ghidra index: 10601, label: FUN_002ead9b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4dc;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002ead9b(undefined4 param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_002f3071(param_1);
  if (uVar1 == 0xffffffff) {
    uVar2 = XAPILIB__GetLastError();
    __dosmaperr(uVar2);
  }
  else {
    if (((uVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    _DAT_0040f4d8 = 0xd;
    DAT_0040f4dc = 5;
  }
  return 0xffffffff;
}

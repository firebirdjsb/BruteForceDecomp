/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 606BA02A6B68D33B0B40740AA6A6389F474C22D141571BA4FAB14E42573FC205
 * Entry: 0x002ee49d, Ghidra index: 10699, label: FUN_002ee49d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
uint FUN_002ee49d(uint param_1)

{
  uint uVar1;
  
  if (0xff < param_1) {
    return 0;
  }
  if (1 < DAT_003b6c30) {
    uVar1 = FUN_002eba73(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_003b6c3c[param_1 * 2] & 8;
}

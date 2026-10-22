/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20B7FBFA565798CE28A714B2DEAF12A046669FDCB6E806598B8A5FFB2D8E79D4
 * Entry: 0x0034501b, Ghidra index: 12771, label: FUN_0034501b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
undefined4 FUN_0034501b(void)

{
  undefined4 uVar1;
  
  if (DAT_0040f5b4 == 0) {
    return 0x276d;
  }
  uVar1 = FUN_0034b20e();
  return uVar1;
}

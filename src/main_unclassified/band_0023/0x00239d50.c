/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40F94060C70A41AF75E65FBEF5884DAA5DE22AE5245D445284D5E42E5A065EC2
 * Entry: 0x00239d50, Ghidra index: 7893, label: FUN_00239d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x00239d60 CALL EAX after loading [0x004698d4]; signature/host width ABI_UNVERIFIED. */
extern code *DAT_004698d4;
extern uint32_t DAT_004698d8;
void FUN_00239d50(void)

{
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F745962EDE52473446D175E98F5ABA0C6C60558796B34512B0241375034513B
 * Entry: 0x0035f9e0, Ghidra index: 13222, label: FUN_0035f9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern void FUN_002f8e70(int param_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004c07ec;
extern uint32_t DAT_004c07f0;
void FUN_0035f9e0(void)

{
  if (DAT_004c07f0 != 0) {
    FUN_002f8e70(DAT_004c07f0);
    DAT_004c07f0 = 0;
    DAT_004c07ec = 0;
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 793513A502A4AC054969F03B5051092A0D9B1131D10CC0089C4A3DEFEB1FFD8B
 * Entry: 0x0038359f, Ghidra index: 13616, label: FUN_0038359f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc8;
void FUN_0038359f(void)

{
  if (DAT_004a8fc8 != 0) {
    DAT_004a8fc8 = *(int *)(DAT_004a8fc8 + 0x18);
  }
  return;
}

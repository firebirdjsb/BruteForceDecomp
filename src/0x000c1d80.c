/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E257DFBE5D4E588D3C42BA9177F519D6A3FB66B0AA83563C677F224C42AB443
 * Entry: 0x000c1d80, Ghidra index: 2360, label: FUN_000c1d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f65c;
void FUN_000c1d80(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000bb4d0(unaff_ESI,0x10);
  *unaff_ESI = &PTR_FUN_0039f65c;
  FUN_000bb600(unaff_ESI);
  unaff_ESI[0x14] = 0;
  return;
}

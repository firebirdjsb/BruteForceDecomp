/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B83C63B97EDA79428DEFEFC6FD0A45C0A6B3FE5648D2FDD040EA3D9FF33B89B
 * Entry: 0x00055450, Ghidra index: 808, label: FUN_00055450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffca1;
void FUN_00055450(float param_1)

{
  char cVar1;
  int unaff_ESI;
  
  if (DAT_003ffca1 != '\0') {
    *(float *)(unaff_ESI + 0x14) = param_1 + *(float *)(unaff_ESI + 0x14);
    cVar1 = FUN_00055070(unaff_ESI);
    if (cVar1 != '\0') {
      FUN_000552e0();
    }
  }
  return;
}

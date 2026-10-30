/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40BAE9FA7A5250AA4315D88F8F295E780EF7364FE41E0CF373096588413F756C
 * Entry: 0x0034c826, Ghidra index: 12970, label: FUN_0034c826
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c826(int param_1)

{
  if ((*(byte *)(param_1 + 10) & 4) == 0) {
    ExFreePool(param_1);
  }
  else {
    FUN_0034c6bc(param_1);
  }
  return;
}

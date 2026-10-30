/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69E034FE1B7668BC591808E2982D17D01D89A9BAFB601029D54377298CFAC71D
 * Entry: 0x001374c0, Ghidra index: 3905, label: FUN_001374c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
bool FUN_001374c0(void)

{
  bool bVar1;
  int in_ECX;
  
  bVar1 = true;
  if (*(int *)(in_ECX + 4) < 100) {
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    bVar1 = (int)(DAT_0046cfd8 % 100 + 1) <= *(int *)(in_ECX + 4);
  }
  return bVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4DEBA6B9978D222703E66B053DEE5C723CFA047FA1741DF93C3E0CC0EFAF730
 * Entry: 0x00144f20, Ghidra index: 4183, label: FUN_00144f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c2b8;
extern uint32_t PTR_FUN_003a402c;
void FUN_00144f20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039c2b8;
  if (in_ECX[7] != 0) {
    FUN_0008a560(0);
  }
  if (in_ECX[0xb] != 0) {
    FUN_000db3e0(in_ECX[0xb]);
  }
  if (in_ECX[0xb] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[9] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_FUN_003a402c;
  if (in_ECX[4] != 0) {
    FUN_0008f6e0();
    if (in_ECX[4] != 0) {
      FUN_0008f6e0();
      return;
    }
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92CADE2E7E70CF7022258F4B0B6BC27B6A313B7D8335869D59AA5F21459AA404
 * Entry: 0x000741e0, Ghidra index: 1317, label: FUN_000741e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a25e4;
void FUN_000741e0(void)

{
  int *in_ECX;
  int iVar1;
  
  *in_ECX = (int)&PTR_FUN_003a25e4;
  iVar1 = 4;
  do {
    in_ECX = in_ECX + 1;
    if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*in_ECX)(1);
      *in_ECX = 0;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

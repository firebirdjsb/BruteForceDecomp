/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BE44BA4E5D0CB0A778E72D26C44C81C0ABE72540F280D483816C3998208D532
 * Entry: 0x0015f5b0, Ghidra index: 4575, label: FUN_0015f5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039be64;
extern uint32_t PTR_FUN_0039c064;
extern uint32_t PTR_LAB_0039dfa4;
void FUN_0015f5b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039c064;
  FUN_002107d0(*(undefined4 *)(in_ECX[5] + 0x54c),0);
  *in_ECX = &PTR_FUN_0039be64;
  if (in_ECX[9] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[7] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[5] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_0039dfa4;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF119190E48440EB06E52B9B6679CA1DA3FF90FB5422EE700CCFD0F984CE84A4
 * Entry: 0x00148ed0, Ghidra index: 4265, label: FUN_00148ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039be64;
extern uint32_t PTR_LAB_0039dfa4;
void FUN_00148ed0(byte param_1)

{
  undefined4 *in_ECX;
  
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
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

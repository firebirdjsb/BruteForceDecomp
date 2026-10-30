/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A81D392D69351422874EB1FBDD0C0E7F01559A1A3E915697B0E34498C5F6D60D
 * Entry: 0x002e4fc0, Ghidra index: 10463, label: FUN_002e4fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003866f0;
extern uint32_t PTR_LAB_0038670c;
extern uint32_t PTR_LAB_00386718;
void FUN_002e4fc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00386718;
  in_ECX[0x94] = &PTR_LAB_0038670c;
  FUN_002e45a0();
  *in_ECX = &PTR_FUN_003866f0;
  FUN_002e45a0();
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF7D357A255BC511D387000D056FEA14F4D7498234D951806CDA005373164E6E
 * Entry: 0x0015f180, Ghidra index: 4571, label: FUN_0015f180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039aab0;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039aa9c;
extern uint32_t PTR_LAB_0039aaa8;
void FUN_0015f180(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039aab0;
  in_ECX[0x12] = &PTR_FUN_0039adec;
  in_ECX[0x1a] = &PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039aaa8;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039aa9c;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x180;
  FUN_00156c50();
  return;
}

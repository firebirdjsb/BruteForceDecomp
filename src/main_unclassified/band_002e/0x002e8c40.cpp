/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE01435E40977C696722D2DC0DCB1A78A5401D5DC2BC267CA55287895FCD7984
 * Entry: 0x002e8c40, Ghidra index: 10544, label: FUN_002e8c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386908;
void FUN_002e8c40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00386908;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}

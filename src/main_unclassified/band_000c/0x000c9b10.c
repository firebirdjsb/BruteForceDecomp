/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FA3B97ED6E5245B34BF87C01D478D1D5C2D801E3CF8B302111E8F40182C3015
 * Entry: 0x000c9b10, Ghidra index: 2496, label: FUN_000c9b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f1b0;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000c9b10(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) & 0xfe;
  *(byte *)(in_EAX + 0x18) = *(byte *)(in_EAX + 0x18) & 0xf9 | 1;
  *in_EAX = &PTR_FUN_0039f1b0;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x1c] = 0x40800000;
  return;
}

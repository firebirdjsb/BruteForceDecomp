/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BB05420CE00822E531CEA53DC00431F6EAD4CD0E1FF5B9A4897E56129839A5B
 * Entry: 0x000aa000, Ghidra index: 2028, label: FUN_000aa000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_003a02b4;
extern uint32_t PTR_LAB_003a02a0;
void FUN_000aa000(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) & 0xfe;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0x40800000;
  *(byte *)(in_EAX + 0x18) = *(byte *)(in_EAX + 0x18) & 0xf9 | 1;
  *in_EAX = &PTR_FUN_003a02b4;
  in_EAX[0xb] = &PTR_LAB_003a02a0;
  in_EAX[0x1e] = 0;
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) | 1;
  return;
}

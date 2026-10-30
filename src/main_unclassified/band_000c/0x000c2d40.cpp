/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E667FB8B2318F96C094E43C40BD461B718FFD6A8398379A7F50985E0F8F4DCB5
 * Entry: 0x000c2d40, Ghidra index: 2380, label: FUN_000c2d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039f574;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000c2d40(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) | 1;
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x19] = 0;
  *in_EAX = &PTR_FUN_0039f574;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  return;
}

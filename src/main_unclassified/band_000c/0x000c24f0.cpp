/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B3B2542F193D6072A68A2A1A057B006F5A0B13D67B4A6ECA36633109AA6B002
 * Entry: 0x000c24f0, Ghidra index: 2372, label: FUN_000c24f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);
extern undefined4 FUN_000ba6d0(void);

extern uint32_t PTR_FUN_0039f5e8;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000c24f0(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039f5e8;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x80;
  *(undefined2 *)(in_EAX + 3) = 0x80;
  FUN_000ba6d0();
  *(byte *)(in_EAX + 0x19) = *(byte *)(in_EAX + 0x19) & 0xfe;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5E32F8A0F9ACA7351F838D3B8DB3683330B27583B3C517CF2837D25FD833D96
 * Entry: 0x000ab410, Ghidra index: 2044, label: FUN_000ab410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a0158;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000ab410(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_003a0158;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x1f] = 10;
  in_EAX[0x20] = 0xffffffff;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1e] = 0;
  *(byte *)(in_EAX + 0x1d) = *(byte *)(in_EAX + 0x1d) & 0xfe | 2;
  *(undefined1 *)((int)in_EAX + 0x75) = 0xff;
  return;
}

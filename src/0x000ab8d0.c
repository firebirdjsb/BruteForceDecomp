/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A63D9E889D4B93BE2C154DE64A48B6A641FCFFA83DDA45E82C48AFC74AA10E43
 * Entry: 0x000ab8d0, Ghidra index: 2051, label: FUN_000ab8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a019c;
extern uint32_t PTR_LAB_003a0188;
void FUN_000ab8d0(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *(undefined2 *)((int)in_EAX + 0xe) = 0x40;
  *(undefined2 *)(in_EAX + 3) = 0x40;
  *(byte *)(in_EAX + 0x18) = *(byte *)(in_EAX + 0x18) & 0xf9;
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) & 0xfe;
  in_EAX[0x1a] = 0x428c0000;
  in_EAX[0x1b] = 0x428c0000;
  in_EAX[0x1c] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x26] = 0;
  in_EAX[0x27] = 0;
  *in_EAX = &PTR_FUN_003a019c;
  in_EAX[0xb] = &PTR_LAB_003a0188;
  *(undefined2 *)(in_EAX + 2) = 0x140;
  *(undefined2 *)((int)in_EAX + 10) = 0xf0;
  *(byte *)(in_EAX + 0x1f) = *(byte *)(in_EAX + 0x1f) & 0xfa | 2;
  in_EAX[7] = 5;
  return;
}

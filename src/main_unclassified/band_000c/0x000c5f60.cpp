/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87E47B5436251D54BA23A959E8703C1A37E3A0E472CD0B85550C481183553829
 * Entry: 0x000c5f60, Ghidra index: 2433, label: FUN_000c5f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039f3f8;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000c5f60(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1d] = 0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0;
  *(undefined2 *)(in_EAX + 3) = 0;
  *(byte *)(in_EAX + 0x18) = *(byte *)(in_EAX + 0x18) & 0xf9;
  in_EAX[0x1f] = 0x3f400000;
  *(undefined1 *)(in_EAX + 0x19) = 1;
  *in_EAX = &PTR_FUN_0039f3f8;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x26] = 0;
  *(byte *)(in_EAX + 0x22) = *(byte *)(in_EAX + 0x22) | 3;
  in_EAX[0x24] = 0x40000000;
  in_EAX[0x26] = 0x17e53364;
  in_EAX[0x21] = 0;
  in_EAX[0x25] = 0;
  *(byte *)(in_EAX + 0x22) = *(byte *)(in_EAX + 0x22) & 0xfb;
  return;
}

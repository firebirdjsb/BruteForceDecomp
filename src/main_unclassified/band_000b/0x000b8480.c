/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AE65CF4F2C683D65F38C74D04FD482B5BF7812CAED52A622AE3A16DDB03370C
 * Entry: 0x000b8480, Ghidra index: 2221, label: FUN_000b8480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039fc40;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000b8480(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039fc40;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  FUN_000ba6d0();
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) | 1;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x100;
  *(undefined2 *)(in_EAX + 3) = 0x40;
  in_EAX[0x19] = 0x434a0000;
  in_EAX[0x1a] = 0;
  return;
}

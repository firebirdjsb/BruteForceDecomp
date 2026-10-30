/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01A8C153A17ED6997D25142DFA20608D7ED31DF22C086997B567CECD9D15339D
 * Entry: 0x000ad8d0, Ghidra index: 2077, label: FUN_000ad8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bbcb0(void);
extern undefined4 FUN_000ba6d0(void);

extern uint32_t PTR_FUN_003a012c;
void FUN_000ad8d0(void)

{
  undefined4 *in_EAX;
  
  FUN_000bbcb0();
  *in_EAX = &PTR_FUN_003a012c;
  in_EAX[0xf] = 0;
  in_EAX[0xe] = 0xff3ca0ff;
  *(undefined2 *)(in_EAX + 0x11) = 0xa0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x20;
  *(undefined2 *)(in_EAX + 3) = 0x40;
  *(undefined2 *)((int)in_EAX + 0x46) = 3;
  *(undefined2 *)(in_EAX + 0x12) = 0x3b;
  *(undefined2 *)((int)in_EAX + 0x4a) = 0xb;
  *(undefined2 *)(in_EAX + 0x13) = 0xffc8;
  FUN_000ba6d0();
  in_EAX[0x10] = 0;
  return;
}

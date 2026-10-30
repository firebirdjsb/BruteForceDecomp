/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E394D0170A60D7AB1BE0ABFAFAE0E93351D018ED047B1EB4C7D9583BDB8C811
 * Entry: 0x000b7bf0, Ghidra index: 2210, label: FUN_000b7bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b6cc0(void);

extern uint32_t PTR_FUN_0039fcf8;
void FUN_000b7bf0(void)

{
  undefined4 *in_EAX;
  
  FUN_000b6cc0();
  *(undefined4 *)((int)in_EAX + 0x51) = 0xffffffff;
  *(undefined4 *)((int)in_EAX + 0x59) = 0xff3caae6;
  *in_EAX = &PTR_FUN_0039fcf8;
  in_EAX[0x18] = 0;
  in_EAX[0x27] = 0;
  in_EAX[0x28] = 0x40400000;
  in_EAX[0x1a] = 0x3e19999a;
  *(undefined4 *)((int)in_EAX + 0x55) = 0xffffffff;
  *(undefined2 *)(in_EAX + 1) = 0;
  *(undefined2 *)((int)in_EAX + 6) = 0x13;
  return;
}

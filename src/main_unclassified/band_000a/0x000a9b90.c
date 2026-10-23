/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C548DC426F9F4C7F3B6F972787523D2865417FF58C162A1861424FA1B94D7DA2
 * Entry: 0x000a9b90, Ghidra index: 2027, label: FUN_000a9b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a02e8;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000a9b90(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *(byte *)(in_EAX + 0x18) = *(byte *)(in_EAX + 0x18) & 0xf9;
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1d] = 0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0;
  *(undefined2 *)(in_EAX + 3) = 0;
  in_EAX[0x22] = 0;
  in_EAX[0x23] = 0;
  in_EAX[0x1f] = 0x3f400000;
  *(undefined1 *)(in_EAX + 0x19) = 1;
  *in_EAX = &PTR_FUN_003a02e8;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x24] = 0x40000000;
  in_EAX[0x25] = 0x42400000;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 804F434C761DF7D53315C8DA70A595F347BFE573DE3155ECEB886EA09B9C7193
 * Entry: 0x000ff7b0, Ghidra index: 3196, label: FUN_000ff7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e3d8;
void FUN_000ff7b0(void)

{
  undefined4 *in_EAX;
  
  FUN_000ee640();
  *in_EAX = &PTR_FUN_0039e3d8;
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1f] = 0;
  in_EAX[0x26] = 0;
  *(byte *)(in_EAX + 0x19) = *(byte *)(in_EAX + 0x19) & 0xa5 | 0x24;
  in_EAX[0x24] = 0;
  in_EAX[0x25] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x23] = 0;
  in_EAX[0x21] = 0;
  in_EAX[0x22] = 0;
  in_EAX[0x28] = 0;
  in_EAX[0x29] = 0;
  *(undefined1 *)((int)in_EAX + 0x65) = 0;
  in_EAX[0x2a] = 0;
  in_EAX[0x2b] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x27] = 0xffffffff;
  *(byte *)((int)in_EAX + 0x66) = *(byte *)((int)in_EAX + 0x66) & 0xf1 | 1;
  in_EAX[0x2c] = 0xffffffff;
  in_EAX[0x18] = 0x19;
  in_EAX[0x1a] = 0xffffffff;
  return;
}

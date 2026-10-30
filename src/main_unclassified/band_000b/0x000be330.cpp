/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC3EBC1328D8B742F8FE9B72A59811D1379FEC23ED1FB0C19BFE8121BE83327A
 * Entry: 0x000be330, Ghidra index: 2316, label: FUN_000be330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039f7a0;
extern uint32_t PTR_LAB_0039f78c;
void FUN_000be330(void)

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
  in_EAX[0x1f] = 0x3f400000;
  *(undefined1 *)(in_EAX + 0x19) = 1;
  *in_EAX = &PTR_FUN_0039f7a0;
  in_EAX[0xb] = &PTR_LAB_0039f78c;
  in_EAX[0x21] = 0;
  in_EAX[0x23] = 0;
  return;
}

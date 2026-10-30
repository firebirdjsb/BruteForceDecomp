/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B682199E2508A9BA0042985883038D4DC5C0263AC41CFA18B729FD3097080E7B
 * Entry: 0x000c4f60, Ghidra index: 2422, label: FUN_000c4f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039f368;
extern uint32_t PTR_LAB_0039f354;
void FUN_000c4f60(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039f368;
  in_EAX[0xb] = &PTR_LAB_0039f354;
  in_EAX[0x28] = 0;
  in_EAX[0x2a] = 0;
  *(byte *)(in_EAX + 0x18) = *(byte *)(in_EAX + 0x18) & 0xf9;
  in_EAX[0x19] = 0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0;
  *(undefined2 *)(in_EAX + 3) = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1a] = 0x3f400000;
  *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xf7;
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) & 0xfe;
  in_EAX[0x2d] = 0;
  in_EAX[0x2c] = 0;
  in_EAX[0x2b] = 0;
  in_EAX[0x30] = 0;
  in_EAX[0x2f] = 0;
  in_EAX[0x2e] = 0;
  in_EAX[0x24] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x23] = 0;
  in_EAX[0x22] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x21] = 0;
  *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xfc | 4;
  in_EAX[0x1b] = 0x3ecccccd;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1ED756CB345A5FF574D5619BB9304EC6AA1A21C2D4630F3249FD1718C536DB9B
 * Entry: 0x000c72b0, Ghidra index: 2448, label: FUN_000c72b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039f2bc;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000c72b0(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *(byte *)(in_EAX + 0x18) = *(byte *)(in_EAX + 0x18) & 0xf9 | 1;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1c] = 0x40800000;
  *in_EAX = &PTR_FUN_0039f2bc;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) | 1;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A22A306B6CA8F91083E28A563C175281188590E2097E095AEA0A5B5484ABE6D
 * Entry: 0x001032e0, Ghidra index: 3293, label: FUN_001032e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e290;
void FUN_001032e0(void)

{
  undefined4 *in_EAX;
  
  FUN_000ee640();
  *in_EAX = &PTR_FUN_0039e290;
  in_EAX[0x18] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1f] = 0;
  *(byte *)(in_EAX + 0x1c) = *(byte *)(in_EAX + 0x1c) & 0xf9;
  in_EAX[0x18] = 0xfd2e2796;
  *(byte *)(in_EAX + 0x1c) = *(byte *)(in_EAX + 0x1c) | 1;
  in_EAX[0x1e] = 0xf83fc948;
  in_EAX[0x21] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  return;
}

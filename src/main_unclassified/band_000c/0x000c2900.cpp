/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CB49D4E9F629137600BC8F6F8E8F69EC561D400673ABAA6213854B652DCC055
 * Entry: 0x000c2900, Ghidra index: 2375, label: FUN_000c2900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f5b8;
extern uint32_t PTR_LAB_0039f5a4;
void FUN_000c2900(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039f5b8;
  in_EAX[0xb] = &PTR_LAB_0039f5a4;
  in_EAX[0x1b] = 0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x80;
  *(undefined2 *)(in_EAX + 3) = 0x80;
  in_EAX[0x1c] = 0;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  *(byte *)(in_EAX + 0x1d) = *(byte *)(in_EAX + 0x1d) & 0xfe;
  in_EAX[7] = 2;
  return;
}

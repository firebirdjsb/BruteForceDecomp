/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51B13497CAB63F6196A9C3ECBE17B3062822A062EB0AB384928287AFF7268FE8
 * Entry: 0x000cb1c0, Ghidra index: 2513, label: FUN_000cb1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f0f8;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000cb1c0(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  *(undefined1 *)(in_EAX + 0x1d) = 0;
  in_EAX[0x1e] = 0;
  *(byte *)(in_EAX + 0x18) = *(byte *)(in_EAX + 0x18) & 0xf9 | 1;
  *(byte *)((int)in_EAX + 0x75) = *(byte *)((int)in_EAX + 0x75) & 0xfe;
  in_EAX[0x1c] = 0x40800000;
  *in_EAX = &PTR_FUN_0039f0f8;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) | 1;
  in_EAX[0x1f] = 0x40800000;
  return;
}

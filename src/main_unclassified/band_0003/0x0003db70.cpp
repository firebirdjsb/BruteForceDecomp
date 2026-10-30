/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC26901D26F4082DF7D421AA963B4AD8D0F4CBAEC6A5AB61733EC63C8D2C11BB
 * Entry: 0x0003db70, Ghidra index: 462, label: FUN_0003db70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fa8;
void FUN_0003db70(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x45] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  *in_EAX = PTR_LAB_003a3fa8;
  in_EAX[0x46] = param_1;
  return;
}

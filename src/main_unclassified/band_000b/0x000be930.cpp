/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C46F4E2CFCD8DCAA14F505686A80A774A7DA69899FD072E6D1228CE0533C8DD
 * Entry: 0x000be930, Ghidra index: 2321, label: FUN_000be930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039f73c;
void FUN_000be930(void)

{
  undefined4 *in_EAX;
  
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  *in_EAX = PTR_LAB_0039f73c;
  in_EAX[0x43] = 0xfffffff8;
  in_EAX[0x44] = 0x400000;
  return;
}

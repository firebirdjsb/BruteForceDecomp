/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FFFAF8C07F1782167ACB982FA9EE721D0CA2C9CDD7604524E0DC1190E139451
 * Entry: 0x0002f140, Ghidra index: 308, label: FUN_0002f140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3ff8;
void FUN_0002f140(void)

{
  undefined4 *in_EAX;
  undefined4 in_EDX;
  
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  *in_EAX = &PTR_LAB_003a3ff8;
  in_EAX[0x46] = in_EDX;
  in_EAX[0x47] = 0;
  return;
}

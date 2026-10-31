/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9D78DA7E69151D3C06EF21D1E48DFF80013AD27E2CB7DEA429D8691543BE128
 * Entry: 0x00056d20, Ghidra index: 839, label: FUN_00056d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cc18;
void FUN_00056d20(void)

{
  undefined4 *in_EAX;
  
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  /* XBE 0x00056d35: MOV m32,0x0039cc18 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039cc18);
  in_EAX[0x43] = 0x58;
  in_EAX[0x44] = 0x415a1010;
  return;
}

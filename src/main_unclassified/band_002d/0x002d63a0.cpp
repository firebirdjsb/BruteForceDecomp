/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 379C614DDF947D6712CB265E00E98F0628489D17B66E6695F44C0533501BAE8F
 * Entry: 0x002d63a0, Ghidra index: 10241, label: FUN_002d63a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d63a0(void)

{
  int in_EAX;
  
  FUN_002d6170();
  FUN_002d5de0();
  FUN_002d5de0();
  FUN_002bfae0();
  *(uint *)(in_EAX + 0x14) = *(uint *)(in_EAX + 0x14) & 0xffffcfff;
  return;
}

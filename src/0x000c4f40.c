/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D74E2FCA22D7DA1B0770B34D8B5FF792DA3074B816CCA69DB19C84BFC287A8FB
 * Entry: 0x000c4f40, Ghidra index: 2421, label: FUN_000c4f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000c4f40(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0x28) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_EAX + 0x28) + -0x2c;
  }
  if (*(int *)(iVar1 + 0x28) != 0) {
    return *(int *)(iVar1 + 0x28) + -0x2c;
  }
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2CE16BA8D71A505A0D9C3EBFEC7174CCB678EC8A421A7A6AA814AC039A26F83
 * Entry: 0x0033bc06, Ghidra index: 12529, label: FUN_0033bc06
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bc06(uint param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
    *(uint *)(in_ECX + 0x14) = *(uint *)(in_ECX + 0x14) + 500;
  }
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) - param_1;
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) - param_1;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 846935D7E0E2979DB3B7106156FBBF39EB9472CD92AEF6F3708EAE60372CB534
 * Entry: 0x0033c1a6, Ghidra index: 12546, label: FUN_0033c1a6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033c1a6(int param_1,int param_2)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = *(int *)(in_ECX + 0x834) - *(int *)(in_ECX + 0x82c);
  if (uVar1 < 4) {
    uVar1 = uVar1 + 1;
  }
  else if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xc) >> 9;
  }
  else {
    uVar1 = ((*(int *)(in_ECX + 0x834) - (*(uint *)(param_1 + 0xc) >> 9)) - *(int *)(in_ECX + 0x82c)
            ) + 1;
  }
  return uVar1 << 9;
}

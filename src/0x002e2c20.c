/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD11D44A37F2E47FDFDE39B0719894E48EC843868583EC12429326A8F006EAF2
 * Entry: 0x002e2c20, Ghidra index: 10380, label: FUN_002e2c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e2c20(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x44 + (param_1 + *(int *)(in_ECX + 0xc4) * 8) * 4);
  *piVar1 = *piVar1 + param_2;
  *(int *)(in_ECX + 4 + param_1 * 4) = *(int *)(in_ECX + 4 + param_1 * 4) + param_2;
  return;
}

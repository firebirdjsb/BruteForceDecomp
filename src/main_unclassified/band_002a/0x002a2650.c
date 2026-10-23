/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10D0D7E17B4ACEEB9CCB378103320818678D45679956062C26E0BD93355D504B
 * Entry: 0x002a2650, Ghidra index: 9518, label: FUN_002a2650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a2650(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0xa0) = iVar1;
  return iVar1;
}

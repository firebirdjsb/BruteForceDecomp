/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B189A420EE6BA190D6F6F9ABFD294694232B7B3AA0BA6EBB969CFCE1C2AC7E1A
 * Entry: 0x0027baa0, Ghidra index: 8967, label: FUN_0027baa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0027baa0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + -8);
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x14))(piVar3);
  iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3);
  return iVar2 * 0x33 + 10 + iVar1 * 0x28;
}

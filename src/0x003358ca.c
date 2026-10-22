/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9D165FB0A597BC81CD621E31EA6E92A80162560B1BB14065E4C38A5F87732FC
 * Entry: 0x003358ca, Ghidra index: 12437, label: FUN_003358ca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003358ca(int param_1,int param_2)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x12d0);
  while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x2e;
    if (3 < uVar1) {
      return;
    }
  }
  return;
}

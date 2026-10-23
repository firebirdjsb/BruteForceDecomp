/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C1FA4DF816E02DC16F2E93EA3FCB3D974753C3DEEE2F96322268B344F526477
 * Entry: 0x003455c1, Ghidra index: 12812, label: FUN_003455c1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003455c1(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x24);
  while ((int *)*piVar1 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_0034c6bc(piVar2);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

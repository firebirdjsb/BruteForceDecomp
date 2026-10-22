/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F046226B56FA4D45A3D2A81415C37010D852E4A0C67E371C02A028A9E4C3BC2E
 * Entry: 0x0023cf30, Ghidra index: 7947, label: FUN_0023cf30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023cf30(float param_1)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  
  piVar1 = *(int **)(in_EAX + 0xc);
  for (piVar3 = *(int **)(in_EAX + 8); piVar3 != piVar1; piVar3 = piVar3 + 1) {
    iVar2 = *(int *)*piVar3;
    if (iVar2 == 1) {
      FUN_00266930(param_1);
    }
    else if (iVar2 == 2) {
      iVar2 = ((int *)*piVar3)[1];
      *(float *)(iVar2 + 0x1c) = param_1 + *(float *)(iVar2 + 0x1c);
    }
  }
  return;
}

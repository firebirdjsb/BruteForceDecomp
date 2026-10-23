/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28B7AC963A6554141099E80165CEDB5C9A136F961D68F2C427ECD0F4135DF8A4
 * Entry: 0x0017beb0, Ghidra index: 5035, label: FUN_0017beb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint * FUN_0017beb0(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(in_EAX + 8);
  if (piVar6 != *(int **)(in_EAX + 0xc)) {
    do {
      puVar1 = *(undefined4 **)(*piVar6 + 300);
      puVar2 = *(undefined4 **)(*piVar6 + 0x128);
      iVar5 = (int)puVar1 - (int)puVar2 >> 2;
      while (iVar4 = iVar5, 0 < iVar4) {
        iVar5 = iVar4 / 2;
        if (*(uint *)puVar2[iVar5] < *param_1) {
          puVar2 = puVar2 + iVar5 + 1;
          iVar5 = iVar4 + (-1 - iVar5);
        }
      }
      if (((puVar2 != puVar1) && (puVar3 = (uint *)*puVar2, *puVar3 == *param_1)) &&
         (puVar3 != (uint *)0x0)) {
        return puVar3;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(in_EAX + 0xc));
  }
  return (uint *)0x0;
}

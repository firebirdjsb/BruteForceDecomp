/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D2FFBE9A0280725861D86ECF2F16AEC564CEAA9FFA3F2DDAEADCB6DC8AACF00
 * Entry: 0x00259430, Ghidra index: 8498, label: FUN_00259430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00259430(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  piVar2 = (int *)**(int **)(in_ECX + 0x14);
  if (piVar2 != *(int **)(in_ECX + 0x14)) {
    do {
      piVar2 = *(int **)((int)piVar2 + 0x10);
      if (piVar2[3] == 0) {
        return -0x7fffbffb;
      }
      iVar3 = FUN_00259430();
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = FUN_0025a270();
      if (iVar3 != 1) {
        return -0x7fffbffb;
      }
      piVar1 = (int *)piVar2[3];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        piVar2[3] = 0;
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar2 = (int *)**(int **)(in_ECX + 0x14);
    } while (piVar2 != *(int **)(in_ECX + 0x14));
  }
  return 0;
}

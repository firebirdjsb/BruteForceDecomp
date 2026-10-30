/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C5450B0A3A6D42016287CA5BB978A246CF7FB11E7B0C430C5A48FB91CC8A5D6
 * Entry: 0x002a4100, Ghidra index: 9543, label: FUN_002a4100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a4100(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  while (param_3 != param_4) {
    puVar1 = (undefined4 *)param_3[1];
    puVar2 = (undefined4 *)*param_3;
    if (puVar1 == (undefined4 *)0x0) {
      *param_1 = puVar2;
    }
    else {
      *puVar1 = puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) {
      param_1[1] = puVar1;
    }
    else {
      puVar2[1] = puVar1;
    }
    param_3[1] = 0;
    *param_3 = 0;
    piVar3 = (int *)param_3[0x1b];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x34))(piVar3,7);
    }
    piVar3 = (int *)param_3[0x1c];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x34))(piVar3,7);
    }
    piVar3 = (int *)param_3[0x1c];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      param_3[0x1c] = 0;
    }
    piVar3 = (int *)param_3[0x1b];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      param_3[0x1b] = 0;
    }
    FUN_00238300();
    param_3 = puVar2;
  }
  *param_2 = param_3;
  return;
}

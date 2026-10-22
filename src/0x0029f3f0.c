/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97CCB47B1E4B4BF0890A9386A01A1AB37D1273C58D71082917D039BE185D5977
 * Entry: 0x0029f3f0, Ghidra index: 9485, label: FUN_0029f3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0029f3f0(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 8);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    uVar3 = (**(code **)(*piVar1 + 0x28))(piVar1);
    in_EAX[4] = uVar3;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x4c))(piVar1);
    if (puVar2 != (undefined4 *)0x0) {
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *in_EAX = *puVar2;
        puVar2 = puVar2 + 1;
        in_EAX = in_EAX + 1;
      }
      return 0;
    }
    in_EAX[4] = 0;
  }
  in_EAX[1] = 0;
  *in_EAX = 0;
  in_EAX[3] = 0x3f800000;
  in_EAX[2] = 0x3f800000;
  return 0;
}

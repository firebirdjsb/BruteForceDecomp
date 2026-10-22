/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2849DC43091D6BCDA17804AAC4CC107829E4244F6E3A55982DC20FC32F18F743
 * Entry: 0x00210560, Ghidra index: 7421, label: FUN_00210560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00210560(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined4 local_84;
  undefined4 auStack_80 [32];
  
  piVar1 = *(int **)(in_EAX + 8);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    piVar3 = (int *)piVar2[4];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x14))(param_1);
    }
    FUN_0012aba0();
  }
  piVar2 = (int *)**(undefined4 **)(in_EAX + 8);
  local_84 = 1;
  do {
    if (piVar2 == piVar1) {
LAB_002105e7:
      FUN_002107d0(in_EAX,local_84);
      iVar4 = FUN_00210740(auStack_80);
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          (**(code **)(*(int *)auStack_80[iVar5] + 0x14))(0);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
      return;
    }
    if ((((piVar2[4] != 0) && ((piVar2[3] & 0xc2U) != 0)) &&
        ((iVar4 = *(int *)(piVar2[4] + 4), iVar4 == 0 || (iVar4 == 1)))) &&
       (*(uint *)(in_EAX + 0x14) != piVar2[3])) {
      local_84 = 0;
      goto LAB_002105e7;
    }
    FUN_0012aba0();
  } while( true );
}

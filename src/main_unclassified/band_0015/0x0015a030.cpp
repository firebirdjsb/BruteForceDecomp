/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE7FFBDCE3FB46996984197B22B9301BAB5C14F1BAB4D5E06142064FEA015579
 * Entry: 0x0015a030, Ghidra index: 4508, label: FUN_0015a030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0015a030(char param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint in_EAX;
  uint uVar5;
  undefined4 uVar6;
  undefined3 uVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *unaff_ESI;
  
  uVar5 = in_EAX & 0xffffff00;
  if (((*(int *)(unaff_ESI[0x1b] + 0x10) != 0) &&
      (iVar3 = *(int *)(*(int *)(unaff_ESI[0x1b] + 0x10) + 100), iVar3 != 0)) && (iVar3 != -1)) {
    piVar4 = *(int **)(iVar3 + 0x5c);
    if (piVar4 == (int *)0x0) {
      return uVar5;
    }
    cVar1 = *(char *)((int)piVar4 + 0x26);
    cVar2 = *(char *)((int)unaff_ESI + 0x26);
    if (cVar1 < '\0') {
      (**(code **)(*piVar4 + 0xbc))();
    }
    if (cVar2 < '\0') {
      (**(code **)(*unaff_ESI + 0xbc))();
    }
    uVar6 = FUN_00235e40();
    uVar7 = (undefined3)((uint)uVar6 >> 8);
    if (param_1 != '\0') {
      (**(code **)(*unaff_ESI + 0xb8))(0x3f800000);
      uVar7 = extraout_var;
    }
    if (cVar1 < '\0') {
      (**(code **)(*piVar4 + 0xb8))(0x3f800000);
      uVar7 = extraout_var_00;
    }
    uVar5 = CONCAT31(uVar7,1);
  }
  return uVar5;
}

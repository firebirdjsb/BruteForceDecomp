/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66D5351031DB9EDA4BECC32A0CD31B1E32770726539D34883522E71DF4A43F62
 * Entry: 0x0014d680, Ghidra index: 4367, label: FUN_0014d680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014d680(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == 10) {
    if (param_2 != 0xfffffffe) {
      return 1;
    }
    if (*(int *)(in_EAX + 0x1ac) == 0) {
      return 0;
    }
    uVar3 = (**(code **)(**(int **)(*(int *)(in_EAX + 0x1d4) + 0x5a4) + 100))();
    return uVar3;
  }
  iVar4 = *(int *)(in_EAX + 0x1b4);
  if (iVar4 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    piVar5 = *(int **)(iVar4 + 0xbc);
  }
  else {
    if (9 < param_1) {
      return 0;
    }
    iVar1 = *(int *)(param_1 * 0x10 + 0xc + iVar4);
    iVar4 = param_1 * 0x10 + iVar4;
    if (iVar1 == 0) {
      return 0;
    }
    if ((uint)(*(int *)(iVar4 + 0x10) - iVar1 >> 2) <= param_2) {
      return 0;
    }
    piVar5 = *(int **)(*(int *)(iVar4 + 0xc) + param_2 * 4);
  }
  if ((((piVar5 != (int *)0x0) && (cVar2 = (**(code **)(*piVar5 + 0x20))(), cVar2 != '\0')) &&
      (iVar4 = (**(code **)(*piVar5 + 0x1c))(), *(char *)(iVar4 + 0x71) != '\0')) && (param_1 != 1))
  {
    return 1;
  }
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A310DABD5AA63AAE80D325D038595241D38E9E6CF3526543727411A82BDE49A8
 * Entry: 0x0022d720, Ghidra index: 7707, label: FUN_0022d720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022d720(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *unaff_EBX;
  int *piVar5;
  int *piVar6;
  int unaff_retaddr;
  
  iVar3 = (**(code **)(*in_ECX + 0x1c))();
  if ((iVar3 == 0) || (*(int *)(*(int *)(iVar3 + 0xc) + 4) != 3)) {
    FUN_001590a0(param_1);
    piVar5 = (int *)in_ECX[0xd6];
    if (piVar5 != (int *)0x0) {
      param_1 = 0;
      (**(code **)(*piVar5 + 0xc4))(&param_1);
      if (unaff_retaddr != 0) {
        for (piVar6 = (int *)in_ECX[0x5a]; piVar6 != (int *)in_ECX[0x5b]; piVar6 = piVar6 + 1) {
          puVar1 = (undefined4 *)*piVar6;
          if ((puVar1 != (undefined4 *)0x0) && (puVar1[2] == unaff_retaddr)) {
            FUN_0016ad50();
            (**(code **)*puVar1)(1);
            piVar5 = unaff_EBX;
            break;
          }
        }
        piVar2 = (int *)in_ECX[0x5b];
        if (piVar6 != piVar2) {
          piVar4 = piVar6 + 1;
          if (piVar4 != piVar2) {
            iVar3 = (int)piVar6 - (int)piVar4;
            do {
              *(int *)(iVar3 + (int)piVar4) = *piVar4;
              piVar4 = piVar4 + 1;
            } while (piVar4 != piVar2);
          }
          in_ECX[0x5b] = in_ECX[0x5b] + -4;
        }
        (**(code **)(*piVar5 + 0xbc))();
      }
    }
  }
  return;
}

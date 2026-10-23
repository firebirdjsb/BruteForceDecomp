/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A66DEF9DDC7CFCB47C64C512791F6F123963EBF44ADA07115A44E1334F12C5AB
 * Entry: 0x0023d4f0, Ghidra index: 7957, label: FUN_0023d4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d4f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int in_EAX;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_0023d460(in_EAX);
  piVar5 = *(int **)(in_EAX + 0xc);
  piVar6 = *(int **)(in_EAX + 8);
  bVar4 = false;
  bVar3 = false;
  if (piVar6 != piVar5) {
    do {
      if (*(int *)*piVar6 == 0) {
        piVar1 = (int *)((int *)*piVar6)[1];
        fVar7 = (float10)*(float *)(in_EAX + 0x40);
        if (*(float *)(*piVar1 + 4) < -100000.0) {
LAB_0023d58a:
          if (!bVar3) {
            local_4 = param_1[2];
            local_c = *param_1;
            local_8 = (float)(fVar7 + (float10)*(float *)(in_EAX + 0x3c));
          }
        }
        else {
          piVar1 = (int *)piVar1[8];
          if (piVar1 == (int *)0x0) {
            fVar7 = (float10)0.0;
            goto LAB_0023d58a;
          }
          fVar7 = (float10)(**(code **)(*piVar1 + 0xc))(piVar1);
          if (fVar7 == (float10)0.0) goto LAB_0023d58a;
          local_4 = param_1[2];
          local_c = *param_1;
          bVar3 = true;
          local_8 = (float)(fVar7 + (float10)*(float *)(in_EAX + 0x3c));
        }
        piVar1 = *(int **)(*(int *)(*piVar6 + 4) + 0x20);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x14))(piVar1,&local_c);
        }
        bVar4 = true;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar5);
    if (bVar4) goto LAB_0023d603;
  }
  local_4 = param_1[2];
  local_8 = *(float *)(in_EAX + 0x40) + *(float *)(in_EAX + 0x3c);
  local_c = *param_1;
LAB_0023d603:
  piVar5 = *(int **)(*(int *)(in_EAX + 0x20) + 0x58);
  if ((piVar5 != (int *)0x0) &&
     (piVar5 = (int *)(**(code **)(*piVar5 + 0x28))(piVar5,*(int *)(in_EAX + 0x20)),
     piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x48))(&local_c);
  }
  iVar2 = *(int *)(in_EAX + 0x20);
  *(undefined4 *)(iVar2 + 0x38) = local_c;
  *(float *)(iVar2 + 0x3c) = local_8;
  *(undefined4 *)(iVar2 + 0x40) = local_4;
  return;
}

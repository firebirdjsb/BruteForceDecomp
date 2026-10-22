/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9806402280D903806022FDDA50D91DF1562ED838975F6EB87BDA7684CDDE3FF
 * Entry: 0x00208bb0, Ghidra index: 7318, label: FUN_00208bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_00469b58;
undefined4 FUN_00208bb0(int param_1)

{
  uint uVar1;
  undefined1 *in_EAX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 extraout_ST0;
  
  piVar2 = (int *)FUN_001fb020();
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 < 0x1afc67a7) {
    if (uVar1 == 0x1afc67a6) {
      if (*(float *)(param_1 + 0x5c) < 0.0) {
        return 1;
      }
      piVar2 = *(int **)(*(int *)(param_1 + 0x10) + 0xbec);
      iVar4 = 1;
      do {
        iVar3 = (**(code **)(*piVar2 + 8))(iVar4);
        if ((iVar3 != 0) && (iVar3 = FUN_0008b790(), iVar3 != 0)) {
          *(undefined4 *)(*(int *)(iVar3 + 0x50) + 0x20) = *(undefined4 *)(param_1 + 0x5c);
          FUN_0006c840(iVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 9);
      return 1;
    }
    if (uVar1 != 0x5d587e5) {
      if (uVar1 == 0x18cf6332) {
        iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x234))();
        iVar4 = *(int *)(param_1 + 0x54);
        if (iVar4 == 0xacbe3a1) {
          iVar4 = (**(code **)(*DAT_00469b54 + 0x48))();
          *in_EAX = *(int *)(iVar4 + 0x50) == iVar3;
          return 1;
        }
        if (iVar4 != 0x12343092) {
          if (iVar4 != -0xa7765c5) {
            return 1;
          }
          iVar4 = (**(code **)(*DAT_00469b54 + 0x48))();
          *in_EAX = *(int *)(iVar4 + 0x54) == iVar3;
          return 1;
        }
        iVar4 = (**(code **)(*DAT_00469b54 + 0x48))();
        *in_EAX = *(int *)(iVar4 + 0x58) == iVar3;
        return 1;
      }
LAB_00208d01:
      *in_EAX = 0;
      return 1;
    }
    fVar6 = (float10)FUN_00233b90();
    if ((float10)*(float *)(param_1 + 0x58) < fVar6) goto LAB_00208c95;
    goto LAB_00208da5;
  }
  if (uVar1 != 0xe691bc63) goto LAB_00208d01;
  iVar4 = FUN_001fb020();
  if (iVar4 == 0) {
    return 0;
  }
  fVar6 = (float10)1e+16;
  if (*(int *)(param_1 + 0x50) == 0x8e3e64f) {
    piVar5 = (int *)FUN_001fb020();
    if (piVar5 == (int *)0x0) {
      iVar4 = FUN_001fb070();
      fVar6 = extraout_ST0;
      if (iVar4 == 0) goto LAB_00208d8b;
      (**(code **)(*piVar2 + 0x40))();
      (**(code **)(*(int *)(iVar4 + 8) + 4))();
    }
    else {
      (**(code **)(*piVar5 + 0x40))();
      (**(code **)(*piVar2 + 0x40))();
    }
    fVar6 = (float10)FUN_00039460();
  }
LAB_00208d8b:
  if (fVar6 < (float10)*(float *)(param_1 + 0x4c) * (float10)*(float *)(param_1 + 0x4c)) {
LAB_00208c95:
    *in_EAX = 1;
    return 1;
  }
LAB_00208da5:
  *in_EAX = 0;
  return 1;
}

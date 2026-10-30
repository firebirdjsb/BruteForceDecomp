/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 689ADC38F019199860E57BDBB762EDDB9AB7AD5933C084BC5DF6DBEA49138866
 * Entry: 0x0008a2b0, Ghidra index: 1656, label: FUN_0008a2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_0008acb0(void);
extern undefined4 FUN_0008a720(undefined4 *param_1,int *param_2);
extern void FUN_0008bb40(float param_1);

extern uint32_t DAT_00469b58;
extern uint32_t _DAT_00414d9c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008a2b0(float param_1)

{
  uint uVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((*(int *)(in_EAX + 0x10) == 0) &&
      (((*(int *)(in_EAX + 0x1c) == 0 || (iVar3 = FUN_000120f0(), iVar3 == 0)) ||
       (uVar4 = FUN_000120f0(), (uVar4 & -(uint)((*(byte *)(uVar4 + 0x26) & 0x40) != 0)) == 0)))) ||
     ((*(int *)(in_EAX + 0x10) != 0 && ((*(byte *)(*(int *)(in_EAX + 0x10) + 0x70) & 1) != 0)))) {
    bVar2 = true;
    *(float *)(in_EAX + 0x34) = param_1 + *(float *)(in_EAX + 0x34);
  }
  else {
    bVar2 = false;
    *(undefined4 *)(in_EAX + 0x34) = 0;
  }
  piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar5 == 0x17506391) {
    iVar3 = *(int *)(*(int *)(in_EAX + 0x38) + 0xc4c);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x14) != 0x159bec67)) {
      iVar3 = 0;
    }
    iVar7 = *(int *)(*(int *)(in_EAX + 0x38) + 0xbf0);
    if ((((*(char *)(iVar7 + 0x84) == '\0') && (*(int *)(iVar7 + 0x8c) != 0)) ||
        ((iVar3 != 0 && ((*(byte *)(iVar3 + 0x24) & 0x10) == 0)))) && (*(int *)(in_EAX + 0x60) != 0)
       ) {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar5 + 0x14))(*(undefined4 *)(in_EAX + 0x60));
    }
  }
  else {
    piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar5 == 0x120785ef) {
      if ((bVar2) && (_DAT_00414d9c < *(float *)(in_EAX + 0x34))) {
        uVar6 = FUN_0008acb0();
        FUN_0008a720(in_EAX,uVar6);
      }
    }
    else {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
      if (*piVar5 == -0x104e72d8) {
        FUN_0008bb40(param_1);
      }
    }
  }
  iVar3 = *(int *)(in_EAX + 0x28);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 4) != 0) {
      if (*(int *)(iVar3 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(iVar3 + 8);
      }
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 != 0) {
        iVar7 = 0;
        uVar4 = 1;
        do {
          if (((*(byte *)(iVar3 + 0x70) & 1) != 0) && (*(float *)(iVar3 + 0x1a8) != 0.0)) {
            *(undefined4 *)(iVar3 + 0x1a8) = 0x41a00000;
          }
          uVar1 = *(uint *)(*(int *)(in_EAX + 0x28) + 4);
          if (uVar1 <= uVar4) {
            return;
          }
          iVar7 = iVar7 + 4;
          if (uVar4 < uVar1) {
            iVar3 = *(int *)(iVar7 + *(int *)(*(int *)(in_EAX + 0x28) + 8));
          }
          else {
            iVar3 = 0;
          }
          iVar3 = *(int *)(iVar3 + 4);
          uVar4 = uVar4 + 1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

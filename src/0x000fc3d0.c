/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0923AD8B211AE860E9047630FB91B4D34F7E492762072D8023D5FC698563DF97
 * Entry: 0x000fc3d0, Ghidra index: 3152, label: FUN_000fc3d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t PTR_FUN_0039e140;
int FUN_000fc3d0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  byte bVar5;
  int *piVar6;
  int *piVar7;
  int local_c;
  int local_8;
  
  piVar1 = *(int **)(in_ECX + 8);
  local_8 = 0;
  for (piVar6 = *(int **)(in_ECX + 4); piVar6 != piVar1; piVar6 = piVar6 + 0x14) {
    local_c = 0;
    if (piVar6[5] != 0) {
      local_c = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x88))(piVar6[5]);
    }
    piVar3 = (int *)FUN_002ea01d(0x130);
    piVar7 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      FUN_000ee640();
      piVar3[0x1a] = 0;
      piVar3[0x1b] = 0;
      piVar3[0x1c] = 0;
      piVar7 = piVar3 + 0x1e;
      piVar3[0x18] = 0;
      *(undefined1 *)(piVar3 + 0x1d) = 0;
      *piVar3 = (int)&PTR_FUN_0039e140;
      FUN_000ff7b0();
      piVar3[0x20] = (int)piVar3;
      (**(code **)(*piVar7 + 0x30))();
      *(byte *)(piVar3 + 0x28) = *(byte *)(piVar3 + 0x28) | 8;
      *(undefined1 *)(piVar3 + 0x4b) = 0;
      bVar5 = *(byte *)(piVar3 + 0x28) ^ (*(byte *)(piVar3 + 0x28) ^ *(byte *)(piVar3 + 10) & 1) & 1
      ;
      *(byte *)(piVar3 + 0x28) = bVar5;
      if ((((bVar5 & 1) != 0) && (piVar3[0x1f] != 0)) &&
         (piVar2 = *(int **)(piVar3[0x1f] + 0x94), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x28))(piVar7);
      }
      (**(code **)(*piVar7 + 0x20))();
      FUN_000ff970(piVar7);
      piVar7 = piVar3;
    }
    piVar7[9] = *piVar6;
    (**(code **)(*piVar7 + 0x2c))();
    if (piVar6[0xb] == 0) {
      iVar4 = FUN_001098f0();
      if (iVar4 == 0) {
        iVar4 = FUN_002ea01d(0xf4);
        if (iVar4 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_00109f80(iVar4);
        }
        piVar3[9] = (int)&LAB_0025b9f2;
        (**(code **)(*piVar3 + 0x2c))();
        piVar3[2] = (int)piVar7;
        (**(code **)(*piVar3 + 0x30))();
        FUN_000ff9e0(piVar3);
      }
      iVar4 = FUN_001098f0();
      if (iVar4 != 0) {
        if (((piVar6[5] != 0) && (FUN_000fbfb0(piVar6[5]), local_c != 0)) &&
           (*(char *)(local_c + 0x3c) != -0x80)) {
          *(byte *)(piVar7 + 10) =
               *(byte *)(piVar7 + 10) ^
               (*(char *)((uint)(local_c + 0x3c) & (*(char *)(local_c + 0x3c) == -0x80) - 1) << 4 ^
               *(byte *)(piVar7 + 10)) & 0x10;
        }
        *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 8;
        FUN_001e97c0();
        iVar4 = FUN_001098f0();
        if (iVar4 != 0) {
          FUN_0010a7d0();
        }
      }
    }
    else {
      iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x7c))(piVar6[0xb]);
      if (iVar4 != 0) {
        FUN_000fd9a0(piVar7 + 0x1e,iVar4 + 0x20);
      }
    }
    iVar4 = piVar6[2];
    piVar7[3] = piVar6[1];
    piVar7[4] = iVar4;
    (**(code **)(*piVar7 + 0x1c))();
    piVar7[5] = piVar6[3];
    (**(code **)(*piVar7 + 0x1c))();
    piVar7[6] = piVar6[4];
    (**(code **)(*piVar7 + 0x1c))();
    piVar7[0x18] = (int)(piVar6 + 0xc);
    if (local_c != 0) {
      if (*(undefined4 **)(local_c + 8) != (undefined4 *)0x0) {
        *(undefined4 *)((int)piVar7 + 0x2d) = **(undefined4 **)(local_c + 8);
        (**(code **)(*piVar7 + 0x34))();
      }
      if (*(int *)(local_c + 0xc) != 0) {
        FUN_000fbdd0();
      }
      if (*(undefined4 **)(local_c + 0x10) != (undefined4 *)0x0) {
        *(undefined4 *)((int)piVar7 + 0x31) = **(undefined4 **)(local_c + 0x10);
        (**(code **)(*piVar7 + 0x34))();
      }
    }
    iVar4 = FUN_000ff9e0(piVar7);
    if (iVar4 != -1) {
      FUN_000fbd40();
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

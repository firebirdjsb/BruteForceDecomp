/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BB367581AB6FFE50EA8B605EEF3070E41CCAA81FAD93EF63C60B01ED10BEB21
 * Entry: 0x000d8d80, Ghidra index: 2677, label: FUN_000d8d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00177b30(void);
extern int FUN_000a7770(uint *param_1);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000d43e0(float param_1,float param_2,float param_3);

void FUN_000d8d80(int param_1,char *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_d8;
  float fStack_d4;
  uint local_d0;
  int local_cc;
  int local_c8 [48];
  undefined4 uStack_8;
  
  iVar5 = *(int *)(param_1 + 0xbd4);
  if (iVar5 != 0) {
    FUN_00177b30();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar5);
  }
  piVar2 = local_c8;
  iVar5 = 8;
  do {
    *piVar2 = 0;
    piVar2 = piVar2 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar2 = local_c8;
  for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  iVar5 = 0;
  if (*param_2 != '\0') {
    if (*(int *)(param_2 + 0x30) == 0) {
      local_cc = 0;
    }
    else {
      local_cc = (*(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x30)) / 0x18;
    }
    local_d0 = 0;
    iVar7 = 0;
    while ((iVar5 = local_cc, *(int *)(param_2 + 0x30) != 0 &&
           (local_d0 < (uint)((*(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x30)) / 0x18)))) {
      piVar3 = (int *)FUN_000a7770(*(int *)(param_2 + 0x30) + iVar7);
      piVar2 = *(int **)((int)local_c8 + iVar7);
      if (piVar2 != piVar3) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)((int)local_c8 + iVar7) = 0;
        }
        *(int **)((int)local_c8 + iVar7) = piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
      }
      *(undefined4 *)((int)local_c8 + iVar7 + 4) =
           *(undefined4 *)(iVar7 + 4 + *(int *)(param_2 + 0x30));
      *(undefined4 *)((int)local_c8 + iVar7 + 8) =
           *(undefined4 *)(iVar7 + 8 + *(int *)(param_2 + 0x30));
      *(undefined4 *)((int)local_c8 + iVar7 + 0xc) =
           *(undefined4 *)(iVar7 + 0xc + *(int *)(param_2 + 0x30));
      *(undefined4 *)((int)local_c8 + iVar7 + 0x14) =
           *(undefined4 *)(iVar7 + 0x10 + *(int *)(param_2 + 0x30));
      local_d0 = local_d0 + 1;
      *(undefined4 *)((int)local_c8 + iVar7 + 0x10) =
           *(undefined4 *)(iVar7 + 0x14 + *(int *)(param_2 + 0x30));
      iVar7 = iVar7 + 0x18;
    }
  }
  local_d8 = 0;
  if (*(undefined4 **)(param_2 + 0x3c) != (undefined4 *)0x0) {
    local_d8 = **(undefined4 **)(param_2 + 0x3c);
  }
  iVar7 = *(int *)(param_1 + 0xbd4);
  if (iVar7 == 0) {
    iVar7 = FUN_002ea01d(0xe8c);
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00177700(iVar7,*(undefined4 *)(param_2 + 0x14),iVar5,local_c8,
                           *(undefined4 *)(param_2 + 0x14),*param_2,&local_d8);
    }
    *(undefined4 *)(param_1 + 0xbd4) = uVar4;
    iVar5 = *(int *)(param_2 + 0x3c);
    if (iVar5 != 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0xbd4) + 0xe6c);
      if (iVar7 != -1) {
        fStack_d4 = *(float *)(iVar5 + 0xc);
        local_d0 = *(uint *)(iVar5 + 8);
        local_cc = *(int *)(iVar5 + 4);
        *(int *)(iVar7 + 0x38) = local_cc;
        *(uint *)(iVar7 + 0x3c) = local_d0;
        *(float *)(iVar7 + 0x40) = fStack_d4;
      }
      iVar5 = *(int *)(param_2 + 0x3c);
      uVar4 = *(undefined4 *)(iVar5 + 0x18);
      uVar1 = *(undefined4 *)(iVar5 + 0x14);
      iVar7 = *(int *)(param_1 + 0xbd4);
      *(undefined4 *)(iVar7 + 0xe70) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar7 + 0xe74) = uVar1;
      *(undefined4 *)(iVar7 + 0xe78) = uVar4;
      iVar5 = *(int *)(param_2 + 0x3c);
      FUN_000d43e0(*(undefined4 *)(iVar5 + 0x1c),*(undefined4 *)(iVar5 + 0x20),
                   *(undefined4 *)(iVar5 + 0x24));
    }
    fStack_d4 = *(float *)(param_2 + 0xc) * 255.0;
    *(uint *)(*(int *)(param_1 + 0xbd4) + 0xe68) =
         (((int)(*(float *)(param_2 + 4) * 255.0) | 0xffffff00U) << 8 |
         (int)(*(float *)(param_2 + 8) * 255.0) & 0xffU) << 8 | (int)fStack_d4 & 0xffU;
    puVar6 = &uStack_8;
    iVar5 = 8;
    do {
      piVar2 = (int *)puVar6[-6];
      puVar6 = puVar6 + -6;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *puVar6 = 0;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  FUN_00177b30();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar7);
}

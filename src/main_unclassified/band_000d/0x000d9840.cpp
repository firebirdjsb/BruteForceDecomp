/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 602FA4D68308B0AD9F15BA96FA495BA92C9A198513FAC9D37DD4B3725E972E16
 * Entry: 0x000d9840, Ghidra index: 2681, label: FUN_000d9840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000e0c80(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern int FUN_000e1910(void);
extern void FUN_000389d0(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern uint FUN_000db3e0(int *param_1);
extern void FUN_000e1150(int param_1,undefined4 *param_2,int *param_3,int *param_4);

extern uint32_t DAT_00469aba;
void FUN_000d9840(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  int local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined1 local_14 [4];
  undefined4 *local_10;
  undefined4 local_c;
  
  puVar4 = (undefined4 *)FUN_000e0c80(local_14);
  local_c = 0;
  iVar5 = 0;
  if (*(int **)(unaff_EBX + 0x40) != (int *)0x0) {
    iVar5 = **(int **)(unaff_EBX + 0x40);
  }
  local_20 = *(int *)(unaff_EBX + 0x40);
  *(int *)(unaff_EBX + 0x54) = iVar5;
  local_10 = puVar4;
  if (iVar5 != local_20) {
    do {
      piVar1 = *(int **)(unaff_EBX + 0x54);
      piVar2 = (int *)piVar1[2];
      if (piVar2 == (int *)0x0) {
        if (piVar1 != *(int **)(unaff_EBX + 0x40)) {
          *(int *)piVar1[1] = *piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar1);
        }
        *(int *)(unaff_EBX + 0x54) = *piVar1;
      }
      else {
        DAT_00469aba = '\0';
        if ((piVar2[4] != *(int *)(unaff_EBX + 0xb60)) && ((*(byte *)((int)piVar2 + 0x26) & 8) != 0)
           ) {
          cVar3 = (**(code **)(*piVar2 + 0x6c))(param_1);
          if (cVar3 == '\0') {
            iStack_18 = 0;
            FUN_0008f6a0(piVar2);
            iVar5 = FUN_000e1910(local_14,local_10,puVar4[1],auStack_1c);
            FUN_000389d0();
            puVar4[1] = iVar5;
            **(int **)(iVar5 + 4) = iVar5;
            puVar4 = local_10;
            if (iStack_18 != 0) {
              FUN_0008f6e0();
              puVar4 = local_10;
            }
          }
          if (DAT_00469aba != '\0') goto LAB_000d994c;
        }
        *(undefined4 *)(unaff_EBX + 0x54) = **(undefined4 **)(unaff_EBX + 0x54);
      }
LAB_000d994c:
    } while (*(int *)(unaff_EBX + 0x54) != local_20);
  }
  if (puVar4 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)*puVar4;
  }
  for (; puVar7 != puVar4; puVar7 = (undefined4 *)*puVar7) {
    if (puVar7[3] != 0) {
      FUN_000db3e0(puVar7[3]);
    }
  }
  if (puVar4 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar4;
  }
  FUN_000e1150(local_14,&local_20,uVar6,puVar4);
  if (local_10 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *local_10;
  }
  FUN_000e1150(local_14,&local_20,uVar6,local_10);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_10);
}

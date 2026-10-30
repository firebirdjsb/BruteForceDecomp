/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DAC6C4297B8BC963D67DC432BC09F2266DC53D216EC2BC99BB555F4F32D1964
 * Entry: 0x0025f3b0, Ghidra index: 8603, label: FUN_0025f3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025f3b0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int *piStack_20;
  int *piStack_1c;
  uint *puStack_14;
  undefined4 *puStack_10;
  undefined1 local_c [4];
  int *local_8;
  int local_4;
  
  /* 0x0025F3B3: MOV AL,BYTE PTR [ESP+0x24] reads the low byte of the
   * original first 32-bit stack argument (the guest param_1 word).
   * 0x0025F3C0 stores that byte to the local constructor argument. */
  local_c[0] = (uint8_t)(uint32_t)(uintptr_t)param_1;
  local_8 = (int *)FUN_0025ae60(local_c);
  *(undefined1 *)((int)local_8 + 0x15) = 1;
  local_8[1] = (int)local_8;
  *local_8 = (int)local_8;
  local_8[2] = (int)local_8;
  local_4 = 0;
  puVar7 = *(undefined4 **)(param_2[3] + 8);
  puVar10 = *(undefined4 **)(param_2[3] + 4);
  piVar11 = param_2;
  if (puVar10 != puVar7) {
    do {
      piVar8 = param_1;
      uVar1 = (**(code **)(*param_1 + 0x40))(puVar10 + 1);
      puVar2 = (undefined4 *)(**(code **)(*piVar8 + 0x68))(piVar8,uVar1);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[3] = puVar10;
        if (puVar2[1] == 0) {
          puVar2[1] = piVar11;
        }
        puStack_14 = (uint *)*puVar10;
        puStack_10 = puVar2;
        FUN_00135410(&puStack_14);
        piVar8 = param_1;
        piVar11 = param_2;
      }
      puVar10 = puVar10 + 3;
    } while (puVar10 != puVar7);
    if (local_4 != 0) {
      puStack_14 = *(uint **)(piVar11[4] + 8);
      puVar9 = *(uint **)(piVar11[4] + 4);
      piStack_1c = local_8;
      piVar11 = local_8;
      if (puVar9 != puStack_14) {
        do {
          piVar3 = (int *)piVar11[1];
          param_1 = piVar11;
          if (*(char *)((int)piVar3 + 0x15) == '\0') {
            piVar4 = piVar3;
            do {
              if ((uint)piVar4[3] < puVar9[1]) {
                piVar6 = (int *)piVar4[2];
              }
              else {
                piVar6 = (int *)*piVar4;
                param_1 = piVar4;
              }
              piVar4 = piVar6;
            } while (*(char *)((int)piVar6 + 0x15) == '\0');
          }
          if ((param_1 == piVar11) || (puVar9[1] < (uint)param_1[3])) {
            param_2 = piVar11;
            puVar7 = &param_2;
          }
          else {
            puVar7 = &param_1;
          }
          param_1 = piVar11;
          if (*(char *)((int)piVar3 + 0x15) == '\0') {
            do {
              if ((uint)piVar3[3] < *puVar9) {
                piVar4 = (int *)piVar3[2];
              }
              else {
                piVar4 = (int *)*piVar3;
                param_1 = piVar3;
              }
              piVar3 = piVar4;
            } while (*(char *)((int)piVar4 + 0x15) == '\0');
          }
          if ((param_1 == piVar11) || (*puVar9 < (uint)param_1[3])) {
            piStack_20 = piVar11;
            ppiVar5 = &piStack_20;
          }
          else {
            ppiVar5 = &param_1;
          }
          if (((int *)*puVar7 != piStack_1c) && (*ppiVar5 != piStack_1c)) {
            FUN_00236420(puVar9 + 2,((int *)*puVar7)[4]);
            piVar11 = local_8;
          }
          puVar9 = puVar9 + 0x14;
        } while (puVar9 != puStack_14);
      }
      iVar12 = *(int *)(*piVar11 + 0x10);
      if (*(int *)(iVar12 + 0x10) != 0) {
        iVar12 = *(int *)(iVar12 + 8);
      }
      (**(code **)(*piVar8 + 0x70))(piVar8,iVar12);
      FUN_0025f770(&local_4,*puStack_10,puStack_10);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puStack_10);
    }
  }
  FUN_0025f770(&param_1,*local_8,local_8);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_8);
}

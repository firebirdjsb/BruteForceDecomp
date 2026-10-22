/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02955E4F1C39986056697E1EF0087BF1EBEBA25E63EFE409AC8BD35DD43174FF
 * Entry: 0x0013eca0, Ghidra index: 4040, label: FUN_0013eca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_0013eca0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  float *pfVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  int *local_50;
  int *piStack_48;
  int *local_44;
  int *local_40;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint local_34;
  int aiStack_30 [9];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int *piStack_4;
  
  local_40 = *(int **)(param_1 + 0x18);
  iVar1 = local_40[2];
  puVar13 = (undefined4 *)FUN_00061500(local_3c);
  local_34 = 0;
  local_50 = (int *)0x0;
  if (*(undefined4 **)(iVar1 + 0xf8) != (undefined4 *)0x0) {
    local_50 = (int *)**(undefined4 **)(iVar1 + 0xf8);
  }
  local_44 = *(int **)(iVar1 + 0xf8);
  local_38 = puVar13;
  if (local_50 != local_44) {
    do {
      puVar13 = local_38;
      piVar2 = (int *)local_50[2];
      if (((piVar2 != (int *)0x0) && (iVar14 = (**(code **)(*piVar2 + 0x20))(), iVar14 == 0xe)) &&
         (iVar14 = (**(code **)(*piVar2 + 0x3c))(), iVar14 == 1)) {
        bVar12 = true;
        piVar15 = (int *)0x0;
        if (*(undefined4 **)(iVar1 + 0x68) != (undefined4 *)0x0) {
          piVar15 = (int *)**(undefined4 **)(iVar1 + 0x68);
        }
        if (piVar15 != *(int **)(iVar1 + 0x68)) {
          do {
            if (!bVar12) goto LAB_0013ee03;
            piVar3 = (int *)piVar15[3];
            if (piVar3 != (int *)0x0) {
              pfVar16 = (float *)(**(code **)(piVar2[2] + 4))();
              iVar14 = (**(code **)(*piVar3 + 0x40))();
              fVar4 = *(float *)(iVar14 + 0x24) - *pfVar16;
              fVar5 = *(float *)(iVar14 + 0x2c) - pfVar16[2];
              if ((fVar4 * fVar4 + fVar5 * fVar5 < 2.25) &&
                 (ABS(pfVar16[1] - *(float *)(iVar14 + 0x28)) < 3.0)) {
                bVar12 = false;
              }
            }
            piVar15 = (int *)*piVar15;
          } while (piVar15 != (int *)*(int *)(iVar1 + 0x68));
          puVar13 = local_38;
          if (!bVar12) goto LAB_0013ee03;
        }
        piStack_48 = piVar2;
        iVar14 = FUN_000ff730(local_3c,puVar13,puVar13[1],&piStack_48);
        FUN_000b2a50();
        puVar13[1] = iVar14;
        **(int **)(iVar14 + 4) = iVar14;
      }
LAB_0013ee03:
      puVar13 = local_38;
      local_50 = (int *)*local_50;
    } while (local_50 != local_44);
    if (local_34 != 0) {
      DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
      uVar19 = DAT_0046cfd8 % local_34;
      if (local_38 == (undefined4 *)0x0) {
        puVar17 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)*local_38;
      }
      for (; uVar19 != 0; uVar19 = uVar19 - 1) {
        puVar17 = (undefined4 *)*puVar17;
      }
      if (puVar17[2] != 0) {
        puVar17 = (undefined4 *)(**(code **)(*(int *)(puVar17[2] + 8) + 4))();
        piStack_48 = (int *)puVar17[2];
        uStack_8 = puVar17[1];
        uStack_c = *puVar17;
        local_44 = aiStack_30;
        piStack_4 = piStack_48;
        local_40 = (int *)(**(code **)(local_40[0x6d] + 0x28))();
        piVar2 = local_44;
        iVar14 = local_40[1];
        iVar6 = local_40[2];
        iVar7 = local_40[3];
        iVar1 = local_40[8];
        iVar8 = local_40[4];
        iVar9 = local_40[5];
        iVar10 = local_40[6];
        iVar11 = local_40[7];
        *local_44 = *local_40;
        piVar2[1] = iVar14;
        piVar2[2] = iVar6;
        piVar2[3] = iVar7;
        piVar2[8] = iVar1;
        piVar2[4] = iVar8;
        piVar2[5] = iVar9;
        piVar2[6] = iVar10;
        piVar2[7] = iVar11;
        FUN_0003d730(param_2,aiStack_30);
      }
    }
  }
  if (puVar13 == (undefined4 *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *puVar13;
  }
  FUN_001298b0(&local_40,uVar18,puVar13);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_38);
}

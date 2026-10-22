/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5099ACE35FF042A693B953ADFA9012F1D6C892C7E73DA79B0C0D2DD6E1716E9
 * Entry: 0x002bfdd0, Ghidra index: 10005, label: FUN_002bfdd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
/* WARNING: Removing unreachable block (ram,0x002bffe6) */
/* WARNING: Removing unreachable block (ram,0x002bfff0) */
/* WARNING: Removing unreachable block (ram,0x002c0004) */
/* WARNING: Removing unreachable block (ram,0x002c001b) */
/* WARNING: Removing unreachable block (ram,0x002c001e) */
/* WARNING: Removing unreachable block (ram,0x002c0022) */
/* WARNING: Removing unreachable block (ram,0x002c0032) */
/* WARNING: Removing unreachable block (ram,0x002c003a) */
/* WARNING: Removing unreachable block (ram,0x002c004c) */

void FUN_002bfdd0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *unaff_EDI;
  float10 fVar11;
  int iStack_c34;
  int iStack_c2c;
  int iStack_c24;
  undefined2 local_a10;
  ushort local_a0e;
  undefined1 *local_a0c;
  short local_a08;
  undefined1 local_a04 [516];
  undefined1 auStack_800 [2048];
  
  iVar4 = *(int *)(param_1 + 0x84);
  local_a0c = local_a04;
  local_a10 = 0x80;
  local_a0e = 0;
  local_a08 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x90);
    FUN_002c91e0(*(undefined4 *)(unaff_EDI[1] + 0x14));
    *(int *)(unaff_EDI[1] + 0x84) = *(int *)(unaff_EDI[1] + 0x84) + 1;
    uVar1 = *(undefined4 *)(iVar5 + 0x130);
    uVar2 = *(undefined4 *)(iVar5 + 0x134);
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar5 + 300);
    *(undefined4 *)(iVar4 + 0x14) = uVar1;
    *(undefined4 *)(iVar4 + 0x18) = uVar2;
    if (*unaff_EDI == 0) {
      fVar11 = (float10)(**(code **)(**(int **)(unaff_EDI[1] + 0x1c) + 4))(param_1);
      puVar6 = *(undefined4 **)(unaff_EDI[1] + 0x2c);
      fVar3 = (float)(fVar11 + (float10)*(float *)(iVar5 + 4));
      if ((puVar6 != (undefined4 *)0x0) && ((*(byte *)(param_1 + 0x70) & 7) != 0)) {
        *unaff_EDI = 1;
        (**(code **)*puVar6)(param_1,iVar4 + 0x10,fVar3);
        *unaff_EDI = 0;
      }
      fVar11 = (float10)FUN_002c8fd0(*(undefined4 *)(unaff_EDI[1] + 0x14),iVar4,fVar3,fVar3,
                                     &local_a10);
      FUN_002c8350(iVar4,(float)(fVar11 - (float10)*(float *)(iVar5 + 4)));
      puVar6 = *(undefined4 **)(unaff_EDI[1] + 0x18);
      uVar8 = 0x400;
      uVar9 = ((uint)*(ushort *)(iVar4 + 0x2a) + (uint)local_a0e) * 4 + 4;
      if (uVar9 < 0x400) {
        do {
          uVar8 = (int)uVar8 >> 1;
        } while (uVar9 < uVar8);
      }
      FUN_002c12e0(auStack_800,param_1);
      uVar9 = (uint)local_a0e;
      while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
        iVar5 = *(int *)(*(int *)(local_a0c + uVar9 * 4) + 0x24);
        if (((((*(byte *)(param_1 + 0x70) & 7) != 0) || ((*(byte *)(iVar5 + 0x70) & 7) != 0)) &&
            (*(int *)(param_1 + 0x94) != *(int *)(iVar5 + 0x94))) &&
           ((iVar10 = (**(code **)*puVar6)(param_1,iVar5), iVar10 != 0 &&
            (iVar10 = FUN_002c13c0(iVar5,param_1), iVar10 == 0)))) {
          FUN_002bbd20(iVar5);
        }
      }
      uVar9 = (uint)*(ushort *)(iVar4 + 0x2a);
      while (uVar9 = uVar9 - 1, iStack_c24 <= (int)uVar9) {
        piVar7 = *(int **)(*(int *)(iVar4 + 0x2c) + uVar9 * 4);
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0x10))(1);
        }
      }
      if ((iStack_c2c != 0) && (iStack_c34 != 0)) {
        (*(code *)PTR_FUN_003bc654)(iStack_c34);
        return;
      }
    }
    else {
      FUN_002c8fd0(*(undefined4 *)(unaff_EDI[1] + 0x14),iVar4,*(undefined4 *)(iVar5 + 4),
                   *(undefined4 *)(iVar5 + 4),0);
      FUN_002c8350(iVar4,0x2edbe6ff);
    }
    if ((local_a08 != 0) && (local_a0c != (undefined1 *)0x0)) {
      (*(code *)PTR_FUN_003bc654)(local_a0c);
      return;
    }
  }
  return;
}

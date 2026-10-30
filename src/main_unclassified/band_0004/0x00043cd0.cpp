/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBBBED39C6FA0FD284744D712D28AA4C16B2AE8020DD2922838D3983B7BD0504
 * Entry: 0x00043cd0, Ghidra index: 526, label: FUN_00043cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_00055aa0(void);
extern int FUN_00049c60(void);
extern undefined4 FUN_00112800(void);
extern uint FUN_00034b20(int *param_1,float *param_2,float param_3);
extern char FUN_00057360(undefined4 param_1,int param_2,int *param_3);
extern int FUN_00140a60(int param_1,int *param_2);

extern uint32_t DAT_004a5908;
void FUN_00043cd0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int unaff_EBX;
  undefined4 *puVar12;
  
  if (((*(byte *)(unaff_EBX + 0x7f0) & 1) != 0) &&
     (*(float *)(unaff_EBX + 0x7ec) < 0.0 == (*(float *)(unaff_EBX + 0x7ec) == 0.0))) {
    return;
  }
  *(undefined4 *)(unaff_EBX + 0x7f4) = 0x40800000;
  *(undefined4 *)(unaff_EBX + 0x7ec) = 0x40800000;
  *(byte *)(unaff_EBX + 0x7f0) = *(byte *)(unaff_EBX + 0x7f0) & 0xf9 | 1;
  iVar8 = FUN_000120f0();
  iVar9 = FUN_00055aa0();
  if ((*(uint *)(iVar9 + 0x88) & 0x6000) != 0) {
    return;
  }
  if ((*(byte *)(&DAT_004a5908 + *(int *)(iVar9 + 0x5c)) & 0x20) != 0) {
    return;
  }
  iVar9 = FUN_00049c60();
  if (iVar9 == 0) {
    return;
  }
  piVar1 = *(int **)(iVar9 + 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
  uVar11 = *(uint *)(iVar9 + 0x80) >> 4;
  if ((uVar11 & 1) == 0) {
    return;
  }
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (*(int *)(piVar1[3] + 4) != 3) {
    return;
  }
  if ((*(uint *)(unaff_EBX + 0x3c4) & 0x100) == 0) {
    cVar7 = FUN_00112800();
    if (cVar7 == '\0') {
      return;
    }
    if ((*(uint *)(unaff_EBX + 0x3c4) & 0x100) == 0) {
      iVar9 = *(int *)(iVar8 + 8) + 0xb8;
      goto LAB_00043dd5;
    }
  }
  iVar9 = *(int *)(iVar8 + 8) + 0xac;
LAB_00043dd5:
  if (iVar9 != 0) {
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)*puVar2;
    }
    if (puVar12 != puVar2) {
      do {
        piVar3 = (int *)puVar12[3];
        if (piVar3 != (int *)0x0) {
          iVar9 = (**(code **)(*piVar3 + 0x40))();
          iVar10 = (**(code **)(*piVar1 + 0x40))();
          fVar4 = *(float *)(iVar10 + 0x2c) - *(float *)(iVar9 + 0x2c);
          fVar5 = *(float *)(iVar10 + 0x28) - *(float *)(iVar9 + 0x28);
          fVar6 = *(float *)(iVar10 + 0x24) - *(float *)(iVar9 + 0x24);
          if (fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4 < 9.0) {
            iVar9 = (**(code **)(*piVar3 + 0x40))();
            cVar7 = FUN_00034b20(iVar8,iVar9 + 0x24,0x41200000);
            if (cVar7 != '\0') {
              return;
            }
            cVar7 = FUN_00057360(*(undefined4 *)(*(int *)(iVar8 + 8) + 0x1f8),iVar8,piVar3);
            if (cVar7 == '\0') {
              return;
            }
            iVar9 = FUN_00024540(unaff_EBX,0xe,2,piVar3,0,0x3f99999a,0);
            if (iVar9 != 1) {
              return;
            }
            FUN_00140a60(*(undefined4 *)(*(int *)(iVar8 + 8) + 0xbe8),iVar8,0xf79cae7,0);
            iVar8 = FUN_00055aa0();
            *(uint *)(iVar8 + 0x88) = *(uint *)(iVar8 + 0x88) | 2;
            return;
          }
        }
        puVar12 = (undefined4 *)*puVar12;
        if (puVar12 == puVar2) {
          return;
        }
      } while( true );
    }
  }
  return;
}

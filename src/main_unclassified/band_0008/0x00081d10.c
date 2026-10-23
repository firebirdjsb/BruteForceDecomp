/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7152616DD5ECA5A5D97711B53B76D0B5D96C90F9DB7CE985B6AB317E077D3CD
 * Entry: 0x00081d10, Ghidra index: 1527, label: FUN_00081d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_00401fa0;
extern uint32_t DAT_00401fb4;
extern uint32_t DAT_00401fcc;
extern char s_item__d_0040dbe0[];
undefined1 FUN_00081d10(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_EDX;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  int local_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50 [4];
  uint uStack_40;
  int local_38 [4];
  uint uStack_28;
  char cStack_20;
  char acStack_1f [31];
  
  /* Original i386: [ESP+0x7c] is the first incoming DWORD after the
   * 0x68-byte frame and four saved registers. Instructions 0x00081D5B
   * and 0x00081FBF write only its low byte; 0x00081E78 writes a complete
   * pointer DWORD to the same slot; 0x00082020 returns its low byte.
   * Preserve these partial accesses. Guest pointer width/other ABI inputs
   * are still ABI_UNVERIFIED for a native host. */
  iVar7 = param_1;
  piVar6 = local_50;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  piVar6 = &DAT_00401fb4;
  piVar12 = local_50;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar12 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar12 = piVar12 + 1;
  }
  piVar6 = local_38;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  iVar8 = *in_EDX;
  piVar6 = &DAT_00401fcc;
  piVar12 = local_38;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar12 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar12 = piVar12 + 1;
  }
  iVar9 = 0;
  uVar4 = 0;
  ((uint8_t *)&param_1)[0] = 0;
  local_68 = 0;
  iVar8 = (**(code **)(iVar8 + 0x18))();
  iVar8 = *(int *)(iVar8 + 0xc4c);
  if (((iVar8 == 0) || (*(int *)(iVar8 + 0x14) != 0x159bec67)) || (*(int *)(iVar8 + 0x1c) == 0)) {
    return 0;
  }
  iVar8 = *(int *)(*(int *)(iVar8 + 0x1c) + 0x14);
  if (iVar8 != 0) {
    uVar10 = 0;
    while( true ) {
      iStack_54 = iVar8;
      param_1._0_1_ = uVar4;
      if ((*(int *)(iVar7 + 0x14) == 0) ||
         ((uint)(*(int *)(iVar7 + 0x18) - *(int *)(iVar7 + 0x14) >> 4) <= uVar10))
      goto LAB_00081de3;
      if (*(int *)(*(int *)(iVar7 + 0x14) + iVar9) == DAT_00401fa0) break;
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 0x10;
    }
    iVar9 = FUN_00077da0(4);
    if (iVar9 != 0) {
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar9 + 8);
    }
LAB_00081de3:
    cVar5 = FUN_0014c230(iVar8,&iStack_64,&uStack_60,0);
    if (cVar5 != '\0') {
      if (iStack_64 != 0) goto LAB_00081e0d;
      piVar6 = *(int **)(iVar8 + 0xbc);
      goto LAB_00081e44;
    }
    uVar10 = 0;
    iVar8 = 0;
    while( true ) {
      if (*(int *)(iVar7 + 0x14) == 0) {
        return (undefined1)param_1;
      }
      if ((uint)(*(int *)(iVar7 + 0x18) - *(int *)(iVar7 + 0x14) >> 4) <= uVar10) {
        return (undefined1)param_1;
      }
      if (*(int *)(*(int *)(iVar7 + 0x14) + iVar8) == DAT_00401fa0) break;
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 0x10;
    }
    iVar7 = FUN_00077da0(4);
    if (iVar7 != 0) {
      FUN_00077eb0(iVar7,(float)local_68);
    }
  }
  return (undefined1)param_1;
LAB_00081e0d:
  if (iStack_64 < 10) {
    iVar2 = *(int *)(iStack_64 * 0x10 + 0xc + iVar8);
    iVar9 = iStack_64 * 0x10 + iVar8;
    if ((iVar2 != 0) && (uStack_60 < (uint)(*(int *)(iVar9 + 0x10) - iVar2 >> 2))) {
      piVar6 = *(int **)(*(int *)(iVar9 + 0xc) + uStack_60 * 4);
LAB_00081e44:
      if (((piVar6 != (int *)0x0) && (0 < *(short *)((int)piVar6 + 0x1a))) &&
         (iVar9 = (**(code **)(*piVar6 + 0x5c))(), iVar9 != 0)) {
        iStack_58 = (int)*(short *)((int)piVar6 + 0x1a);
        iVar8 = (**(code **)(*piVar6 + 0x5c))();
        piVar6 = (int *)(iVar8 + 8);
        iStack_5c = local_68 + 1;
        FUN_002eaa19(&cStack_20,0x20,s_item__d_0040dbe0,iStack_5c);
        uStack_40 = 0xffffffff;
        pcVar11 = &cStack_20;
        cVar5 = cStack_20;
        while (cVar5 != '\0') {
          uStack_40 = uStack_40 >> 8 ^
                      *(uint *)(&DAT_003bc150 +
                               (((byte)(&DAT_003bc550)[cVar5] ^ uStack_40) & 0xff) * 4);
          pcVar1 = pcVar11 + 1;
          pcVar11 = pcVar11 + 1;
          cVar5 = *pcVar1;
        }
        uStack_40 = ~uStack_40;
        iVar8 = 0;
        for (uVar10 = 0;
            (uStack_28 = uStack_40, *(int *)(iVar7 + 0x14) != 0 &&
            (uVar10 < (uint)(*(int *)(iVar7 + 0x18) - *(int *)(iVar7 + 0x14) >> 4)));
            uVar10 = uVar10 + 1) {
          if (*(int *)(*(int *)(iVar7 + 0x14) + iVar8) == local_50[0]) {
            iVar8 = FUN_00077da0(5);
            goto LAB_00081f23;
          }
          iVar8 = iVar8 + 0x10;
        }
        iVar8 = 0;
LAB_00081f23:
        iVar9 = 0;
        for (uVar10 = 0;
            (*(int *)(iVar7 + 0x14) != 0 &&
            (uVar10 < (uint)(*(int *)(iVar7 + 0x18) - *(int *)(iVar7 + 0x14) >> 4)));
            uVar10 = uVar10 + 1) {
          if (*(int *)(*(int *)(iVar7 + 0x14) + iVar9) == local_38[0]) {
            iVar9 = FUN_00077da0(5);
            goto LAB_00081f5e;
          }
          iVar9 = iVar9 + 0x10;
        }
        iVar9 = 0;
LAB_00081f5e:
        if ((iVar8 != 0) && (iVar9 != 0)) {
          iVar2 = *(int *)(iVar8 + 0xc);
          local_68 = iStack_5c;
          if (iVar2 == 1) {
            fVar3 = (float)*piVar6;
            if (*piVar6 < 0) {
              fVar3 = fVar3 + 4.2949673e+09;
            }
            *(float *)(iVar8 + 4) = fVar3;
          }
          else if (iVar2 == 2) {
            *(int *)(iVar8 + 4) = *piVar6;
          }
          else if (iVar2 == 3) {
            *(bool *)(iVar8 + 4) = *piVar6 != 0;
          }
          FUN_00077eb0(iVar9,(float)iStack_58);
        }
        param_1._0_1_ = 1;
        iVar8 = iStack_54;
      }
    }
  }
  goto LAB_00081de3;
}

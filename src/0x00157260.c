/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80C2A63D64FAD4C47F5885C9845DA25BF670BC67D50C0FF06AF6C64BF4EBB4E7
 * Entry: 0x00157260, Ghidra index: 4484, label: FUN_00157260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00157260(byte param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  int *piVar8;
  int iVar9;
  bool bVar10;
  float fStack_40;
  int *piStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined **local_14;
  undefined8 local_10;
  int local_8;
  undefined4 local_4;
  
  bVar4 = false;
  if (((*(byte *)(in_ECX + 0x1c) & 1) == 0) && (param_1 == 1)) {
    local_8 = 0;
    if ((*(int *)(in_ECX[3] + 4) == 3) &&
       (((iVar5 = (**(code **)(*in_ECX + 0xf4))(), iVar5 != 0 &&
         (iVar5 = *(int *)(iVar5 + 0x45c), iVar5 != 0)) &&
        (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 3)))) {
      local_8 = iVar5;
    }
    local_14 = &PTR_LAB_003a3fb4;
    local_4 = 0xffffffff;
    local_10 = 6;
    FUN_001fe3d0(&local_14);
    bVar10 = ((byte)in_ECX[0x6b] & 3) != 1;
    if ((*(int *)(in_ECX[3] + 0x14c) != 0) || (!bVar10)) {
      *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) | 0x40;
      *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) | 0x80;
      FUN_000dff10(in_ECX[2]);
      if (bVar10) {
        puVar2 = *(undefined4 **)(in_ECX[3] + 0x148);
        fStack_40 = 0.0;
        piVar7 = (int *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          piVar7 = (int *)*puVar2;
        }
        piVar8 = *(int **)(in_ECX[3] + 0x148);
        piStack_24 = piVar8;
        if (piVar7 != piVar8) {
          do {
            if (fStack_40 < (float)piVar7[4]) {
              fStack_40 = (float)piVar7[4];
            }
            iVar5 = FUN_00160da0(0xffffffff,1);
            if (iVar5 != 0) {
              if (*(int *)(iVar5 + 4) == 0x11) {
                fVar1 = *(float *)(in_ECX[2] + 0xc58);
                iVar9 = *(int *)(iVar5 + 0xe4);
                iVar5 = *(int *)(iVar5 + 0xe8);
                if (iVar9 != iVar5) {
                  do {
                    fVar3 = ((1.0 - fVar1) * 0.4 + 0.6) * *(float *)(iVar9 + 8);
                    if ((float)in_ECX[0x40] < fVar3) {
                      in_ECX[0x40] = (int)fVar3;
                      iVar6 = (**(code **)(*in_ECX + 0x40))();
                      fStack_18 = (float)in_ECX[0x3c] + *(float *)(iVar6 + 0x2c);
                      fStack_1c = (float)in_ECX[0x3b] + *(float *)(iVar6 + 0x28);
                      fStack_20 = (float)in_ECX[0x3a] + *(float *)(iVar6 + 0x24);
                      local_14 = (undefined **)(fStack_20 * 0.5);
                      local_10 = CONCAT44(fStack_18 * 0.5,fStack_1c * 0.5);
                      in_ECX[0x3a] = (int)local_14;
                      in_ECX[0x3b] = (int)(fStack_1c * 0.5);
                      in_ECX[0x3c] = (int)(fStack_18 * 0.5);
                    }
                    iVar9 = iVar9 + 0x1c;
                  } while (iVar9 != iVar5);
                }
              }
              if ((int *)in_ECX[0x67] == (int *)0x0) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)in_ECX[0x67];
              }
              iVar9 = FUN_00155150(in_ECX + 0x66,iVar5,*(undefined4 *)(iVar5 + 4),piVar7 + 2);
              FUN_0017a4b0();
              *(int *)(iVar5 + 4) = iVar9;
              **(int **)(iVar9 + 4) = iVar9;
              piVar8 = piStack_24;
            }
            piVar7 = (int *)*piVar7;
          } while (piVar7 != piVar8);
        }
        in_ECX[0x35] = (int)fStack_40;
      }
      else {
        in_ECX[0x35] = 0;
      }
      if (((*(byte *)((int)in_ECX + 0x26) & 0x10) == 0) && (in_ECX[2] != 0)) {
        piVar7 = (int *)FUN_000e0350(in_ECX[2],&piStack_24,in_ECX);
        in_ECX[5] = *piVar7;
        *(byte *)((int)in_ECX + 0x26) = *(byte *)((int)in_ECX + 0x26) | 0x10;
      }
    }
    FUN_001575d0(in_ECX);
    if (*(int *)(in_ECX[3] + 4) == 3) {
      bVar4 = true;
    }
  }
  *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) ^ (*(byte *)(in_ECX + 0x1c) ^ param_1) & 1;
  if ((bVar4) && (*(int *)(in_ECX[2] + 0x1f8) != 0)) {
    FUN_00057140();
    FUN_00056fe0(*(undefined4 *)(in_ECX[2] + 0x1f8),in_ECX,0);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D558CA5F7F33391E0F5EE1F26AE6A4DA6F74666D3414E10084BF9F35766B0E6
 * Entry: 0x00229ae0, Ghidra index: 7675, label: FUN_00229ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra SSE scalar opcode model; only observed low lane is reconstructed.
 * Original ABI, upper lanes and game behavior remain UNVERIFIED. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00229ae0(int *param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  float10 fVar10;
  undefined1 in_XMM0 [16];
  __m128 auVar11;
  char acStack_50 [4];
  float fStack_4c;
  float local_48;
  int *local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  param_1[0xe2] = (int)(param_2 + (float)param_1[0xe2]);
  param_1[0xe3] = (int)(param_2 + (float)param_1[0xe3]);
  iVar5 = param_1[0xe1];
  iVar7 = param_1[3];
  local_20 = (float)iVar7;
  if (((((iVar5 == 0) || ((*(byte *)(iVar5 + 0x70) & 1) != 0)) ||
       (fVar10 = (float10)(*(code *)**(undefined4 **)(iVar5 + 0x68))(),
       fVar10 < (float10)(float)param_1[0xea] != (fVar10 == (float10)(float)param_1[0xea]))) ||
      (5.0 < (float)param_1[0xe2])) && (2.0 < (float)param_1[0xe3])) {
    local_3c = *(float *)(iVar7 + 0x214) - 2.0;
    local_44 = (int *)0x0;
    local_48 = 3.4028235e+38;
    local_3c = local_3c * local_3c;
    iVar5 = (**(code **)(*param_1 + 0x40))();
    FUN_00023b80();
    puVar8 = puStack_10;
    while( true ) {
      puVar1 = *(undefined4 **)(param_1[2] + 0x74);
      puVar2 = *(undefined4 **)(param_1[2] + 0x68);
      if (((puVar8 == puVar2) && (puStack_c == puVar2)) &&
         ((puStack_8 == puVar1 && (puStack_4 == puVar1)))) break;
      if (puVar8 == puStack_c) {
        piVar9 = (int *)puStack_8[3];
      }
      else {
        piVar9 = (int *)puVar8[3];
      }
      if ((piVar9 != (int *)0x0) && (*(int *)(piVar9[3] + 4) == 3)) {
        iVar7 = param_1[0x70];
        iVar6 = (**(code **)(piVar9[0x6d] + 0x9c))();
        if (((iVar6 != -1) &&
            (((iVar7 != -1 && ((&DAT_003ffd80)[iVar6 * 10 + iVar7] != '\0')) &&
             ((*(byte *)(piVar9 + 0x1c) & 1) == 0)))) &&
           (fVar10 = (float10)(**(code **)piVar9[0x1a])(), (float10)(float)param_1[0xea] < fVar10))
        {
          iVar7 = (**(code **)(*piVar9 + 0x40))();
          fStack_40 = *(float *)(iVar7 + 0x2c) - *(float *)(iVar5 + 0x2c);
          fStack_18 = *(float *)(iVar7 + 0x28) - *(float *)(iVar5 + 0x28);
          fStack_1c = *(float *)(iVar7 + 0x24) - *(float *)(iVar5 + 0x24);
          fStack_4c = fStack_1c * fStack_1c + fStack_40 * fStack_40 + fStack_18 * fStack_18;
          fStack_14 = fStack_40;
          if (fStack_4c < local_3c) {
            auVar11 = _mm_rsqrt_ss(_mm_set_ss(fStack_4c));
            fStack_34 = _mm_cvtss_f32(auVar11);
            fStack_1c = fStack_1c * fStack_34;
            fStack_18 = fStack_18 * fStack_34;
            fStack_14 = fStack_40 * fStack_34;
            fStack_2c = 1.0;
            fStack_28 = -1.0;
            fStack_40 = fStack_1c * fStack_1c + fStack_14 * fStack_14;
            fStack_24 = fStack_40;
            if (fStack_40 <= -1.0) {
              fStack_24 = -1.0;
            }
            if (1.0 <= fStack_24) {
              fStack_24 = 1.0;
            }
            in_XMM0 = ZEXT416((uint)fStack_24);
            fStack_38 = fStack_4c;
            fStack_30 = fStack_34;
            fVar10 = (float10)FUN_00306c80();
            if (((((float10)(float)param_1[0xe9] <= fVar10) &&
                 (fVar10 < (float10)(float)param_1[0xe8] !=
                  (fVar10 == (float10)(float)param_1[0xe8]))) &&
                ((*(int *)(param_1[2] + 0x1f8) != 0 &&
                 ((cVar4 = FUN_000572a0(acStack_50,piVar9), cVar4 != '\0' && (acStack_50[0] != '\0')
                  ))))) && (fStack_4c < local_48)) {
              local_48 = fStack_4c;
              local_44 = piVar9;
            }
          }
        }
      }
      if (puVar8 == puStack_c) {
        puStack_8 = (undefined4 *)*puStack_8;
      }
      else {
        puVar8 = (undefined4 *)*puVar8;
      }
    }
    if (local_44 == (int *)0x0) {
      if (param_1[0xe1] != 0) {
        FUN_0008f6a0(0);
      }
      param_1[0xe3] = 0;
    }
    else {
      if ((int *)param_1[0xe1] != local_44) {
        FUN_0008f6a0(local_44);
      }
      param_1[0xe2] = 0;
    }
  }
  if ((int *)param_1[0xe1] == (int *)0x0) {
    param_1[0xe5] = 0;
    param_1[0xe7] = 0;
  }
  else {
    (**(code **)(*(int *)param_1[0xe1] + 0x40))();
    (**(code **)(*param_1 + 0x40))();
    FUN_000a0c60();
    fVar10 = (float10)fpatan((float10)fStack_1c,(float10)fStack_14);
    fStack_24 = 1.0;
    fStack_28 = -1.0;
    param_1[0xe5] = (int)(float)fVar10;
    fVar3 = 1.0 / SQRT(fStack_14 * fStack_14 + fStack_1c * fStack_1c + fStack_18 * fStack_18);
    fStack_18 = fVar3 * fStack_18;
    fStack_2c = fVar3 * fStack_14 * fVar3 * fStack_14 + fStack_1c * fVar3 * fStack_1c * fVar3;
    fStack_30 = fStack_2c;
    if (fStack_2c <= -1.0) {
      fStack_30 = -1.0;
    }
    if (1.0 <= fStack_30) {
      fStack_30 = 1.0;
    }
    fVar10 = (float10)FUN_00306c80();
    param_1[0xe7] = (int)(float)fVar10;
    if (0.0 < fStack_18) {
      param_1[0xe7] = (int)-(float)param_1[0xe7];
    }
    param_1[0xe7] = (int)(*(float *)((int)local_20 + 0x400) + (float)param_1[0xe7]);
    if (((float)param_1[0xe7] < (float)param_1[0xe9]) ||
       ((float)param_1[0xe8] < (float)param_1[0xe7])) {
      fStack_28 = (float)param_1[0xe7];
      local_20 = (float)param_1[0xe8];
      fStack_24 = (float)param_1[0xe9];
      fStack_2c = fStack_28;
      if (fStack_28 <= fStack_24) {
        fStack_2c = fStack_24;
      }
      if (local_20 <= fStack_2c) {
        fStack_2c = local_20;
      }
      param_1[0xe7] = (int)fStack_2c;
      if (param_1[0xe1] != 0) {
        FUN_0008f6a0(0);
        return;
      }
    }
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81F20322253DBCE378FB59D729A7B523C1D6592ADE695DEA434714F266DBA40D
 * Entry: 0x002b7c70, Ghidra index: 9855, label: FUN_002b7c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <stdint.h>
#include <string.h>

/* Original XBE 0x002B7DFE and 0x002B8200 read guest32 words
 * from [param_1+0x44] and [param_1+0x48] for indirect dispatch.
 * Do not numerically cast an IEEE F32 field to a host pointer.
 * TODO/ABI_UNVERIFIED: native guest32 address translation and callee ABI. */
static uint32_t bf_2b7c70_guest_word(const float *field)
{
  uint32_t bits;
  memcpy(&bits,field,sizeof(bits));
  return bits;
}
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
void FUN_002b7c70(float *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_40;
  float local_3c;
  float fStack_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  /* XBE 0x002B81A9 loads [ESP+index*4+0x50] as F32. The
   * original outgoing vector scratch cannot be host pointers. */
  float local_10 [4];
  
  iVar7 = (int)(short)param_2[3];
  iVar9 = 0;
  if (iVar7 == 2) {
    local_34 = 0;
    FUN_002cdc50(&local_40);
    iVar7 = (param_2[5] & 0xffffU) * 0x10 + *param_2;
    pfVar3 = (float *)(iVar7 + (int)param_2);
    fVar15 = local_40 * *pfVar3 +
             fStack_38 * pfVar3[2] + local_3c * *(float *)(iVar7 + 4 + (int)param_2);
    fVar11 = (local_40 * *param_1 + fStack_38 * param_1[2] + local_3c * param_1[1]) - fVar15;
    fVar15 = (local_40 * param_1[8] + fStack_38 * param_1[10] + local_3c * param_1[9]) - fVar15;
    if (fVar11 * fVar15 < 0.0) {
      local_24 = 0;
      fVar15 = fVar11 / (fVar11 - fVar15);
      FUN_002b64b0(fVar15);
      FUN_002cd2b0(&local_30);
      if ((-1 < (int)((uint)local_18 | (uint)local_1c | (uint)local_20)) &&
         ((param_1[0x10] != 1.4013e-45 ||
          (local_40 * param_1[0xc] + fStack_38 * param_1[0xe] + local_3c * param_1[0xd] <= 0.0)))) {
        if (fVar11 < 0.0) {
          local_40 = local_40 * -1.0;
          local_3c = local_3c * -1.0;
          fStack_38 = fStack_38 * -1.0;
        }
        FUN_002b65a0(&local_40);
        /* 0x002B7DFE..0x002B7E19: raw guest callback address, five
         * pushed arguments including the actual F32 normal vector. */
        (*(code *)**(undefined4 **)(uintptr_t)bf_2b7c70_guest_word(&param_1[0x11]))
                  (bf_2b7c70_guest_word(&param_1[0x12]),param_2,param_2 + 4,
                   fVar15 * param_1[0x13],&local_40);
        return;
      }
    }
  }
  else {
    local_2c = param_1[0xd];
    local_30 = param_1[0xc];
    local_28 = param_1[0xe];
    if (0 < iVar7) {
      puVar10 = (uint *)(param_2 + 5);
      while( true ) {
        iVar4 = *param_2;
        pfVar3 = (float *)((*puVar10 & 0xffff) * 0x10 + iVar4 + (int)param_2);
        pfVar8 = (float *)((*(uint *)((int)puVar10 + *(int *)(&DAT_003b86e0 + ((uint)puVar10 & 0xc))
                                     ) & 0xffff) * 0x10 + iVar4 + (int)param_2);
        pfVar6 = (float *)((*(uint *)((int)puVar10 + *(int *)(&DAT_003b86f0 + ((uint)puVar10 & 0xc))
                                     ) & 0xffff) * 0x10 + iVar4 + (int)param_2);
        fVar15 = *pfVar3;
        uVar1 = *(undefined8 *)(pfVar3 + 1);
        uVar2 = *(undefined8 *)(pfVar8 + 1);
        fVar12 = *pfVar8 - fVar15;
        fVar16 = (float)uVar1;
        fVar13 = (float)uVar2 - fVar16;
        fVar17 = (float)((ulonglong)uVar1 >> 0x20);
        fVar14 = (float)((ulonglong)uVar2 >> 0x20) - fVar17;
        uVar1 = *(undefined8 *)(pfVar6 + 1);
        fVar15 = *pfVar6 - fVar15;
        fVar16 = (float)uVar1 - fVar16;
        fVar17 = (float)((ulonglong)uVar1 >> 0x20) - fVar17;
        fVar11 = fVar13 * fVar17 - fVar14 * fVar16;
        fVar14 = fVar14 * fVar15 - fVar12 * fVar17;
        fVar15 = fVar12 * fVar16 - fVar13 * fVar15;
        if ((local_30 * fVar11 + fVar14 * local_2c + fVar15 * local_28 <= -1e-06) &&
           (iVar4 = (*puVar10 & 0xffff) * 0x10 + *param_2, pfVar3 = (float *)(iVar4 + (int)param_2),
           fVar12 = fVar11 * *pfVar3 +
                    fVar14 * pfVar3[1] + fVar15 * *(float *)(iVar4 + 8 + (int)param_2),
           0.0 < (fVar11 * *param_1 + fVar14 * param_1[1] + fVar15 * param_1[2]) - fVar12)) break;
        iVar9 = iVar9 + 2;
        puVar10 = puVar10 + 8;
        if (iVar7 <= iVar9) {
          return;
        }
      }
      if (((fVar11 * param_1[8] + fVar14 * param_1[9] + fVar15 * param_1[10]) - fVar12 <= 0.0) &&
         (iVar7 = (short)param_2[3] + -1, -1 < iVar7)) {
        while( true ) {
          local_34 = 0;
          iVar9 = *param_2;
          pfVar3 = (float *)((*puVar10 & 0xffff) * 0x10 + iVar9 + (int)param_2);
          pfVar8 = (float *)((*(uint *)((int)puVar10 +
                                       *(int *)(&DAT_003b86e0 + ((uint)puVar10 & 0xc))) & 0xffff) *
                             0x10 + iVar9 + (int)param_2);
          pfVar6 = (float *)((*(uint *)((int)puVar10 +
                                       *(int *)(&DAT_003b86f0 + ((uint)puVar10 & 0xc))) & 0xffff) *
                             0x10 + iVar9 + (int)param_2);
          fVar15 = *pfVar3;
          uVar1 = *(undefined8 *)(pfVar3 + 1);
          uVar2 = *(undefined8 *)(pfVar8 + 1);
          fVar12 = *pfVar8 - fVar15;
          fVar16 = (float)uVar1;
          fVar13 = (float)uVar2 - fVar16;
          fVar17 = (float)((ulonglong)uVar1 >> 0x20);
          fVar14 = (float)((ulonglong)uVar2 >> 0x20) - fVar17;
          uVar1 = *(undefined8 *)(pfVar6 + 1);
          fVar15 = *pfVar6 - fVar15;
          fVar16 = (float)uVar1 - fVar16;
          fVar17 = (float)((ulonglong)uVar1 >> 0x20) - fVar17;
          fVar11 = fVar13 * fVar17 - fVar14 * fVar16;
          fVar14 = fVar14 * fVar15 - fVar12 * fVar17;
          fVar15 = fVar12 * fVar16 - fVar13 * fVar15;
          if (-1e-06 < fVar11 * local_30 + fVar14 * local_2c + fVar15 * local_28) break;
          iVar9 = (*puVar10 & 0xffff) * 0x10 + *param_2;
          pfVar3 = (float *)(iVar9 + (int)param_2);
          fVar12 = fVar11 * *pfVar3 +
                   fVar14 * pfVar3[1] + fVar15 * *(float *)(iVar9 + 8 + (int)param_2);
          fVar13 = (fVar11 * *param_1 + fVar14 * param_1[1] + fVar15 * param_1[2]) - fVar12;
          fVar12 = (fVar11 * param_1[8] + fVar14 * param_1[9] + fVar15 * param_1[10]) - fVar12;
          if (0.0 <= fVar13 * fVar12) {
            return;
          }
          local_14 = 0;
          fVar13 = fVar13 / (fVar13 - fVar12);
          fVar15 = 1.0 - fVar13;
          local_1c = fVar15 * param_1[1] + fVar13 * param_1[9];
          local_20 = fVar15 * *param_1 + fVar13 * param_1[8];
          local_18 = fVar13 * param_1[10] + fVar15 * param_1[2];
          FUN_002cd2b0(&local_20);
          iVar9 = 0;
          puVar5 = puVar10;
          while( true ) {
            if (2 < iVar9) {
              fVar15 = param_1[0x13];
              FUN_002b65a0(&local_40);
              pfVar3 = &local_40;
              /* 0x002B81F1..0x002B821C pushes five arguments,
               * including normal vector at [ESP+0x20]. The draft
               * omitted that fifth argument. Post-call 0x002B821E
               * reloads the original param_1, not a pointer from
               * the independent F32 scratch at [ESP+0x50]. */
              (*(code *)**(undefined4 **)(uintptr_t)bf_2b7c70_guest_word(&param_1[0x11]))
                        (bf_2b7c70_guest_word(&param_1[0x12]),param_2,
                         (uint)puVar10 & 0xfffffff0,fVar13 * fVar15,&local_40);
              /* 0x002B8237..0x002B8267 updates three SIMD F32
               * positions, and 0x002B826B/8274 stores saved F32. */
              fVar15 = param_1[0x13];
              param_1[8] = *param_1 + param_1[0xc] * fVar15;
              param_1[9] = param_1[1] + param_1[0xd] * fVar15;
              param_1[10] = param_1[2] + param_1[0xe] * fVar15;
              param_1[0x13] = fVar13;
              return;
            }
            if (local_10[iVar9] <= 0.0f) break;
            puVar5 = (uint *)((int)puVar5 + *(int *)(&DAT_003b86e0 + ((uint)puVar5 & 0xc)));
            iVar9 = iVar9 + 1;
          }
          iVar7 = iVar7 + -1;
          puVar10 = puVar5 + ((int)(*puVar5 << 1) >> 0x11);
          if (iVar7 < 0) {
            return;
          }
        }
      }
    }
  }
  return;
}

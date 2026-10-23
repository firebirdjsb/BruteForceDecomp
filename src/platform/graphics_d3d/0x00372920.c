/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD58543DC8FE75069347883563569897AD9BA551928168A14D2545B0746B4E3D
 * Entry: 0x00372920, Ghidra index: 13400, label: FUN_00372920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00040420;
extern uint32_t DAT_0037bba0;
extern uint32_t DAT_0037ec88;
extern uint32_t PTR_PTR_003ffe04;
extern uint32_t UNK_00040430;
void FUN_00372920(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint *local_c;
  
  if (((*(byte *)(param_1[0xdf] + 4) & 0x12) == 0) && ((param_1[0x536] & 0xffffffef) != 1)) {
    puVar7 = &DAT_00040420;
    local_c = &DAT_0037bba0;
    puVar8 = param_1 + 0x22f;
    do {
      uVar6 = local_c[-7];
      puVar4 = (undefined4 *)*param_1;
      if ((undefined4 *)param_1[1] <= puVar4) {
        puVar4 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      if (uVar6 == 0) {
        *puVar4 = puVar7;
        puVar4[1] = 0;
        *param_1 = puVar4 + 2;
      }
      else {
        if ((*local_c & 0xffff0000) == 0) {
          uVar5 = *(uint *)(param_1[0xdf] + 0x10) >> ((byte)((*local_c & 0xffff) << 3) & 0x1f) &
                  0xff;
          if (uVar5 == 0) {
            uVar5 = 2;
          }
        }
        else {
          uVar5 = 3;
        }
        *puVar4 = puVar7;
        uVar6 = (uVar5 << 4 | uVar6 & 0xff) << 4 | uVar6 >> 8 & 1;
        puVar4[1] = 1;
        puVar4[2] = ((int)&PTR_PTR_003ffe04 - (int)param_1) + (int)puVar8;
        if (uVar6 < 0x321) {
          if (uVar6 == 800) {
            uVar1 = puVar8[1];
            uVar2 = puVar8[-3];
            uVar3 = puVar8[-7];
            puVar4[3] = puVar8[-0xb];
            puVar4[4] = uVar3;
            puVar4[5] = uVar2;
            puVar4[6] = uVar1;
            uVar1 = puVar8[2];
            uVar2 = puVar8[-2];
            uVar3 = puVar8[-6];
            puVar4[7] = puVar8[-10];
            puVar4[8] = uVar3;
            puVar4[9] = uVar2;
            puVar4[10] = uVar1;
            puVar4[0xb] = 0;
            puVar4[0xc] = 0;
            puVar4[0xd] = 0;
            puVar4[0xe] = 0;
            goto LAB_00372c6a;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(uVar6 + 0x372aa0)) {
          case 0:
            uVar1 = puVar8[-3];
            uVar2 = puVar8[-7];
            puVar4[3] = puVar8[-0xb];
            puVar4[4] = uVar2;
            puVar4[5] = 0;
            puVar4[6] = uVar1;
            uVar1 = puVar8[-2];
            uVar2 = puVar8[-6];
            uVar3 = puVar8[-10];
            puVar4[9] = 0;
            puVar4[7] = uVar3;
            puVar4[8] = uVar2;
            puVar4[10] = uVar1;
            puVar4[0xb] = 0;
            puVar4[0xc] = 0;
            puVar4[0xd] = 0;
            puVar4[0xe] = 0;
            goto LAB_00372c6a;
          case 1:
            uVar1 = puVar8[-3];
            uVar2 = puVar8[-7];
            puVar4[3] = puVar8[-0xb];
            puVar4[4] = uVar2;
            puVar4[5] = 0;
            puVar4[6] = uVar1;
            uVar1 = puVar8[-2];
            uVar2 = puVar8[-6];
            uVar3 = puVar8[-10];
            puVar4[9] = 0;
            puVar4[7] = uVar3;
            puVar4[8] = uVar2;
            puVar4[10] = uVar1;
            uVar1 = puVar8[-1];
            uVar2 = puVar8[-5];
            uVar3 = puVar8[-9];
            puVar4[0xd] = 0;
            puVar4[0xb] = uVar3;
            puVar4[0xc] = uVar2;
            goto LAB_00372c67;
          case 2:
            uVar1 = puVar8[-3];
            uVar2 = puVar8[-7];
            puVar4[3] = puVar8[-0xb];
            puVar4[4] = uVar2;
            puVar4[5] = 0;
            puVar4[6] = uVar1;
            uVar1 = puVar8[-2];
            uVar2 = puVar8[-6];
            uVar3 = puVar8[-10];
            puVar4[9] = 0;
            puVar4[7] = uVar3;
            puVar4[8] = uVar2;
            puVar4[10] = uVar1;
            puVar4[0xb] = 0;
            puVar4[0xc] = 0;
            puVar4[0xd] = 0;
            puVar4[0xe] = 0;
            uVar1 = puVar8[-1];
            uVar2 = puVar8[-5];
            uVar3 = puVar8[-9];
            puVar4[0x11] = 0;
            puVar4[0xf] = uVar3;
            puVar4[0x10] = uVar2;
            puVar4[0x12] = uVar1;
            break;
          case 3:
            uVar1 = puVar8[-3];
            uVar2 = puVar8[-7];
            puVar4[3] = puVar8[-0xb];
            puVar4[4] = uVar2;
            puVar4[5] = 0;
            puVar4[6] = uVar1;
            uVar1 = puVar8[-2];
            uVar2 = puVar8[-6];
            uVar3 = puVar8[-10];
            puVar4[9] = 0;
            puVar4[7] = uVar3;
            puVar4[8] = uVar2;
            puVar4[10] = uVar1;
            uVar1 = puVar8[-1];
            uVar2 = puVar8[-5];
            uVar3 = puVar8[-9];
            puVar4[0xd] = 0;
            puVar4[0xb] = uVar3;
            puVar4[0xc] = uVar2;
            puVar4[0xe] = uVar1;
            uVar1 = *puVar8;
            uVar2 = puVar8[-4];
            uVar3 = puVar8[-8];
            puVar4[0x11] = 0;
            puVar4[0xf] = uVar3;
            puVar4[0x10] = uVar2;
            puVar4[0x12] = uVar1;
          }
        }
        else {
          uVar1 = puVar8[1];
          uVar2 = puVar8[-3];
          if (uVar6 != 0x330) {
            uVar3 = puVar8[-0xb];
            puVar4[4] = puVar8[-7];
            puVar4[3] = uVar3;
            puVar4[5] = uVar2;
            puVar4[6] = uVar1;
            uVar1 = puVar8[2];
            uVar2 = puVar8[-2];
            uVar3 = puVar8[-6];
            puVar4[7] = puVar8[-10];
            puVar4[8] = uVar3;
            puVar4[9] = uVar2;
            puVar4[10] = uVar1;
            if (uVar6 == 0x331) {
              puVar4[0xb] = 0;
              puVar4[0xc] = 0;
              puVar4[0xd] = 0;
              puVar4[0xe] = 0;
              uVar1 = puVar8[3];
              uVar2 = puVar8[-1];
              uVar3 = puVar8[-5];
              puVar4[0xf] = puVar8[-9];
              puVar4[0x10] = uVar3;
              puVar4[0x11] = uVar2;
              puVar4[0x12] = uVar1;
            }
            else {
              uVar1 = puVar8[3];
              uVar2 = puVar8[-1];
              uVar3 = puVar8[-5];
              puVar4[0xb] = puVar8[-9];
              puVar4[0xc] = uVar3;
              puVar4[0xd] = uVar2;
              puVar4[0xe] = uVar1;
              uVar1 = puVar8[4];
              uVar2 = *puVar8;
              uVar3 = puVar8[-4];
              puVar4[0xf] = puVar8[-8];
              puVar4[0x10] = uVar3;
              puVar4[0x11] = uVar2;
              puVar4[0x12] = uVar1;
            }
            goto LAB_00372c7a;
          }
          uVar3 = puVar8[-0xb];
          puVar4[4] = puVar8[-7];
          puVar4[3] = uVar3;
          puVar4[5] = uVar2;
          puVar4[6] = uVar1;
          uVar1 = puVar8[2];
          uVar2 = puVar8[-2];
          uVar3 = puVar8[-6];
          puVar4[7] = puVar8[-10];
          puVar4[8] = uVar3;
          puVar4[9] = uVar2;
          puVar4[10] = uVar1;
          uVar1 = puVar8[3];
          uVar2 = puVar8[-1];
          uVar3 = puVar8[-5];
          puVar4[0xb] = puVar8[-9];
          puVar4[0xc] = uVar3;
          puVar4[0xd] = uVar2;
LAB_00372c67:
          puVar4[0xe] = uVar1;
LAB_00372c6a:
          puVar4[0xf] = 0;
          puVar4[0x10] = 0;
          puVar4[0x11] = 0;
          puVar4[0x12] = 0x3f800000;
        }
LAB_00372c7a:
        *param_1 = puVar4 + 0x13;
      }
      puVar7 = puVar7 + 4;
      local_c = local_c + 0x20;
      puVar8 = puVar8 + 0x10;
    } while (puVar7 < &UNK_00040430);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF895FC56DC5C0B91DB55F6434B5568832832B39BDD06BB14531B7412DA340FC
 * Entry: 0x00372550, Ghidra index: 13398, label: FUN_00372550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb34;
extern uint32_t DAT_0037df20;
extern uint32_t DAT_0037ec88;
extern uint32_t PTR_LAB_0037b6f4;
void FUN_00372550(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  int extraout_ECX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint local_18;
  int local_14;
  int local_c;
  
  puVar11 = param_1 + 0xd7;
  local_14 = 0x41b14;
  puVar10 = &DAT_0037bb34;
  local_c = 4;
  do {
    if ((param_2 & 1) != 0) {
      uVar1 = puVar10[1];
      uVar2 = *puVar10;
      uVar3 = *(uint *)(&DAT_0037df20 + (puVar10[0x1b] & 0xffff) * 4);
      uVar4 = puVar10[-1];
      uVar8 = puVar10[6] << 0x1a | puVar10[10] | puVar10[8];
      uVar9 = uVar8 | 0x3ffc0;
      if (puVar11[0x1f7] != 0) {
        uVar9 = uVar8 | 0x4003ffc0;
      }
      uVar8 = puVar10[3];
      uVar7 = puVar10[2];
      local_18 = 0x2000;
      if ((2 < uVar8) || (2 < uVar7)) {
        if ((uVar8 < 4) && (uVar7 < 4)) {
          if (puVar10[7] != 0) {
            uVar9 = uVar9 | (puVar10[7] - 1) * 0x10;
          }
        }
        else {
          if ((uVar8 == 5) || (uVar7 == 5)) {
            local_18 = 0x4000;
          }
          local_18 = local_18 | 0x70000;
        }
      }
      *puVar11 = uVar9 | 0x40000000;
      uVar12 = FUN_00373a30(((float)puVar10[5] + (float)param_1[0x149]) * 256.0 + 0.5);
      uVar8 = (uint)uVar12;
      if ((int)uVar8 < -0x1000) {
        uVar8 = 0xfffff000;
      }
      else if (0xfff < (int)uVar8) {
        uVar8 = 0xfff;
      }
      uVar7 = 0xc0000000;
      if (puVar10[0xb] < 0x19) {
        uVar7 = puVar10[9];
      }
      puVar5 = (&PTR_LAB_0037b6f4)[puVar10[4] + (int)((ulonglong)uVar12 >> 0x20) * 3];
      piVar6 = (int *)*param_1;
      if ((int *)param_1[1] <= piVar6) {
        piVar6 = (int *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *piVar6 = local_14 + 0x3fff4;
      piVar6[1] = uVar3 | (uVar1 << 8 | uVar2) << 8 | uVar4;
      piVar6[2] = uVar9;
      piVar6[3] = local_14;
      piVar6[4] = (uint)puVar5 | uVar8 & 0x1fff | extraout_ECX << 0x18 | uVar7 | local_18;
      *param_1 = piVar6 + 5;
    }
    puVar11 = puVar11 + 1;
    local_14 = local_14 + 0x40;
    param_2 = param_2 >> 1;
    puVar10 = puVar10 + 0x20;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}

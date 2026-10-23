/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC7406DAB9ACE2CD9BC961D1A1BF9AD2E689D0BB8572DAB20EF48228113B8308
 * Entry: 0x00373f00, Ghidra index: 13420, label: FUN_00373f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b790;
void FUN_00373f00(int param_1,int param_2,int param_3,uint *param_4,uint *param_5,uint *param_6,
                 uint *param_7,undefined4 *param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_1c;
  uint local_18;
  uint local_10;
  int local_c;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar12 = (uint)*(byte *)(param_1 + 0xd);
  local_18 = *(uint *)(param_1 + 4) | 0x80000000;
  uVar2 = (byte)(&DAT_0037b790)[uVar12] & 0x3c;
  if (uVar9 == 0) {
    uVar9 = *(uint *)(param_1 + 0xc);
    uVar8 = uVar9 >> 0x14 & 0xf;
    uVar11 = uVar9 >> 0x18 & 0xf;
    uVar3 = uVar9 >> 0x1c;
    bVar1 = 0;
    if ((uVar12 == 0xc) || ((0xd < uVar12 && (uVar12 < 0x10)))) {
      bVar1 = 1;
    }
    uVar12 = -(uint)bVar1 & 2;
    if (param_2 != 0) {
      local_c = 0;
      uVar13 = uVar8;
      local_1c = uVar11;
      local_10 = uVar3;
      for (uVar5 = uVar9 >> 0x10 & 0xf; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar10 = uVar13;
        if (uVar13 <= uVar12) {
          uVar10 = uVar12;
        }
        uVar6 = uVar12;
        if (uVar12 < local_1c) {
          uVar6 = local_1c;
        }
        local_c = local_c + ((1 << ((char)uVar6 + (char)uVar10 & 0x1fU)) * uVar2 >> 3);
        if (uVar13 != 0) {
          uVar13 = uVar13 - 1;
        }
        if (local_1c != 0) {
          local_1c = local_1c - 1;
        }
        if (local_10 != 0) {
          local_10 = local_10 - 1;
        }
      }
      local_18 = local_18 + (local_c + 0x7fU & 0xffffff80) * param_2;
    }
    if (param_3 != 0) {
      param_2 = param_3;
      do {
        uVar5 = uVar8;
        if (uVar8 <= uVar12) {
          uVar5 = uVar12;
        }
        uVar13 = uVar11;
        if (uVar11 <= uVar12) {
          uVar13 = uVar12;
        }
        local_18 = local_18 +
                   ((1 << ((char)uVar13 + (char)uVar5 + (char)uVar3 & 0x1fU)) * uVar2 >> 3);
        if (uVar8 != 0) {
          uVar8 = uVar8 - 1;
        }
        if (uVar11 != 0) {
          uVar11 = uVar11 - 1;
        }
        if (uVar3 != 0) {
          uVar3 = uVar3 - 1;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    uVar5 = uVar8;
    if (uVar8 <= uVar12) {
      uVar5 = uVar12;
    }
    uVar13 = uVar11;
    if (uVar11 <= uVar12) {
      uVar13 = uVar12;
    }
    bVar1 = *(byte *)(param_1 + 0xd);
    bVar4 = (byte)uVar5;
    if (bVar1 == 0xc) {
      uVar12 = (1 << (bVar4 & 0x1f)) << 1;
    }
    else if ((bVar1 < 0xe) || (0xf < bVar1)) {
      uVar12 = (1 << (bVar4 & 0x1f)) * uVar2 >> 3;
    }
    else {
      uVar12 = (1 << (bVar4 & 0x1f)) << 2;
    }
    *param_7 = ((uVar3 << 4 | uVar11) << 4 | uVar8) << 0x14 | uVar9 & 0xfffff;
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = (1 << ((char)uVar13 + bVar4 & 0x1f)) * uVar2 >> 3;
  }
  else {
    uVar12 = ((uVar9 >> 0x18) + 1) * 0x40;
    uVar9 = ((uVar9 >> 0xc & 0xfff) + 1) * uVar12;
    *param_7 = *(uint *)(param_1 + 0xc);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
  }
  *param_8 = uVar7;
  *param_4 = local_18;
  *param_5 = uVar12;
  *param_6 = uVar9;
  return;
}

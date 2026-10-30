/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 319186F665F0A895A8C429EA801C4A8EA1AFDDFA581BF751FDC949508DC62AE5
 * Entry: 0x003610e0, Ghidra index: 13229, label: FUN_003610e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412b10;
extern uint32_t DAT_004b5280;
extern uint32_t DAT_004b5284;
extern uint32_t DAT_004b5288;
extern uint32_t DAT_004b528c;
extern uint32_t DAT_004b5690;
extern uint32_t DAT_004b5694;
extern uint32_t DAT_004b5698;
extern uint32_t DAT_004b569c;
extern uint32_t DAT_004b5aa0;
extern uint32_t DAT_004b5eb0;
extern uint32_t DAT_004b62b0;
extern uint32_t DAT_004b66b0;
extern uint32_t DAT_004b6ac0;
extern uint32_t DAT_004b6ed0;
extern uint32_t DAT_004b72d0;
extern uint32_t DAT_004b76d0;
extern uint32_t DAT_004b7ae0;
extern uint32_t DAT_004b7ee0;
extern uint32_t DAT_004b82e0;
extern uint32_t DAT_004b86f0;
extern uint32_t DAT_004b8af0;
extern uint32_t DAT_004b8ef0;
extern uint32_t DAT_004b9300;
extern uint32_t DAT_004b9700;
extern uint32_t DAT_004b9b00;
extern uint32_t DAT_004b9f10;
extern uint32_t DAT_004ba310;
extern uint32_t DAT_004ba710;
extern uint32_t DAT_004bab20;
extern uint32_t DAT_004baf20;
extern uint32_t DAT_004bb320;
extern uint32_t DAT_004bb730;
extern uint32_t DAT_004bbb30;
extern uint32_t DAT_004bbf30;
extern uint32_t DAT_004bc340;
extern uint32_t DAT_004bc740;
extern uint32_t DAT_004bcb40;
extern uint32_t DAT_004bcf50;
extern uint32_t DAT_004bd350;
extern uint32_t DAT_004bd750;
extern uint32_t DAT_004bdb60;
extern uint32_t DAT_004bdf60;
extern uint32_t DAT_004be360;
extern uint32_t DAT_004be7b0;
extern uint32_t DAT_004be7b4;
extern uint32_t DAT_004be7b8;
extern uint32_t DAT_004be7bc;
extern uint32_t DAT_004bebb0;
extern uint32_t DAT_004bebb4;
extern uint32_t DAT_004bebb8;
extern uint32_t DAT_004bebbc;
extern uint32_t DAT_004befb0;
extern uint32_t DAT_004befb4;
extern uint32_t DAT_004befb8;
extern uint32_t DAT_004befbc;
extern uint32_t DAT_004bf3b0;
extern uint32_t DAT_004bf3b4;
extern uint32_t DAT_004bf3b8;
extern uint32_t DAT_004bf3bc;
extern uint32_t DAT_004bf7b0;
extern uint32_t DAT_004bf7b4;
extern uint32_t DAT_004bf7b8;
extern uint32_t DAT_004bf7bc;
extern uint32_t DAT_004bfbb0;
extern uint32_t DAT_004bfbb4;
extern uint32_t DAT_004bfbb8;
extern uint32_t DAT_004bfbbc;
extern uint32_t DAT_004bffb0;
extern uint32_t DAT_004bffb4;
extern uint32_t DAT_004bffb8;
extern uint32_t DAT_004bffbc;
extern uint32_t DAT_004c03b0;
extern uint32_t DAT_004c03b4;
extern uint32_t DAT_004c03b8;
extern uint32_t DAT_004c03bc;
extern uint32_t DAT_004c07e0;
extern uint32_t DAT_004c07e8;
extern uint32_t DAT_004c07f8;
extern uint32_t _DAT_003b7d60;
extern uint32_t _DAT_003b7d64;
extern uint32_t _DAT_003b7d68;
extern uint32_t _DAT_003b7d6c;
extern uint32_t _DAT_003b7d70;
extern uint32_t _DAT_003b7d74;
extern uint32_t _DAT_004c07b0;
extern uint32_t _DAT_004c07b4;
extern uint32_t _DAT_004c07b8;
extern uint32_t _DAT_004c07bc;
extern uint32_t _DAT_004c07c0;
extern uint32_t _DAT_004c07c4;
extern uint32_t _DAT_004c07c8;
extern uint32_t _DAT_004c07cc;
extern uint32_t _DAT_004c07d0;
extern uint32_t _DAT_004c07d4;
extern uint32_t _DAT_004c07d8;
extern uint32_t _DAT_004c07dc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003610e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  sbyte sVar6;
  sbyte sVar7;
  byte bVar8;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined1 *local_24;
  int local_1c;
  byte bVar9;
  byte bVar10;
  
  if (DAT_004c07e0 == 0) {
    FUN_00361060();
  }
  if (DAT_004c07f8 == 0) {
    iVar14 = -0x80184b;
    iVar13 = -0x655935;
    local_24 = (uintptr_t)0x0018e05bU;
    iVar15 = 0x339f71;
    iVar11 = 0;
    iVar3 = 1;
    do {
      if (iVar3 + -1 < 0x11) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0xdb;
        if (iVar3 + -1 < 0xeb) {
          iVar2 = iVar3 + -0x11;
        }
      }
      iVar2 = (int)(iVar2 * 0x950a + (iVar2 * 0x950a >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004b5280 + iVar11) = iVar2;
      *(int *)((int)&DAT_004b5690 + iVar11) = iVar2 << 2;
      *(int *)((int)&DAT_004bebb0 + iVar11) =
           (int)(iVar15 + 0x680f + (iVar15 + 0x680f >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004befb0 + iVar11) =
           (int)(local_24 + 0x3225 + ((int)(local_24 + 0x3225) >> 0x1f & 0x7fff)) >> 0xf;
      *(int *)((int)&DAT_004bf3b0 + iVar11) =
           (int)(iVar13 + -0xcc4b + (iVar13 + -0xcc4b >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004be7b0 + iVar11) =
           (int)(iVar14 + -0x10235 + (iVar14 + -0x10235 >> 0x1f & 0x7fffU)) >> 0xf;
      *(uint *)((int)&DAT_004bfbb0 + iVar11) =
           (*(uint *)((int)&DAT_004bebb0 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004bffb0 + iVar11) =
           (*(uint *)((int)&DAT_004befb0 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004c03b0 + iVar11) =
           (*(uint *)((int)&DAT_004bf3b0 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004bf7b0 + iVar11) =
           (*(uint *)((int)&DAT_004be7b0 + iVar11) & 0xffff) * 0x10001;
      if (iVar3 < 0x11) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0xdb;
        if (iVar3 < 0xeb) {
          iVar2 = iVar3 + -0x10;
        }
      }
      iVar2 = (int)(iVar2 * 0x950a + (iVar2 * 0x950a >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004b5284 + iVar11) = iVar2;
      *(int *)((int)&DAT_004b5694 + iVar11) = iVar2 * 4;
      *(int *)((int)&DAT_004bebb4 + iVar11) = (int)(iVar15 + (iVar15 >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004befb4 + iVar11) =
           (int)(local_24 + ((int)local_24 >> 0x1f & 0x7fff)) >> 0xf;
      *(int *)((int)&DAT_004bf3b4 + iVar11) = (int)(iVar13 + (iVar13 >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004be7b4 + iVar11) = (int)(iVar14 + (iVar14 >> 0x1f & 0x7fffU)) >> 0xf;
      *(uint *)((int)&DAT_004bfbb4 + iVar11) =
           (*(uint *)((int)&DAT_004bebb4 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004bffb4 + iVar11) =
           (*(uint *)((int)&DAT_004befb4 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004c03b4 + iVar11) =
           (*(uint *)((int)&DAT_004bf3b4 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004bf7b4 + iVar11) =
           (*(uint *)((int)&DAT_004be7b4 + iVar11) & 0xffff) * 0x10001;
      if (iVar3 + 1 < 0x11) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0xdb;
        if (iVar3 + 1 < 0xeb) {
          iVar2 = iVar3 + -0xf;
        }
      }
      iVar2 = (int)(iVar2 * 0x950a + (iVar2 * 0x950a >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004b5288 + iVar11) = iVar2;
      *(int *)((int)&DAT_004b5698 + iVar11) = iVar2 << 2;
      *(int *)((int)&DAT_004bebb8 + iVar11) =
           (int)(iVar15 + -0x680f + (iVar15 + -0x680f >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004befb8 + iVar11) =
           (int)(local_24 + -0x3225 + ((int)(local_24 + -0x3225) >> 0x1f & 0x7fff)) >> 0xf;
      *(int *)((int)&DAT_004bf3b8 + iVar11) =
           (int)(iVar13 + 0xcc4b + (iVar13 + 0xcc4b >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004be7b8 + iVar11) =
           (int)(iVar14 + 0x10235 + (iVar14 + 0x10235 >> 0x1f & 0x7fffU)) >> 0xf;
      *(uint *)((int)&DAT_004bfbb8 + iVar11) =
           (*(uint *)((int)&DAT_004bebb8 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004bffb8 + iVar11) =
           (*(uint *)((int)&DAT_004befb8 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004c03b8 + iVar11) =
           (*(uint *)((int)&DAT_004bf3b8 + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004bf7b8 + iVar11) =
           (*(uint *)((int)&DAT_004be7b8 + iVar11) & 0xffff) * 0x10001;
      if (iVar3 + 2 < 0x11) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0xdb;
        if (iVar3 + 2 < 0xeb) {
          iVar2 = iVar3 + -0xe;
        }
      }
      iVar2 = (int)(iVar2 * 0x950a + (iVar2 * 0x950a >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004b528c + iVar11) = iVar2;
      *(int *)((int)&DAT_004b569c + iVar11) = iVar2 * 4;
      *(int *)((int)&DAT_004bebbc + iVar11) =
           (int)(iVar15 + -0xd01e + (iVar15 + -0xd01e >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004befbc + iVar11) =
           (int)(local_24 + -0x644a + ((int)(local_24 + -0x644a) >> 0x1f & 0x7fff)) >> 0xf;
      *(int *)((int)&DAT_004bf3bc + iVar11) =
           (int)(iVar13 + 0x19896 + (iVar13 + 0x19896 >> 0x1f & 0x7fffU)) >> 0xf;
      *(int *)((int)&DAT_004be7bc + iVar11) =
           (int)(iVar14 + 0x2046a + (iVar14 + 0x2046a >> 0x1f & 0x7fffU)) >> 0xf;
      *(uint *)((int)&DAT_004bfbbc + iVar11) =
           (*(uint *)((int)&DAT_004bebbc + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004bffbc + iVar11) =
           (*(uint *)((int)&DAT_004befbc + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004c03bc + iVar11) =
           (*(uint *)((int)&DAT_004bf3bc + iVar11) & 0xffff) * 0x10001;
      *(uint *)((int)&DAT_004bf7bc + iVar11) =
           (*(uint *)((int)&DAT_004be7bc + iVar11) & 0xffff) * 0x10001;
      local_24 = local_24 + -0xc894;
      iVar2 = iVar3 + 3;
      iVar13 = iVar13 + 0x3312c;
      iVar14 = iVar14 + 0x408d4;
      iVar15 = iVar15 + -0x1a03c;
      iVar11 = iVar11 + 0x10;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 0x100);
    iVar3 = 0;
    do {
      (&DAT_004b5eb0)[iVar3] = 0;
      (&DAT_004b62b0)[iVar3] = iVar3;
      (&DAT_004b66b0)[iVar3] = 0xff;
      (&DAT_004b5aa0)[iVar3] = &DAT_004b62b0 + (&DAT_004b5280)[iVar3];
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    puVar16 = &DAT_004be7b0;
    puVar18 = &DAT_00412b10;
    for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar18 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar18 = puVar18 + 1;
    }
    DAT_004c07f8 = 1;
  }
  uVar19 = 0;
  if ((DAT_004c07e8 != param_1) && (param_1 != -1)) {
    DAT_004c07e8 = param_1;
    switch(param_1) {
    case 7:
      _DAT_003b7d68 = 0x12a112a1;
      _DAT_003b7d6c = 0x12a112a1;
      iVar3 = 4;
      _DAT_003b7d70 = 0x7ff07ff0;
      _DAT_003b7d74 = 0x7ff07ff0;
      iVar11 = 4;
      _DAT_004c07b8 = 4;
      iVar13 = 4;
      _DAT_004c07c0 = 8;
      _DAT_003b7d60 = 0x1110111;
      _DAT_003b7d64 = 0x1110111;
      break;
    case 8:
    case 9:
      _DAT_003b7d68 = 0x25422542;
      _DAT_003b7d6c = 0x25422542;
      iVar3 = 5;
      _DAT_003b7d70 = 0x7fe07fe0;
      _DAT_003b7d74 = 0x7fe07fe0;
      iVar11 = 5;
      _DAT_004c07b8 = 5;
      iVar13 = 5;
      _DAT_004c07c0 = 10;
      _DAT_003b7d60 = 0x4210421;
      _DAT_003b7d64 = 0x4210421;
      break;
    case 10:
      _DAT_003b7d68 = 0x25422542;
      _DAT_003b7d6c = 0x25422542;
      iVar3 = 5;
      _DAT_003b7d70 = 0x7fe07fe0;
      _DAT_003b7d74 = 0x7fe07fe0;
      iVar11 = 6;
      _DAT_004c07b8 = 5;
      iVar13 = 5;
      _DAT_004c07c0 = 0xb;
      _DAT_003b7d60 = 0x8410841;
      _DAT_003b7d64 = 0x8410841;
      break;
    case 0xb:
      _DAT_003b7d68 = 0x25422542;
      _DAT_003b7d6c = 0x25422542;
      _DAT_003b7d70 = 0x7fe07fe0;
      _DAT_003b7d74 = 0x7fe07fe0;
      iVar3 = 6;
      iVar11 = 5;
      _DAT_004c07b8 = 6;
      iVar13 = 5;
      _DAT_004c07c0 = 0xb;
      _DAT_003b7d60 = 0x8420842;
      _DAT_003b7d64 = 0x8420842;
      break;
    case 0xc:
      _DAT_003b7d68 = 0x12a112a1;
      _DAT_003b7d6c = 0x12a112a1;
      iVar3 = 6;
      _DAT_003b7d70 = 0x7ff07ff0;
      _DAT_003b7d74 = 0x7ff07ff0;
      iVar11 = 6;
      _DAT_004c07b8 = 6;
      iVar13 = 4;
      _DAT_004c07c0 = 0xc;
      _DAT_003b7d60 = 0x11041104;
      _DAT_003b7d64 = 0x11041104;
      break;
    default:
      iVar3 = 0;
      iVar11 = 0;
      _DAT_004c07b8 = 0;
      iVar13 = 0;
      _DAT_004c07c0 = 0;
    }
    _DAT_004c07b0 = 0;
    _DAT_004c07b4 = 0;
    iVar14 = (1 << (sbyte)iVar3) + -1;
    _DAT_004c07bc = 0;
    sVar6 = (sbyte)_DAT_004c07b8;
    iVar15 = (1 << (sbyte)iVar11) + -1 << sVar6;
    _DAT_004c07c4 = 0;
    _DAT_004c07cc = 0;
    _DAT_004c07d4 = 0;
    sVar7 = (sbyte)_DAT_004c07c0;
    iVar2 = (1 << (sbyte)iVar13) + -1 << sVar7;
    _DAT_004c07dc = 0;
    local_1c = -0xff0;
    _DAT_004c07c8 = 8 - iVar3;
    _DAT_004c07d0 = 8 - iVar11;
    _DAT_004c07d8 = 8 - iVar13;
    do {
      bVar8 = (byte)(8 - iVar3);
      bVar9 = (byte)(8 - iVar11);
      bVar10 = (byte)(8 - iVar13);
      if (local_1c < 1) {
        (&DAT_004bdb60)[uVar19] = 0;
        (&DAT_004bdf60)[uVar19] = 0;
        (&DAT_004be360)[uVar19] = 0;
      }
      else {
        if (local_1c < 0xda25) {
          uVar1 = local_1c / 0xdb;
          uVar4 = (uVar1 >> (bVar10 & 0x1f)) << sVar7 | (uVar1 >> (bVar9 & 0x1f)) << sVar6 |
                  uVar1 >> (bVar8 & 0x1f);
          (&DAT_004bdb60)[uVar19] = uVar4;
          uVar4 = uVar4 << 0x10 | uVar4;
          (&DAT_004be360)[uVar19] = (uVar1 * 0x100 | uVar1) << 8 | uVar1;
        }
        else {
          (&DAT_004be360)[uVar19] = 0xffffff;
          uVar4 = (0xff >> (bVar10 & 0x1f)) << sVar7 | (0xff >> (bVar9 & 0x1f)) << sVar6 |
                  0xff >> (bVar8 & 0x1f);
          (&DAT_004bdb60)[uVar19] = uVar4;
          uVar4 = uVar4 << 0x10 | uVar4;
        }
        (&DAT_004bdf60)[uVar19] = uVar4;
      }
      iVar17 = (int)uVar19 >> (bVar8 & 0x1f);
      (&DAT_004b76d0)[uVar19] = iVar14;
      (&DAT_004b6ed0)[uVar19] = 0;
      iVar5 = ((int)uVar19 >> (bVar9 & 0x1f)) << sVar6;
      (&DAT_004b82e0)[uVar19] = iVar15;
      (&DAT_004b7ae0)[uVar19] = 0;
      (&DAT_004b86f0)[uVar19] = 0;
      (&DAT_004b7ee0)[uVar19] = iVar5;
      (&DAT_004b72d0)[uVar19] = iVar17;
      iVar12 = ((int)uVar19 >> (bVar10 & 0x1f)) << sVar7;
      (&DAT_004b8ef0)[uVar19] = iVar2;
      (&DAT_004b6ac0)[uVar19] = (uVar19 & 0xfffffff0) << 8;
      (&DAT_004bbb30)[uVar19] = iVar17 * 0x10001;
      (&DAT_004bbf30)[uVar19] = iVar14 * 0x10001;
      (&DAT_004bc740)[uVar19] = iVar5 * 0x10001;
      (&DAT_004bcb40)[uVar19] = iVar15 * 0x10001;
      (&DAT_004bd350)[uVar19] = iVar12 * 0x10001;
      (&DAT_004ba310)[uVar19] = iVar5 << 0x10;
      (&DAT_004bd750)[uVar19] = iVar2 * 0x10001;
      (&DAT_004b9300)[uVar19] = 0;
      (&DAT_004b9700)[uVar19] = iVar17 << 0x10;
      (&DAT_004b9f10)[uVar19] = 0;
      (&DAT_004bab20)[uVar19] = 0;
      (&DAT_004ba710)[uVar19] = iVar15 << 0x10;
      (&DAT_004b8af0)[uVar19] = iVar12;
      local_1c = local_1c + 0xff;
      (&DAT_004bb730)[uVar19] = 0;
      (&DAT_004bc340)[uVar19] = 0;
      (&DAT_004bcf50)[uVar19] = 0;
      (&DAT_004b9b00)[uVar19] = iVar14 * 0x10000;
      (&DAT_004baf20)[uVar19] = iVar12 << 0x10;
      (&DAT_004bb320)[uVar19] = iVar2 << 0x10;
      uVar19 = uVar19 + 1;
    } while (local_1c < 0xef10);
  }
  return;
}

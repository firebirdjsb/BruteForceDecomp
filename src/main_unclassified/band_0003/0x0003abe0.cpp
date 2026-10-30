/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFA9C483E50453B9F62A70B425F161E4E796EA07EBCDD349A87ECEA9FA6398D2
 * Entry: 0x0003abe0, Ghidra index: 416, label: FUN_0003abe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_004a5908;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_FUN_003a4f68;
extern uint32_t PTR_LAB_003a3fb4;
extern uint32_t PTR_LAB_003a4f50;
void FUN_0003abe0(float param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int in_ECX;
  bool local_216;
  bool local_215;
  int local_20c;
  undefined **local_204;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined **local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  int local_1d0;
  uint local_1cc;
  undefined **local_1c4;
  undefined4 local_1c0;
  int local_1bc;
  uint local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  uint local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  byte local_190;
  int local_18c;
  uint local_188;
  undefined4 local_184;
  undefined4 local_144;
  undefined1 local_140 [92];
  undefined4 local_e4;
  undefined1 local_a0 [92];
  undefined4 local_44;
  
  if ((*(byte *)(in_ECX + 0x14) & 2) == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x42c) != 0) {
    local_20c = FUN_00055aa0();
    if (0.0 < *(float *)(local_20c + 0x84)) {
      fVar5 = *(float *)(local_20c + 0x84) - param_1;
      *(float *)(local_20c + 0x84) = fVar5;
      if (fVar5 < 0.0 != (fVar5 == 0.0)) {
        *(undefined4 *)(local_20c + 0x84) = 0;
      }
    }
LAB_0003ac60:
    do {
      uVar9 = *(uint *)(local_20c + 0x88);
      if (((((uVar9 >> 0xd & 1) == 0) || ((uVar9 & 0x4000) != 0)) ||
          ((*(byte *)(&DAT_004a5908 + *(int *)(local_20c + 0x5c)) & 0x20) != 0)) ||
         ((uVar9 & 0x100) != 0)) goto LAB_0003b1d0;
      bVar6 = false;
      if ((((uVar9 & 2) != 0) && (0.0 <= *(float *)(local_20c + 0x8c))) &&
         ((1.1920929e-07 < param_1 &&
          (fVar5 = *(float *)(local_20c + 0x8c) - param_1, *(float *)(local_20c + 0x8c) = fVar5,
          fVar5 < 0.0)))) {
        bVar6 = true;
      }
      if (*(int *)(local_20c + 0x98) == 0) {
LAB_0003ad2e:
        if (!bVar6) goto LAB_0003b1d0;
      }
      else {
        FUN_000120f0(*(undefined4 *)(local_20c + 0x9c));
        cVar7 = FUN_0004c970();
        if (cVar7 == '\0') goto LAB_0003ad2e;
        if ((*(uint *)(local_20c + 0x88) & 0x200) != 0) {
          *(uint *)(local_20c + 0x88) = *(uint *)(local_20c + 0x88) | 0x100;
          goto LAB_0003ad2e;
        }
      }
      uVar9 = *(uint *)(local_20c + 0x88);
      local_1f8 = FUN_000120f0();
      local_204 = &PTR_LAB_003a3fb4;
      local_1f4 = 0xffffffff;
      local_200 = 0x17;
      local_1fc = uVar9 >> 3 & 0x1f;
      FUN_000120f0(&local_204);
      FUN_001fe3d0();
      local_204 = &PTR_LAB_003a4f50;
      if (*(int *)(in_ECX + 0x42c) == 0) {
        FUN_00022dc0();
        local_e4 = 1;
        FUN_00055d30(local_140);
        FUN_0001d470();
      }
      uVar9 = (*(int *)(in_ECX + 0x428) + *(int *)(in_ECX + 0x42c)) - 1;
      if (*(uint *)(in_ECX + 0x424) <= uVar9) {
        uVar9 = uVar9 - *(uint *)(in_ECX + 0x424);
      }
      iVar12 = *(int *)(*(int *)(in_ECX + 0x420) + uVar9 * 4);
      uVar9 = *(uint *)(iVar12 + 0x88);
      uVar10 = uVar9 >> 0x14 & 7;
      if (uVar10 == 0xffffffff) {
        local_215 = (bool)((byte)(uVar9 >> 0x10) & 1);
      }
      else {
        local_215 = uVar10 != 0;
      }
      *(uint *)(iVar12 + 0x88) = uVar9 | 0x700000;
      if (*(int *)(in_ECX + 0x42c) != 0) {
        FUN_0001d470();
        piVar13 = (int *)(in_ECX + 0x42c);
        *piVar13 = *piVar13 + -1;
        if (*piVar13 == 0) {
          *(undefined4 *)(in_ECX + 0x428) = 0;
        }
      }
      if (*(int *)(in_ECX + 0x42c) == 0) {
        FUN_00022dc0();
        local_44 = 1;
        FUN_00055d30(local_a0);
        FUN_0001d470();
      }
      uVar9 = (*(int *)(in_ECX + 0x428) + *(int *)(in_ECX + 0x42c)) - 1;
      if (*(uint *)(in_ECX + 0x424) <= uVar9) {
        uVar9 = uVar9 - *(uint *)(in_ECX + 0x424);
      }
      local_20c = *(int *)(*(int *)(in_ECX + 0x420) + uVar9 * 4);
LAB_0003aea0:
      uVar9 = *(uint *)(local_20c + 0x88);
      uVar10 = uVar9 >> 0x11 & 7;
      if (uVar10 == 0xffffffff) {
        local_216 = (bool)((byte)(uVar9 >> 0xf) & 1);
      }
      else {
        local_216 = uVar10 != 0;
      }
      *(uint *)(local_20c + 0x88) = uVar9 | 0xe0000;
      if (*(int *)(in_ECX + 0x42c) == 0) {
        local_190 = local_190 & 0xfe;
        local_1e0 = &PTR_FUN_003a4f68;
        local_1cc = 0;
        local_1d4 = 0;
        local_1d8 = 0;
        local_1dc = 0;
        local_1b8 = 0;
        local_1a4 = 0;
        local_1c4 = &PTR_FUN_003a4f64;
        local_1c0 = 0;
        local_1ac = 0;
        local_1b0 = 0;
        local_1b4 = 0;
        local_19c = 0;
        local_198 = 0;
        local_194 = 0;
        local_1a0 = 0;
        local_188 = 0;
        local_144 = 0;
        FUN_000556e0();
        local_184 = 1;
        FUN_00055d30(&local_1e0);
        if ((local_188 != 0) && ((local_188 & 1) == 0)) {
          iVar11 = local_188 * 0x19660d;
          local_188 = 0;
          iVar12 = *(int *)(&DAT_00414da0 + (iVar11 + 0x3c6ef35fU >> 0x15) * 4);
          piVar13 = (int *)(&DAT_00414da0 + (iVar11 + 0x3c6ef35fU >> 0x15) * 4);
          while (iVar12 != 0) {
            piVar1 = (int *)*piVar13;
            if (piVar1 == &local_18c) {
              *piVar13 = *(int *)*piVar13;
              break;
            }
            piVar13 = piVar1;
            iVar12 = *piVar1;
          }
        }
        local_1c4 = &PTR_FUN_003a4f64;
        if ((local_1a4 != 0) && ((local_1a4 & 1) == 0)) {
          iVar11 = FUN_0008f690();
          local_1a4 = 0;
          iVar12 = *(int *)(&DAT_00414da0 + iVar11 * 4);
          piVar13 = (int *)(&DAT_00414da0 + iVar11 * 4);
          while (iVar12 != 0) {
            piVar1 = (int *)*piVar13;
            if (piVar1 == &local_1a8) {
              *piVar13 = *(int *)*piVar13;
              break;
            }
            piVar13 = piVar1;
            iVar12 = *piVar1;
          }
        }
        if ((local_1b8 != 0) && ((local_1b8 & 1) == 0)) {
          iVar11 = FUN_0008f690();
          local_1b8 = 0;
          iVar12 = *(int *)(&DAT_00414da0 + iVar11 * 4);
          piVar13 = (int *)(&DAT_00414da0 + iVar11 * 4);
          while (iVar12 != 0) {
            piVar1 = (int *)*piVar13;
            if (piVar1 == &local_1bc) {
              *piVar13 = *(int *)*piVar13;
              break;
            }
            piVar13 = piVar1;
            iVar12 = *piVar1;
          }
        }
        local_1e0 = &PTR_FUN_003a4f68;
        if ((local_1cc != 0) && ((local_1cc & 1) == 0)) {
          iVar11 = local_1cc * 0x19660d;
          local_1cc = 0;
          iVar12 = *(int *)(&DAT_00414da0 + (iVar11 + 0x3c6ef35fU >> 0x15) * 4);
          piVar13 = (int *)(&DAT_00414da0 + (iVar11 + 0x3c6ef35fU >> 0x15) * 4);
          while (iVar12 != 0) {
            piVar1 = (int *)*piVar13;
            if (piVar1 == &local_1d0) {
              *piVar13 = *(int *)*piVar13;
              break;
            }
            piVar13 = piVar1;
            iVar12 = *piVar1;
          }
        }
      }
      local_1f0 = *(int *)(in_ECX + 0x428) + *(int *)(in_ECX + 0x42c);
      uVar9 = local_1f0 - 1;
      if (*(uint *)(in_ECX + 0x424) <= uVar9) {
        uVar9 = uVar9 - *(uint *)(in_ECX + 0x424);
      }
      uVar2 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + uVar9 * 4) + 0x5c);
      if (local_215 != false) {
        iVar12 = *(int *)(in_ECX + 0x44);
        if (((iVar12 != 0) && (-1 < iVar12)) && (iVar12 < 0x87)) {
          iVar12 = iVar12 * 0x40 + *(int *)(in_ECX + 0x4c);
          local_1e8 = *(undefined4 *)(iVar12 + 0x18);
          local_1e4 = *(undefined4 *)(iVar12 + 0x1c);
          (**(code **)(iVar12 + 0x10))();
        }
      }
      uVar3 = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0x44) = uVar2;
      if (local_216 != false) {
        (**(code **)(*(int *)(in_ECX + 0x40) + 4))();
        iVar12 = *(int *)(in_ECX + 0x44);
        if (((iVar12 != 0) && (-1 < iVar12)) && (iVar12 < 0x87)) {
          iVar11 = *(int *)(in_ECX + 0x4c);
          iVar12 = iVar12 * 0x40;
          local_1e8 = *(undefined4 *)(iVar12 + 8 + iVar11);
          local_1e4 = *(undefined4 *)(iVar12 + iVar11 + 0xc);
          iVar12 = (**(code **)(iVar12 + iVar11))();
          if (iVar12 != 0) goto LAB_0003ac60;
        }
        *(undefined4 *)(in_ECX + 0x44) = uVar3;
        if (*(int *)(in_ECX + 0x42c) != 0) {
          uVar9 = *(int *)(in_ECX + 0x42c) + -1 + *(int *)(in_ECX + 0x428);
          if (*(uint *)(in_ECX + 0x424) <= uVar9) {
            uVar9 = uVar9 - *(uint *)(in_ECX + 0x424);
          }
          puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0x420) + uVar9 * 4);
          if (puVar4[0x16] != 0) {
            FUN_0008f6e0();
          }
          puVar4[7] = &PTR_FUN_003a4f64;
          FUN_00012080();
          FUN_00012080();
          *puVar4 = &PTR_FUN_003a4f68;
          FUN_0001fe80();
          piVar13 = (int *)(in_ECX + 0x42c);
          *piVar13 = *piVar13 + -1;
          if (*piVar13 == 0) {
            *(undefined4 *)(in_ECX + 0x428) = 0;
          }
        }
        goto LAB_0003aea0;
      }
    } while( true );
  }
  goto LAB_0003b294;
LAB_0003b1d0:
  if ((((*(uint *)(local_20c + 0x88) & 0x1000) != 0) &&
      ((*(uint *)(local_20c + 0x88) & 0x4000) == 0)) &&
     (((*(byte *)(&DAT_004a5908 + *(int *)(local_20c + 0x5c)) & 0x20) == 0 &&
      ((iVar12 = FUN_000125b0(), *(int *)(iVar12 + 0x24) == 2 && (*(int *)(iVar12 + 0xc) == 0))))))
  {
    FUN_00055aa0();
    cVar7 = FUN_00022ef0();
    FUN_00055b10();
    while( true ) {
      FUN_00055aa0();
      cVar8 = FUN_00022eb0();
      iVar12 = FUN_00055aa0();
      uVar2 = *(undefined4 *)(iVar12 + 0x5c);
      if (cVar7 != '\0') {
        FUN_00022f70();
      }
      uVar3 = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0x44) = uVar2;
      if (cVar8 == '\0') break;
      (**(code **)(*(int *)(in_ECX + 0x40) + 4))();
      iVar12 = FUN_00022f30();
      if (iVar12 != 0) break;
      *(undefined4 *)(in_ECX + 0x44) = uVar3;
      FUN_00055b10();
    }
  }
LAB_0003b294:
  do {
    iVar12 = *(int *)(in_ECX + 0x40c);
    if ((iVar12 == 0) || (*(int *)(in_ECX + 0x410) - iVar12 >> 2 == 0)) {
LAB_0003b37d:
      if ((*(int *)(in_ECX + 0x40c) != 0) &&
         (*(int *)(in_ECX + 0x410) - *(int *)(in_ECX + 0x40c) >> 2 != 0)) {
        piVar13 = (int *)FUN_0001ba10();
        iVar12 = *piVar13;
        if (*(int *)(in_ECX + 0x42c) != 0) {
          iVar11 = FUN_00055aa0();
          uVar9 = *(uint *)(iVar11 + 0x88);
          uVar10 = uVar9 >> 0xd & 1;
          if ((((uVar10 != 0) || ((uVar9 & 0x4000) != 0)) ||
              ((*(byte *)(&DAT_004a5908 + *(int *)(iVar11 + 0x5c)) & 0x20) != 0)) &&
             ((uVar9 & 0x100) == 0)) {
            return;
          }
          if (((uVar10 == 0) || (*(char *)(iVar11 + 0x19) != '\0')) &&
             ((iVar11 != -0x1c &&
              ((iVar14 = FUN_000125b0(), *(int *)(iVar12 + 4) == *(int *)(iVar14 + 4) &&
               (*(int *)(in_ECX + 0x44) == *(int *)(iVar11 + 0x5c))))))) {
            FUN_000125b0();
            cVar7 = FUN_00012220();
            if (cVar7 != '\0') {
              FUN_00022e90();
              return;
            }
          }
        }
        FUN_0003b580(in_ECX);
      }
      return;
    }
    if (*(char *)(in_ECX + 0x419) != '\0') {
      if (4 < (int)(*(int *)(in_ECX + 0x410) - iVar12 & 0xfffffffcU)) {
        FUN_0001d4c0(iVar12,*(int *)(in_ECX + 0x410),*(undefined1 *)(in_ECX + 0x418),0,0);
      }
      *(undefined1 *)(in_ECX + 0x419) = 0;
    }
    if ((*(int *)(**(int **)(in_ECX + 0x40c) + 0x24) != 2) ||
       (*(int *)(**(int **)(in_ECX + 0x40c) + 0xc) != 0)) goto LAB_0003b37d;
    iVar12 = *(int *)(in_ECX + 0x40c);
    if ((iVar12 != 0) && (*(int *)(in_ECX + 0x410) - iVar12 >> 2 != 0)) {
      if (*(char *)(in_ECX + 0x419) != '\0') {
        if (4 < (int)(*(int *)(in_ECX + 0x410) - iVar12 & 0xfffffffcU)) {
          FUN_0001d4c0(iVar12,*(int *)(in_ECX + 0x410),*(undefined1 *)(in_ECX + 0x418),0,0);
        }
        *(undefined1 *)(in_ECX + 0x419) = 0;
      }
      puVar4 = (undefined4 *)**(int **)(in_ECX + 0x40c);
      FUN_0001ba60();
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
  } while( true );
}

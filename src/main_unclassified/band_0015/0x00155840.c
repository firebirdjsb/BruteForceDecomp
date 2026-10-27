/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7B7FFD8D854213AFA2EF6FFE9CE142C332CD7EC3A27B05BCCE526F83A1A78C6
 * Entry: 0x00155840, Ghidra index: 4470, label: FUN_00155840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1e8;
extern uint32_t DAT_003f7f20;
extern uint32_t DAT_0040c880;
extern uint32_t DAT_0046b2e8;
extern uint32_t DAT_004a8ce0;
extern uint32_t _DAT_0040c88c;
extern uint32_t _DAT_0040c890;
extern uint32_t _DAT_0040c894;
extern uint32_t _DAT_0040c898;
extern uint32_t _DAT_0040c89c;
extern uint32_t _DAT_0040c8a0;
extern uint32_t _DAT_0040c8a4;
extern uint32_t _DAT_0040c8a8;
extern uint32_t _DAT_0040c8ac;
extern uint32_t _DAT_0040c8b0;
extern uint32_t *_DAT_0040c8b4;
extern uint32_t _DAT_0040c8b8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00155840(int *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int in_ECX;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float10 fVar15;
  undefined1 in_XMM0 [16];
  undefined1 auVar16 [16];
  float local_6c [5];
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  float local_10;
  int local_c;
  float local_8;
  
  iVar11 = *(int *)(*(int *)(in_ECX + 0xc) + 4);
  if ((1 << ((byte)iVar11 & 0x1f) & 0x40015680U) != 0) {
    return;
  }
  if ((*(byte *)(in_ECX + 0x26) & 1) != 0) {
    return;
  }
  if (((iVar11 == 0x11) && (*(int *)(in_ECX + 0x9c) != 0)) &&
     (*(int *)(in_ECX + 0xa0) == -0x40800000)) {
    return;
  }
  local_14 = 0.0;
  if (iVar11 == 4) {
    bVar1 = *(byte *)(in_ECX + 0x94);
    if ((bVar1 & 0x40) == 0) {
      return;
    }
    if ((bVar1 & 8) != 0) {
      return;
    }
    if ((char)bVar1 < '\0') {
      local_14 = *(float *)(in_ECX + 0xa0);
      if (local_14 == 0.0) {
        return;
      }
      if ((bVar1 & 1) == 0) {
        return;
      }
      local_18 = (uint)*(ushort *)((int)local_14 + 0x74);
      goto LAB_001558f3;
    }
    if (*(int *)(*(int *)(in_ECX + 0xc) + 0x2c) != 1) {
      return;
    }
  }
  /* XBE 0x001558E8 MOV CX,[EAX+0x22] and 0x001558EC
   * MOV WORD [EBP-0x14],CX preserve upper 16 bits in this
   * original 32-bit guest stack word. 0x001558F0 reloads ESI.
   * The other branch writes a zero-extended 16-bit selector
   * with XOR ESI,ESI; MOV SI,[ECX+0x74]; MOV [EBP-0x14],ESI.
   * Host stack frame initial upper bits on this branch remain
   * ABI_UNVERIFIED; this operation does NOT forcibly clear them. */
  local_18 = (local_18 & UINT32_C(0xffff0000)) |
             (uint32_t)*(const uint16_t *)(uintptr_t)(in_ECX + 0x22);
LAB_001558f3:
  uVar5 = local_18;
  local_c = in_ECX;
  uVar7 = FUN_0006e6b0(0x7fffffff,&LAB_0014f480,in_ECX);
  if ((uVar7 & 2) == 0) {
    if ((uVar7 & 4) == 0) {
      if ((((uVar7 & 1) != 0) && (iVar11 != 3)) &&
         (iVar11 = FUN_0006ea50(uVar5), iVar11 < DAT_003f7f20)) {
        return;
      }
      iVar11 = FUN_001556e0(local_c,param_1);
      if (iVar11 < 3) {
        return;
      }
    }
    else if ((uVar7 & 1) == 0) {
      return;
    }
    local_6c[3] = 1.0;
    cVar6 = FUN_00022bc0(&local_8);
    if (cVar6 != '\0') {
      pfVar8 = (float *)(**(code **)(param_1[0x12] + 0xc))();
      if (local_14 != 0.0) {
        pfVar9 = (float *)FUN_000ba560();
        local_6c[2] = pfVar9[2];
        local_6c[1] = pfVar9[1];
        local_6c[0] = *pfVar9;
        local_30 = local_6c[0] - *pfVar8;
        local_2c = local_6c[1] - pfVar8[1];
        local_28 = local_6c[2] - pfVar8[2];
        local_20 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
        if (*(int *)(*(int *)(local_c + 0xc) + 0x2c) == 3) {
          auVar16 = rsqrtss(in_XMM0,local_20);
          local_1c = auVar16._0_4_;
          fVar15 = (float10)(**(code **)(param_1[0x12] + 0x28))();
          fVar15 = fVar15 * (float10)local_1c * (float10)_DAT_0040c8b8;
          if (fVar15 < (float10)1.0) {
            local_6c[0] = (float)((float10)local_30 * fVar15 + (float10)*pfVar8);
            local_6c[1] = (float)((float10)local_2c * fVar15 + (float10)pfVar8[1]);
            local_6c[2] = (float)(fVar15 * (float10)local_28 + (float10)pfVar8[2]);
          }
        }
        else {
          auVar16 = rsqrtss(in_XMM0,local_20);
          local_1c = auVar16._0_4_;
          fVar2 = local_1c * 0.25;
          local_2c = fVar2 * local_2c;
          local_28 = fVar2 * local_28;
          local_6c[0] = local_6c[0] - local_30 * fVar2;
          local_6c[1] = local_6c[1] - local_2c;
          local_6c[2] = local_6c[2] - local_28;
        }
        (**(code **)(param_1[0x12] + 0x14))();
        FUN_000621c0();
        piVar12 = param_1 + 0x12;
        local_1c = local_28 * local_28 * _DAT_0040c8b4;
        fVar15 = (float10)(**(code **)(param_1[0x12] + 0x34))();
        local_20 = (float)fVar15;
        fVar15 = (float10)(**(code **)(*piVar12 + 0x30))();
        local_20 = (float)(fVar15 * (float10)local_20);
        fVar15 = (float10)(**(code **)(*piVar12 + 0x24))();
        local_20 = (float)(fVar15 * (float10)local_20);
        fVar15 = (float10)(**(code **)(*piVar12 + 0x24))();
        fVar15 = (float10)local_1c / (fVar15 * (float10)local_20 * (float10)-3.1415927);
        local_20 = (float)fVar15;
        in_XMM0 = rsqrtss(auVar16,local_20);
        local_1c = in_XMM0._0_4_;
        local_8 = local_1c * (float)fVar15;
      }
      (**(code **)(*param_1 + 0x40))();
      local_30 = *pfVar8 - local_6c[0];
      local_2c = pfVar8[1] - local_6c[1];
      local_28 = pfVar8[2] - local_6c[2];
      local_14 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
      if (local_14 <= 0.0) {
        local_10 = 0.0;
      }
      else {
        in_XMM0 = rsqrtss(in_XMM0,local_14);
        local_10 = in_XMM0._0_4_;
        local_1c = local_10;
      }
      local_20 = local_10 * local_14;
      fVar15 = (float10)(**(code **)(param_1[0x12] + 0x24))();
      local_1c = (float)fVar15;
      fVar15 = (float10)(**(code **)(param_1[0x12] + 0x38))();
      local_14 = (float)fVar15;
      fVar15 = (float10)(**(code **)(param_1[0x12] + 0x3c))();
      auVar16._4_12_ = in_XMM0._4_12_;
      auVar16._0_4_ =
           SQRT((float)((float10)local_1c * (float10)local_1c +
                       (float10)local_14 * (float10)local_14 + fVar15 * fVar15));
      local_1c = local_20 - local_8;
      if ((local_1c < auVar16._0_4_ == (local_1c == auVar16._0_4_)) &&
         (local_14 = auVar16._0_4_, local_24 = FUN_0006e7f0(), (short)local_24 != 0)) {
        local_30 = local_10 * local_30;
        local_2c = local_10 * local_2c;
        local_28 = local_10 * local_28;
        local_6c[0] = local_30 * local_8 + local_6c[0];
        local_6c[1] = local_2c * local_8 + local_6c[1];
        local_6c[2] = local_28 * local_8 + local_6c[2];
        local_20 = (local_20 + local_8) / local_1c;
        auVar16 = rsqrtss(auVar16,local_20);
        local_1c = auVar16._0_4_;
        local_10 = local_1c * local_8;
        local_50 = 0;
        local_40 = 0;
        pfVar8 = (float *)FUN_0001fc40();
        fVar2 = local_2c * *pfVar8 - local_30 * pfVar8[1];
        fVar3 = local_30 * pfVar8[2] - local_28 * *pfVar8;
        fVar4 = local_28 * pfVar8[1] - local_2c * pfVar8[2];
        auVar16 = rsqrtss(auVar16,fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
        local_14 = auVar16._0_4_;
        fVar4 = fVar4 * local_14;
        fVar3 = fVar3 * local_14;
        fVar2 = fVar2 * local_14;
        local_1c = local_30 * fVar3 - fVar4 * local_2c;
        local_20 = fVar4 * local_28 - fVar2 * local_30;
        local_4c = (fVar2 * local_2c - fVar3 * local_28) * local_10;
        local_48 = local_20 * local_10;
        local_44 = local_1c * local_10;
        local_6c[4] = fVar4 * local_10;
        local_58 = fVar3 * local_10;
        local_54 = fVar2 * local_10;
        if (((byte)DAT_0037bd48 & 0x10) == 0) {
          pfVar8 = local_6c;
          pfVar9 = (float *)&DAT_0037e1e8;
          for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
            *pfVar9 = *pfVar8;
            pfVar8 = pfVar8 + 1;
            pfVar9 = pfVar9 + 1;
          }
        }
        D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
        local_1c = 1.0;
        local_20 = -1.0;
        if ((DAT_004a8ce0 & 1) == 0) {
          DAT_004a8ce0 = DAT_004a8ce0 | 1;
          _DAT_0040c88c = 0xbf800000;
          _DAT_0040c890 = 0xbf800000;
          _DAT_0040c894 = 0x3f800000;
          _DAT_0040c898 = 0xbf800000;
          _DAT_0040c89c = 0x3f800000;
          _DAT_0040c8a0 = 0x3f800000;
          _DAT_0040c8a4 = 0xbf800000;
          _DAT_0040c8a8 = 0x3f800000;
          _DAT_0040c8ac = 0x417fc;
          _DAT_0040c8b0 = 0;
        }
        FUN_0015b950(&DAT_0046b2e8);
        FUN_002386d0();
        puVar10 = (undefined4 *)FUN_003721b0();
        puVar13 = &DAT_0040c880;
        puVar14 = puVar10;
        for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        *D3D8__D3D_g_pDevice = puVar10 + 0xd;
        D3D8LTCG__D3DDevice_EndVisibilityTest_0();
        FUN_0006e5d0();
      }
    }
  }
  return;
}

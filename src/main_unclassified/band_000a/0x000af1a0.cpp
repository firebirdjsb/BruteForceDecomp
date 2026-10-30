/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5359FFA6C8E65BC432570A6D7218903A70FBE089418D6C207DC53FDE44F7E6B9
 * Entry: 0x000af1a0, Ghidra index: 2092, label: FUN_000af1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040d730;
/* Original Xbox guest pointer global 0x0037DD88:
 * XBE 0x000AF5B7 MOV EDX,[0x0037DD88] followed by
 * 0x000AF5F6 MOV [EDX],EAX, then
 * 0x000AF813 MOV ECX,[0x0037DD88] followed by
 * 0x000AF829 MOV [ECX],EAX.
 * The pointee is a 32-bit guest device-command cursor slot;
 * it is NOT a host Direct3D device handle. Original global
 * memory translation and native platform ABI remain unverified. */
extern uint32_t *D3D8__D3D_g_pDevice;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000af1a0(int param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float unaff_EBX;
  int *unaff_ESI;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float10 fVar14;
  int *piStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  int *piStack_120;
  int iStack_11c;
  float local_108;
  char local_101;
  float local_100;
  int local_fc;
  float local_f8;
  int *local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0 [55];
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iStack_11c = 0xaf1c2;
    fVar14 = (float10)FUN_000bb170();
    if (fVar14 != (float10)0.0) {
      local_f0 = _DAT_0040d730 / param_5;
      local_e0[0] = 1.0;
      local_e0[1] = 1.0;
      iVar10 = 0;
      local_101 = '\0';
      param_3 = (float)(int)*(short *)(param_1 + 8) + param_3;
      local_e4 = (float)(int)*(short *)(param_1 + 10) + param_4;
      local_e8 = (float)(int)*(short *)(param_1 + 0xe) + param_3;
      pfVar12 = local_e0 + 2;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar12 = 0.0;
        pfVar12 = pfVar12 + 1;
      }
      local_e0[10] = 0.0;
      local_e0[0xb] = 1.0;
      pfVar12 = local_e0 + 0xc;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar12 = 0.0;
        pfVar12 = pfVar12 + 1;
      }
      local_e0[0x14] = 0.0;
      local_e0[0x15] = 0.0;
      local_e0[0x13] = (float)(int)*(short *)(param_1 + 0xc) + local_e4;
      pfVar12 = local_e0 + 0x16;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar12 = 0.0;
        pfVar12 = pfVar12 + 1;
      }
      local_e0[0x1e] = 1.0;
      local_e0[0x1f] = 0.0;
      pfVar12 = local_e0 + 0x20;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar12 = 0.0;
        pfVar12 = pfVar12 + 1;
      }
      local_fc = (int)(fVar14 * (float10)255.0) << 0x18;
      uVar11 = 0;
      local_f4 = (int *)0x0;
      iVar8 = 0;
      local_108 = 1.0 / (float)*(int *)(param_1 + 0x88);
      local_100 = local_e4;
      local_e0[8] = param_3;
      local_e0[0x12] = param_3;
      local_e0[0x1c] = local_e8;
      while ((iVar1 = *(int *)(param_1 + 0x5c), iVar1 != 0 &&
             (uVar11 < (uint)(*(int *)(param_1 + 0x60) - iVar1 >> 5)))) {
        piVar9 = (int *)(iVar1 + iVar8);
        if ((*(int *)(iVar1 + 0x18 + iVar8) == 0) && (iVar10 < 3)) {
          fVar2 = local_108 * (float)piVar9[7];
          iVar10 = iVar10 + 1;
          local_ec = (float)(int)*(short *)(param_1 + 0xe);
          uVar11 = uVar11 + 1;
          local_101 = '\x01';
          iVar8 = iVar8 + 0x20;
          local_100 = 1.0 / (local_ec * fVar2);
          fVar3 = ((float)*piVar9 - (float)*(int *)(param_1 + 0xd4) * fVar2) +
                  (float)*(int *)(param_1 + 0xd4);
          local_f8 = (float)(int)*(short *)(param_1 + 0xc);
          fVar2 = ((float)piVar9[1] - (float)*(int *)(param_1 + 0xd8) * fVar2) +
                  (float)*(int *)(param_1 + 0xd8);
          fVar4 = -(fVar3 * local_100);
          local_e0[iVar10 * 2 + 10] = fVar4;
          fVar5 = -(fVar2 * local_100);
          local_e0[iVar10 * 2 + 0xb] = fVar5;
          fVar3 = (local_ec - fVar3) * local_100;
          local_e0[iVar10 * 2] = fVar3;
          local_e0[iVar10 * 2 + 1] = fVar5;
          local_e0[iVar10 * 2 + 0x1e] = fVar3;
          fVar2 = ((float)(int)local_f8 - fVar2) * local_100;
          local_e0[iVar10 * 2 + 0x1f] = fVar2;
          local_e0[iVar10 * 2 + 0x14] = fVar4;
          local_e0[iVar10 * 2 + 0x15] = fVar2;
        }
        else {
          uVar11 = uVar11 + 1;
          iVar8 = iVar8 + 0x20;
          local_f4 = piVar9;
        }
      }
      if ((local_f4 != (int *)0x0) || (local_101 != '\0')) {
        piStack_120 = *(int **)(param_1 + 0x20);
        iStack_11c = 0;
        uStack_124 = 0xaf435;
        local_e0[9] = local_e4;
        local_e0[0x1d] = local_e0[0x13];
        (**(code **)(*piStack_120 + 0x38))();
        piStack_128 = *(int **)(param_1 + 0x30);
        uStack_124 = 1;
        piStack_12c = (int *)0xaf443;
        (**(code **)(*piStack_128 + 0x38))();
        piStack_12c = &iStack_11c;
        iStack_11c = 3;
        FUN_0006a610();
        piStack_12c = &iStack_11c;
        iStack_11c = 3;
        FUN_0006a610();
        piStack_12c = (int *)0x2;
        (**(code **)(**(int **)(param_1 + 0x30) + 0x38))(*(int **)(param_1 + 0x30));
        uStack_124 = 3;
        FUN_0006a610(&uStack_124);
        uStack_124 = 3;
        FUN_0006a610(&uStack_124);
        (**(code **)(**(int **)(param_1 + 0x30) + 0x38))(*(int **)(param_1 + 0x30),3);
        piStack_12c = (int *)0x3;
        FUN_0006a610(&piStack_12c);
        piStack_12c = (int *)0x3;
        FUN_0006a610(&piStack_12c);
        FUN_000a4a60(7);
        FUN_000a4d00();
        local_e0[0x1e] = 0.6;
        local_e0[0x1f] = 0.4;
        local_e0[0x20] = 1.0;
        local_e0[0x21] = 1.0;
        local_e0[0x22] = 0.4;
        local_e0[0x23] = 0.2;
        local_e0[0x24] = 0.2;
        local_e0[0x25] = 0.0;
        FUN_000a4d80();
        D3D8LTCG__D3DDevice_SetVertexDataColor(3,iStack_11c);
        /* XBE 0x000AF41E reads BYTE [ESP+0x17], the same guest byte
         * initialized at 0x000AF205 and set at 0x000AF359. This is
         * local_101, not the high byte of a later outgoing argument. */
        if (local_101 != '\0') {
          FUN_002386d0();
          puVar6 = (undefined4 *)FUN_003721b0();
          puVar7 = D3D8__D3D_g_pDevice;
          *puVar6 = 0x417fc;
          puVar6[1] = 8;
          puVar6[2] = 0x40a01818;
          pfVar12 = &local_108;
          pfVar13 = (float *)(puVar6 + 3);
          for (iVar8 = 0x28; iVar8 != 0; iVar8 = iVar8 + -1) {
            *pfVar13 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            pfVar13 = pfVar13 + 1;
          }
          puVar6[0x2b] = 0x417fc;
          puVar6[0x2c] = 0;
          *puVar7 = puVar6 + 0x2d;
        }
        piVar9 = *(int **)(param_1 + 0x38);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0x38))(piVar9,2);
        }
        local_e0[0x26] = 0.4;
        local_e0[0x27] = 0.4;
        local_e0[0x28] = 0.4;
        local_e0[0x29] = 1.0;
        local_e0[0x2a] = 0.3;
        local_e0[0x2b] = 0.3;
        local_e0[0x2c] = 0.3;
        local_e0[0x2d] = 0.0;
        FUN_000a4d80();
        if (unaff_ESI != (int *)0x0) {
          fVar2 = (float)piStack_128 * (float)unaff_ESI[7];
          local_ec = 1.0;
          local_e8 = 0.0;
          local_e4 = 0.0;
          local_e0[7] = 1.0;
          local_e0[8] = 0.0;
          local_e0[9] = 0.0;
          local_e0[0x11] = 0.0;
          piStack_120 = (int *)(1.0 / ((float)(int)*(short *)(param_1 + 0xe) * fVar2));
          local_e0[0x12] = 0.0;
          local_e0[0x13] = 0.0;
          local_e0[0x1b] = 0.0;
          local_e0[0x1c] = 0.0;
          local_e0[0x1d] = 0.0;
          piStack_128 = (int *)(((float)*unaff_ESI - (float)*(int *)(param_1 + 0xd4) * fVar2) +
                               (float)*(int *)(param_1 + 0xd4));
          iStack_11c = (int)*(short *)(param_1 + 0xc);
          piStack_12c = (int *)(((float)unaff_ESI[1] - (float)*(int *)(param_1 + 0xd8) * fVar2) +
                               (float)*(int *)(param_1 + 0xd8));
          local_f8 = ((float)(int)*(short *)(param_1 + 0xe) - (float)piStack_128) *
                     (float)piStack_120;
          local_f4 = (int *)-((float)piStack_12c * (float)piStack_120);
          local_f0 = unaff_EBX + 1.0;
          local_e0[4] = -((float)piStack_128 * (float)piStack_120);
          local_e0[6] = -unaff_EBX;
          local_e0[0xf] = ((float)iStack_11c - (float)piStack_12c) * (float)piStack_120;
          local_e0[5] = (float)local_f4;
          local_e0[0xe] = local_e0[4];
          local_e0[0x10] = local_e0[6];
          local_e0[0x18] = local_f8;
          local_e0[0x19] = local_e0[0xf];
          local_e0[0x1a] = local_f0;
          FUN_002386d0();
          puVar7 = (undefined4 *)FUN_003721b0();
          *puVar7 = 0x417fc;
          puVar7[1] = 8;
          puVar7[2] = 0x40a01818;
          pfVar12 = &local_108;
          pfVar13 = (float *)(puVar7 + 3);
          for (iVar8 = 0x28; puVar6 = D3D8__D3D_g_pDevice, iVar8 != 0; iVar8 = iVar8 + -1) {
            *pfVar13 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            pfVar13 = pfVar13 + 1;
          }
          puVar7[0x2b] = 0x417fc;
          puVar7[0x2c] = 0;
          *puVar6 = puVar7 + 0x2d;
          return;
        }
      }
    }
  }
  return;
}

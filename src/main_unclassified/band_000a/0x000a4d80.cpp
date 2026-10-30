/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B3FA0CB6F125CE68744553EA73836B7589301B67F78EDECD2FA8F4ED0703C33
 * Entry: 0x000a4d80, Ghidra index: 1963, label: FUN_000a4d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_packed_color_sse.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_003e2534;
extern uint32_t DAT_003f7c68;
/* Original XBE 0x000A4E4B, 0x000A4E59, 0x000A4E6E,
 * 0x000A4EB6-0x000A4EBD: guest32 DWORD loads/stores.
 * Linker guest-address relocation remains ABI_UNVERIFIED. */
extern uint32_t D3D8__D3D_g_RenderState[]; /* indexed DWORD store, guest 0x0037DD98 */
extern uint32_t D3D8__D3D_g_pDevice;      /* guest DWORD at 0x0037DD88 */
extern uint32_t D3D8__D3DRS_PSTextureModes; /* guest DWORD at 0x0037DFB8 */
extern uint32_t D3D8__D3DRS_FillMode;      /* guest DWORD at 0x0037DFC4 */
extern uint32_t D3D8__D3DRS_BackFillMode;  /* guest DWORD at 0x0037DFC8 */
extern uint32_t PTR_LAB_003a1cd8;
extern uint8_t _DAT_003f7c70[16];
extern uint8_t _DAT_003f7c80[16];
extern uint8_t _DAT_00469af0[16];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a4d80(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int in_ECX;
  undefined1 (*in_EDX) [16];
  uint uVar5;
  int local_14;
  undefined1 (*local_c) [16];
  int *local_8;
  
  if (in_ECX != 0) {
    iVar3 = in_EAX * 0x4c;
    local_14 = in_ECX;
    local_c = in_EDX;
    do {
      iVar2 = DAT_003f7c68;
      /* XBE 0x000A4DA3-0x000A4DE1: MOVUPS, MINPS, MAXPS, MULPS,
       * four CVTSS2SI with SHUFPS 0x39 between lanes. Guest data
       * symbol relocation and implicit EAX/ECX/EDX ABI are unverified. */
      uVar4 = bf_x86_pack_color_sse(*local_c, _DAT_003f7c70,
                                     _DAT_00469af0, _DAT_003f7c80);
      uVar5 = 0;
      if (*(int *)(&DAT_003e2534 + iVar3 + DAT_003f7c68 * 0x4c4) != 0) {
        local_8 = (int *)(&DAT_003e2534 + iVar3 + 4 + DAT_003f7c68 * 0x4c4);
        do {
          iVar1 = *local_8;
          if (iVar1 < 0x5c) {
            D3D8LTCG__D3DDevice_SetRenderState_Simple();
          }
          else if (iVar1 < 0x88) {
            DAT_0037dd90 = DAT_0037dd90 | (uint)(&PTR_LAB_003a1cd8)[iVar1];
            D3D8__D3D_g_RenderState[iVar1] = uVar4;
          }
          else if (iVar1 == 0x88) {
            *(uint *)(D3D8__D3D_g_pDevice + 0x378) = uVar4;
            DAT_0037dd90 = DAT_0037dd90 | 0x4000;
            D3D8__D3DRS_PSTextureModes = uVar4;
          }
          else if (iVar1 == 0x89) {
            D3D8LTCG__D3DDevice_SetRenderState_VertexBlend(uVar4);
          }
          else if (iVar1 == 0x8a) {
            D3D8LTCG__D3DDevice_SetRenderState_FogColor(uVar4);
          }
          else if (iVar1 == 0x8b) {
            D3D8LTCG__D3DDevice_SetRenderState_FillMode(uVar4);
          }
          else if (iVar1 == 0x8c) {
            D3D8__D3DRS_BackFillMode = uVar4;
            D3D8LTCG__D3DDevice_SetRenderState_FillMode(D3D8__D3DRS_FillMode);
          }
          else if (iVar1 == 0x8d) {
            D3D8LTCG__D3DDevice_SetRenderState_TwoSidedLighting(uVar4);
          }
          else if (iVar1 == 0x8e) {
            D3D8LTCG__D3DDevice_SetRenderState_NormalizeNormals(uVar4);
          }
          else if (iVar1 == 0x8f) {
            D3D8LTCG__D3DDevice_SetRenderState_ZEnable(uVar4);
          }
          else if (iVar1 == 0x90) {
            D3D8LTCG__D3DDevice_SetRenderState_StencilEnable(uVar4);
          }
          else if (iVar1 == 0x91) {
            D3D8LTCG__D3DDevice_SetRenderState_StencilFail(uVar4);
          }
          else if (iVar1 == 0x93) {
            D3D8LTCG__D3DDevice_SetRenderState_CullMode(uVar4);
          }
          else if (iVar1 == 0x92) {
            D3D8LTCG__D3DDevice_SetRenderState_FrontFace(uVar4);
          }
          else if (iVar1 == 0x94) {
            D3D8LTCG__D3DDevice_SetRenderState_TextureFactor(uVar4);
          }
          else if (iVar1 == 0x95) {
            D3D8LTCG__D3DDevice_SetRenderState_ZBias(uVar4);
          }
          else if (iVar1 == 0x96) {
            D3D8LTCG__D3DDevice_SetRenderState_LogicOp(uVar4);
          }
          else if (iVar1 == 0x97) {
            D3D8LTCG__D3DDevice_SetRenderState_EdgeAntiAlias(uVar4);
          }
          else if (iVar1 == 0x98) {
            D3D8LTCG__D3DDevice_SetRenderState_MultiSampleAntiAlias(uVar4);
          }
          else if (iVar1 == 0x99) {
            D3D8LTCG__D3DDevice_SetRenderState_MultiSampleMask(uVar4);
          }
          else if (iVar1 == 0x9a) {
            D3D8LTCG__D3DDevice_SetRenderState_MultiSampleMode(uVar4);
          }
          else if (iVar1 == 0x9b) {
            D3D8LTCG__D3DDevice_SetRenderState_MultiSampleRenderTargetMode(uVar4);
          }
          else if (iVar1 == 0x9c) {
            D3D8LTCG__D3DDevice_SetRenderState_ShadowFunc(uVar4);
          }
          else if (iVar1 == 0x9d) {
            D3D8LTCG__D3DDevice_SetRenderState_LineWidth(uVar4);
          }
          else if (iVar1 == 0x9e) {
            D3D8LTCG__D3DDevice_SetRenderState_SampleAlpha(uVar4);
          }
          else if (iVar1 == 0x9f) {
            D3D8LTCG__D3DDevice_SetRenderState_Dxt1NoiseEnable(uVar4);
          }
          else if (iVar1 == 0xa0) {
            D3D8LTCG__D3DDevice_SetRenderState_YuvEnable(uVar4);
          }
          else if (iVar1 == 0xa1) {
            D3D8LTCG__D3DDevice_SetRenderState_OcclusionCullEnable(uVar4);
          }
          else if (iVar1 == 0xa2) {
            D3D8LTCG__D3DDevice_SetRenderState_StencilCullEnable(uVar4);
          }
          else if (iVar1 == 0xa3) {
            D3D8LTCG__D3DDevice_SetRenderState_RopZCmpAlwaysRead(uVar4);
          }
          else if (iVar1 == 0xa4) {
            D3D8LTCG__D3DDevice_SetRenderState_RopZRead(uVar4);
          }
          else if (iVar1 == 0xa5) {
            D3D8LTCG__D3DDevice_SetRenderState_DoNotCullUncompressed(uVar4);
          }
          uVar5 = uVar5 + 1;
          local_8 = local_8 + 1;
        } while (uVar5 < *(uint *)(&DAT_003e2534 + iVar3 + iVar2 * 0x4c4));
      }
      iVar3 = iVar3 + 0x4c;
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

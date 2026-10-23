/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75ACD7D3351DC892DA4A83AC7DE21E3D9D4EFAD304EAD0A9068B0DB23BC72877
 * Entry: 0x00370d50, Ghidra index: 13373, label: D3DDevice_SetTextureStageStateNotInline_0__LTCG_eax1_edx2_ecx3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb60;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_003a1df0;
void D3D8LTCG__D3DDevice_SetTextureStageStateNotInline_0__LTCG_eax1_edx2_ecx3(void)

{
  int in_EAX;
  uint in_ECX;
  int in_EDX;
  
  if (in_EDX < 0xc) {
    (&D3D_g_DeferredTextureState)[in_EAX * 0x20 + in_EDX] = in_ECX;
    DAT_0037dd90 = DAT_0037dd90 | 1 << ((byte)in_EAX & 0x1f);
    return;
  }
  if (in_EDX == 0xc) {
    (&DAT_0037bb60)[in_EAX * 0x20] = in_ECX;
    DAT_0037dd90 = DAT_0037dd90 | (-(uint)(in_ECX < 0x19) & 0xffffbff1) + 0x480f;
    return;
  }
  if (in_EDX < 0x16) {
    DAT_0037dd90 = DAT_0037dd90 | *(uint *)(&DAT_003a1df0 + in_EDX * 4);
    (&D3D_g_DeferredTextureState)[in_EAX * 0x20 + in_EDX] = in_ECX;
    return;
  }
  if (in_EDX == 0x1c) {
    D3DDevice_SetTextureState_TexCoordIndex_4(in_ECX);
    return;
  }
  if (in_EDX == 0x1d) {
    D3DDevice_SetTextureState_BorderColor_0();
    return;
  }
  if (in_EDX == 0x1e) {
    D3DDevice_SetTextureState_ColorKeyColor_0();
    return;
  }
  if (in_EDX < 0x1c) {
    D3DDevice_SetTextureState_BumpEnv_8(in_EDX,in_ECX);
  }
  return;
}

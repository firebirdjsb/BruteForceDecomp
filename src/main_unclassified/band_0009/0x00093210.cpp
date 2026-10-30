/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 302ED959FCF9F5E3F712B813F2DFE778A24DF6C3688F08FBB3E1D2B416122455
 * Entry: 0x00093210, Ghidra index: 1805, label: FUN_00093210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003e2304;
extern uint32_t DAT_00469b1c;
undefined4 FUN_00093210(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint in_stack_0000001c;
  
  if (DAT_00469b1c != 0) {
    return 0;
  }
  if (*(int *)(*(int *)(param_2 + 0xc) + 4) == 0x1fe75072) {
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    iVar2 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar2 * 2]);
    if (0x513 < in_stack_0000001c) {
      uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar1);
      return 1;
    }
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar1);
  }
  return 1;
}

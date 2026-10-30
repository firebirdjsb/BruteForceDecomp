/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 447A54AA76AC47FE074F1ACF69A80400C7D229995D92F1C3B4850AF267EED2B1
 * Entry: 0x000920a0, Ghidra index: 1794, label: FUN_000920a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003e2304;
undefined4 FUN_000920a0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_stack_0000001c;
  undefined4 uVar4;
  
  iVar1 = param_2;
  iVar3 = param_1;
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    if (*(int *)(*(int *)(param_2 + 0xc) + 4) == 0x1fe75072) {
      FUN_0006ec90();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      iVar2 = FUN_000a4cb0();
      D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar2 * 2]);
      if ((*(byte *)(iVar3 + 0x3c) & 2) == 0) {
        D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
        FUN_000907d0();
        if (in_stack_0000001c < 0x514) {
          FUN_00090750(param_3,in_stack_0000001c,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc));
        }
        else {
          uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
          FUN_002386d0();
          D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar4);
        }
        D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
        FUN_000907d0();
        param_1 = 0x203;
        FUN_0006a610(&param_1);
        iVar3 = *(int *)(param_2 + 0x10);
        if (0x513 < in_stack_0000001c) goto LAB_0009210f;
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
      }
      else {
        if (0x513 < in_stack_0000001c) {
          iVar3 = *(int *)(iVar1 + 0x10);
LAB_0009210f:
          uVar4 = *(undefined4 *)(iVar3 + 0xc);
          FUN_002386d0();
          D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar4);
          return 1;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc);
      }
      FUN_00090750(param_3,in_stack_0000001c,uVar4);
    }
  }
  return 1;
}

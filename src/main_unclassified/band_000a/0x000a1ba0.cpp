/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F795200348BA7E0E6445D708978A3E86C6AF51DA12B660B472FB1119B36DE000
 * Entry: 0x000a1ba0, Ghidra index: 1912, label: FUN_000a1ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e238;
extern uint32_t DAT_0038deb0;
extern uint32_t DAT_003e2304;
extern uint32_t *DAT_00469b54;
undefined4 FUN_000a1ba0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint in_stack_0000001c;
  
  iVar4 = 2;
  if (*(int *)(param_2 + 0x24) != 0) {
    iVar4 = 3;
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 4);
  if ((iVar1 == -0x18026bd6) || (iVar1 == -0x16f9b857)) {
    if (iVar4 == 2) {
      iVar4 = 0;
    }
    else {
      iVar4 = 4;
    }
  }
  cVar3 = FUN_000a4a60(iVar4);
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*DAT_00469b54 + 0x30))();
    if (cVar3 != '\0') {
      (**(code **)(*DAT_00469b54 + 0x38))();
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar5 = &DAT_0038deb0;
      puVar6 = &DAT_0037e238;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    if (*(int *)(param_2 + 0x24) == 0) {
      FUN_0006ec90();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    }
    else {
      FUN_00095460(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                   *(int *)(param_2 + 0x24));
    }
    cVar3 = FUN_000a4d00();
    if (cVar3 != '\0') {
      FUN_000a4d80();
    }
    iVar4 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
    if (in_stack_0000001c < 0x514) {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
      return 0;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
  }
  return 1;
}

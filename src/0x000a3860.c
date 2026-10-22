/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 704473C4E93C3205D2E5B18184DC4038D14708CEBC833D735C83B55E3EAE9BC6
 * Entry: 0x000a3860, Ghidra index: 1944, label: FUN_000a3860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1e8;
extern uint32_t DAT_003e2304;
undefined4 FUN_000a3860(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint in_stack_0000001c;
  int in_stack_00000024;
  undefined4 local_28 [4];
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = **(undefined4 **)(param_2 + 0xc);
  uVar4 = 3;
  if ((*(undefined4 **)(param_2 + 0xc))[1] == -0x18026bd6) {
    uVar4 = 4;
  }
  cVar2 = FUN_000a4a60(uVar4);
  if (cVar2 != '\0') {
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    if (*(int *)(param_2 + 0x24) == 0) {
      FUN_0006ec90();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    }
    else {
      FUN_00095460(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                   *(int *)(param_2 + 0x24));
    }
    FUN_000a4d00();
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
    if (piVar1 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar1 + 0x38))(piVar1,0);
    }
    local_28[0] = *(undefined4 *)(param_1 + 0xc);
    local_28[1] = *(undefined4 *)(param_1 + 0x10);
    local_28[3] = *(undefined4 *)(in_stack_00000024 + 0x90);
    local_c = *(undefined4 *)(param_1 + 0x24);
    local_28[2] = *(undefined4 *)(param_1 + 0x14);
    local_18 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x28);
    local_10 = 0;
    local_14 = *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x28);
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar5 = local_28;
      puVar6 = &DAT_0037e1e8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    iVar3 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
    if (0x513 < in_stack_0000001c) {
      uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar4);
      return 1;
    }
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar4);
  }
  return 1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8624D5EAD766EA7347CE1CDAC8905F6126407AE88E4508DCBE896E7F7E08E7F5
 * Entry: 0x00095a10, Ghidra index: 1823, label: FUN_00095a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0006ec90(void);
extern void FUN_000a4d80(void);
extern undefined4 FUN_002386d0(void);

extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e2c8;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004a5bb0;
undefined4 FUN_00095a10(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000020;
  int in_stack_00000024;
  
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    return 1;
  }
  FUN_0006ec90();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  if (in_stack_00000020 == (undefined4 *)0x0) {
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar4 = &DAT_004a5bb0;
      puVar5 = &DAT_0037e2c8;
      for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x18);
  }
  else {
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar4 = &DAT_0037e2c8;
      for (iVar3 = 0xc; in_stack_00000020 = in_stack_00000020 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *in_stack_00000020;
        puVar4 = puVar4 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
  }
  FUN_000a4d80();
  uVar1 = *(uint *)(*(int *)(param_2 + 0xc) + 4);
  if (uVar1 < 0xe7fd942b) {
    if (uVar1 == 0xe7fd942a) {
      iVar3 = 4;
      goto LAB_00095b98;
    }
    if (uVar1 != 0xade1ce7) {
      if (uVar1 == 0x13d18cfc) {
        iVar3 = 3;
        goto LAB_00095b98;
      }
      if (uVar1 == 0x1fe75072) {
        iVar3 = 2;
        goto LAB_00095b98;
      }
    }
  }
  else {
    if (uVar1 == 0xe90647a9) {
      iVar3 = 0;
      goto LAB_00095b98;
    }
    if (uVar1 == 0xef44f398) {
      iVar3 = 8;
      goto LAB_00095b98;
    }
  }
  iVar3 = -1;
LAB_00095b98:
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
  if (in_stack_0000001c < 0x514) {
    uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
    return 1;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
  FUN_002386d0();
  D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
  return 1;
}

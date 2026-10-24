/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF482A310A259F2E677D980C2449EDF526F62A0F6A0349478B1B239CC5E97C69
 * Entry: 0x00099500, Ghidra index: 1846, label: FUN_00099500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
undefined4 FUN_00099500(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_0000001c;
  int *in_stack_00000020;
  int *in_stack_00000024;
  
  cVar2 = FUN_000a4a60(0);
  if (cVar2 != '\0') {
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar4 = (undefined4 *)(param_1 + 0x10);
      puVar5 = &DAT_0037e1b8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  cVar2 = FUN_000a4d00();
  if (cVar2 != '\0') {
    FUN_000a4d80();
  }
  iVar3 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
  if (in_stack_0000001c < 0x514) {
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar1);
  }
  if (in_stack_00000020 != (int *)0x0) {
    FUN_002385a0();
    cVar2 = FUN_000a4a60(0);
    if ((cVar2 != '\0') && (cVar2 = FUN_000a4d00(), cVar2 != '\0')) {
      iVar3 = *in_stack_00000020;
      in_stack_00000024 = (int *)0x1;
  /* XBE-backed stack-slot evidence: original x86 LEA [EBP+0x28]
   * passes the address of the same incoming DWORD that this draft
   * calls in_stack_00000024. The original caller ABI and the
   * callee semantics remain unverified. */
      FUN_0006a610(&in_stack_00000024);
      in_stack_00000024 = (int *)0x1;
      FUN_0006a610(&in_stack_00000024);
      in_stack_00000024 = (int *)0x1;
      FUN_0006a610(&in_stack_00000024);
      if (0 < iVar3) {
        in_stack_00000024 = in_stack_00000020 + 1;
        do {
          FUN_0006edd0(DAT_004698e0);
          FUN_000a4d80();
          if (in_stack_0000001c < 0x514) {
            uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
            FUN_002386d0();
            D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar1);
          }
          else {
            uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
            FUN_002386d0();
            D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar1);
          }
          iVar3 = iVar3 + -3;
          in_stack_00000024 = in_stack_00000024 + 0xc;
        } while (0 < iVar3);
      }
    }
    FUN_00238630();
  }
  return 1;
}

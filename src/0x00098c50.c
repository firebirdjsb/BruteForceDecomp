/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E1676A508E1459D9CF8194C014DEC53CB82B8F0AE71B631829FD4762D527677
 * Entry: 0x00098c50, Ghidra index: 1842, label: FUN_00098c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
undefined4 FUN_00098c50(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  uint in_stack_0000001c;
  int *in_stack_00000020;
  int in_stack_00000024;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(float *)(param_1 + 0x40) != 0.0) {
    pfVar5 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000024 + 0x8c) + 0x48) + 0xc))();
    FUN_00039580();
    fVar3 = (*pfVar5 - local_18) * (*pfVar5 - local_18) +
            (pfVar5[1] - local_14) * (pfVar5[1] - local_14) +
            (pfVar5[2] - local_10) * (pfVar5[2] - local_10);
    fVar1 = *(float *)(*(int *)(param_2 + 0x2c) + 8);
    if (fVar1 * fVar1 < fVar3) {
      fVar1 = *(float *)(*(int *)(param_2 + 0x2c) + 8);
      if ((*(byte *)(*(int *)(in_stack_00000024 + 0x8c) + 0x4c) & 1) == 0) {
        fVar9 = (float10)1.0;
      }
      else {
        fVar8 = (float10)FUN_0006a9f0();
        fVar9 = (float10)FUN_0006aa40();
        fVar9 = (float10)(float)fVar8 / fVar9;
      }
      if (fVar9 * (float10)*(float *)(in_stack_00000024 + 0x994) *
          (float10)*(float *)(param_1 + 0x40) <= (float10)(SQRT(fVar3) - fVar1)) {
        return 1;
      }
    }
  }
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if (in_stack_00000020 != (int *)0x0) {
      FUN_002385a0();
      cVar4 = FUN_000a4a60(2);
      if ((cVar4 != '\0') && (cVar4 = FUN_000a4d00(), cVar4 != '\0')) {
        iVar7 = *in_stack_00000020;
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
        iVar6 = FUN_000a4cb0();
        D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar6 * 2]);
        for (; 0 < iVar7; iVar7 = iVar7 + -3) {
          FUN_0006edd0(DAT_004698e0);
          FUN_000a4d80();
          if (in_stack_0000001c < 0x514) {
            uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
            FUN_002386d0();
            D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
          }
          else {
            uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
            FUN_002386d0();
            D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
          }
        }
      }
      FUN_00238630();
      return 1;
    }
  }
  else {
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    (**(code **)(*(int *)(*(int *)(in_stack_00000024 + 0x8c) + 0x48) + 0xc))();
    if ((*(byte *)(*(int *)(in_stack_00000024 + 0x8c) + 0x4c) & 1) != 0) {
      FUN_0006a9f0();
      FUN_0006aa40();
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    iVar7 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar7 * 2]);
    if (0x513 < in_stack_0000001c) {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
      return 1;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
  }
  return 1;
}

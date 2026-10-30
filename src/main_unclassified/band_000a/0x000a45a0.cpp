/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72312D5C558A6428180A26EF1ABCE968A11B505A8422E9078189FC715632D4C7
 * Entry: 0x000a45a0, Ghidra index: 1956, label: FUN_000a45a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698ea;
void FUN_000a45a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  
  FUN_002385a0();
  (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(*(int **)(param_1 + 0x18));
  FUN_00062280();
  local_8 = 1;
  FUN_0006a610(&local_8);
  local_8 = 1;
  FUN_0006a610(&local_8);
  FUN_000a4a60(5);
  FUN_000a4d00();
  piVar2 = (int *)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x18))();
  iVar1 = param_1;
  param_2 = piVar2[3] - piVar2[1];
  param_1 = piVar2[2] - *piVar2;
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  FUN_000a4d80();
  param_1 = 0;
  FUN_0006a610(&param_1);
  param_1 = 0;
  FUN_0006a610(&param_1);
  param_1 = 1;
  FUN_0006a610(&param_1);
  param_1 = 0;
  FUN_0006a610(&param_1);
  param_1 = 0x303;
  FUN_0006a610(&param_1);
  if (DAT_004698ea == '\0') {
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,iVar1 + 0xa8,iVar1 + 0x48,0x18);
  }
  FUN_00238630();
  return;
}

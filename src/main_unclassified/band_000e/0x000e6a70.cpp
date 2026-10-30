/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4AE33D7F916713745CE1C3AC3E8F838E37D444430563EBE35E8FC3164F914C5
 * Entry: 0x000e6a70, Ghidra index: 2862, label: FUN_000e6a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698ea;
void FUN_000e6a70(int param_1)

{
  undefined4 in_EAX;
  undefined4 local_8;
  
  FUN_000e52d0(param_1,in_EAX);
  FUN_002385a0();
  local_8 = 0;
  FUN_0006a610(&local_8);
  local_8 = 0;
  FUN_0006a610(&local_8);
  local_8 = 0;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 2;
  FUN_0006a610(&local_8);
  local_8 = 2;
  FUN_0006a610(&local_8);
  FUN_000a4a60(5);
  FUN_000a4d00();
  FUN_00062280();
  (**(code **)(**(int **)(param_1 + 0xb60) + 0x28))(*(int **)(param_1 + 0xb60));
  FUN_00062280();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  FUN_000a4d80();
  if (DAT_004698ea == '\0') {
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,param_1 + 0xd4,param_1 + 0x74,0x18);
  }
  FUN_00238630();
  return;
}

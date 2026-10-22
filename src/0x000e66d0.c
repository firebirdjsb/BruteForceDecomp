/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE4ABE91EC837D11F8032A588F07CCBFC9EBD7CB1492AFB995F97E9A25507B37
 * Entry: 0x000e66d0, Ghidra index: 2861, label: FUN_000e66d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_004698ea;
void FUN_000e66d0(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_38 [13];
  
  FUN_000e52d0(param_1,in_EAX);
  FUN_002385a0();
  local_38[0xc] = 0.0;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 0.0;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 1.4013e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 1.079e-42;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 1.0804e-42;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 4.2039e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 4.2039e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 4.2039e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 4.2039e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 4.2039e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 4.2039e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 4.2039e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 4.2039e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 2.8026e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 2.8026e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 2.8026e-45;
  FUN_0006a610(local_38 + 0xc);
  local_38[0xc] = 2.8026e-45;
  FUN_0006a610(local_38 + 0xc);
  FUN_000a4a60(5);
  FUN_000a4d00();
  local_38[0] = (float)*(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) < 0) {
    local_38[0] = local_38[0] + 4.2949673e+09;
  }
  local_38[1] = (float)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < 0) {
    local_38[1] = local_38[1] + 4.2949673e+09;
  }
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 1.0;
  local_38[5] = 1.0;
  local_38[6] = 0.985;
  local_38[7] = 0.985;
  local_38[8] = 0.97;
  local_38[9] = 0.97;
  local_38[10] = 0.955;
  local_38[0xb] = 0.955;
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    pfVar2 = local_38;
    pfVar3 = (float *)&DAT_0037e1b8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
  FUN_000a4d80();
  FUN_00062280();
  FUN_00062280();
  FUN_00062280();
  FUN_00062280();
  if (DAT_004698ea == '\0') {
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,param_1 + 0xd4,param_1 + 0x74,0x18);
  }
  FUN_00238630();
  return;
}

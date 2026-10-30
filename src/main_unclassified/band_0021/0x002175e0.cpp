/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D069084DE39628A68A9A364CBDC6AF3D9A04DB818AA8F05AE2B084DC540572B9
 * Entry: 0x002175e0, Ghidra index: 7466, label: FUN_002175e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040705c;
int FUN_002175e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint local_8;
  
  if ((*(int *)(param_1 + 8) == 0) ||
     (local_8 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x14, local_8 == 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    local_8 = iVar1 / 0x14;
    if (local_8 == 0) {
      return iVar1 * 0x66666667;
    }
  }
  FUN_002385a0();
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 4;
  FUN_0006a610(&local_8);
  local_8 = 1;
  FUN_0006a610(&local_8);
  local_8 = 0;
  FUN_0006a610(&local_8);
  local_8 = 0x203;
  FUN_0006a610(&local_8);
  local_8 = (uint)DAT_0040705c;
  FUN_0006a610(&local_8);
  FUN_000a4a60(5);
  FUN_000a4d00();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  local_8 = 0x900;
  FUN_0006a610(&local_8);
  if ((char)param_3 == '\0') {
    param_3 = 0;
    FUN_0006a610(&param_3);
    param_3 = 0x300;
    FUN_0006a610(&param_3);
    FUN_000d4180();
    FUN_002174c0(param_1,param_2);
    iVar1 = *(int *)(*(int *)(param_2 + 8) + 0xb78);
    if (*(char *)(iVar1 + 0xb45) != '\0') {
      FUN_00238630();
      *(undefined1 *)(iVar1 + 0xb45) = 0;
    }
  }
  else {
    local_8 = 0x302;
    FUN_0006a610(&local_8);
    local_8 = 0x303;
    FUN_0006a610(&local_8);
    local_8 = 0x1000000;
    FUN_0006a610(&local_8);
    FUN_002174c0(param_1,param_2);
  }
  iVar1 = FUN_00238630();
  return iVar1;
}

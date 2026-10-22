/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF382F91A9BEB613795F2452D28284DDCDE85D727F527E77E86E6AB648B7C074
 * Entry: 0x000e5d40, Ghidra index: 2859, label: FUN_000e5d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c06e5;
extern uint32_t DAT_004698ea;
/* WARNING: Removing unreachable block (ram,0x000e5ecd) */
/* WARNING: Removing unreachable block (ram,0x000e5ee5) */

void FUN_000e5d40(int param_1)

{
  bool bVar1;
  uint local_8;
  
  FUN_002385a0();
  local_8 = 0x1010101;
  FUN_0006a610(&local_8);
  local_8 = 0;
  FUN_0006a610(&local_8);
  local_8 = 0;
  FUN_0006a610(&local_8);
  bVar1 = DAT_003c06e5 != '\0';
  if (bVar1) {
    local_8 = 1;
    FUN_0006a610(&local_8);
    local_8 = 1;
    FUN_0006a610(&local_8);
  }
  local_8 = (uint)bVar1;
  FUN_0006a610(&local_8);
  local_8 = 4;
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
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  FUN_00062280();
  if (DAT_004698ea == '\0') {
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,param_1 + 0xd4,param_1 + 0x74,0x18);
  }
  FUN_00238630();
  return;
}

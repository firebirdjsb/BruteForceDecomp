/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51608F894C17644A2E88807314A8F8AE54EA6C2A5BE6A96CF842EF3409BFB168
 * Entry: 0x002b0b60, Ghidra index: 9733, label: FUN_002b0b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_Node_ClassName_0040e438;
extern uint32_t PTR_s_RadialField_Radius_00402ba0;
void FUN_002b0b60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_RadialField_Radius_00402ba0,param_2,param_3);
  }
  return;
}

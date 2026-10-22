/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E750A7DD3962B5DD3E9B3267B8F6AD95F2758EDDFCB74917E8287E795E146481
 * Entry: 0x002adde0, Ghidra index: 9703, label: FUN_002adde0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_GravityField_Gravity_00403264;
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_002adde0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_GravityField_Gravity_00403264,param_2,param_3);
  }
  return;
}

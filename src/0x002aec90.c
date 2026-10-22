/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1FB6510925DC615E3BB615F96B3DAEB64594490E3BF48F67E17BC20CD279FF4
 * Entry: 0x002aec90, Ghidra index: 9712, label: FUN_002aec90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_Appearance_LODCurve_00402f18;
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_002aec90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Appearance_LODCurve_00402f18,param_2,param_3);
  }
  return;
}

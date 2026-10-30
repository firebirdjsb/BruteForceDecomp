/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 342EBE0FEFEE358D2A28EB5CA8DE5FDD2AF1FA905D7A1A348F3C4370D569A1E4
 * Entry: 0x002a8810, Ghidra index: 9623, label: FUN_002a8810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_Emitter_LODCurve_0040e1f0;
extern uint32_t PTR_s_Node_ClassName_0040e438;
extern uint32_t PTR_s_SphereEmitter_MinRadius_00403614;
void FUN_002a8810(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Emitter_LODCurve_0040e1f0,param_2,param_3)
    ;
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x74))
                (param_1,&PTR_s_SphereEmitter_MinRadius_00403614,param_2,param_3);
    }
  }
  return;
}

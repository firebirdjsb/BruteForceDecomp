/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4129BAB38536A38A9D3DFCF3FE39AD4909AD8D4B5F08AF091B36021341AD3645
 * Entry: 0x00064a30, Ghidra index: 1098, label: FUN_00064a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_CubeEmitter_Width_0040e330;
extern uint32_t PTR_s_Emitter_LODCurve_0040e1f0;
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_00064a30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Emitter_LODCurve_0040e1f0,param_2,param_3)
    ;
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_CubeEmitter_Width_0040e330,param_2,param_3);
    }
  }
  return;
}

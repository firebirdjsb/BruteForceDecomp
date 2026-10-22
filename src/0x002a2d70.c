/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6224899B7579B96497467E0AE13BBE124C69531BB416B46DD8FA2727CDFEA7ED
 * Entry: 0x002a2d70, Ghidra index: 9532, label: FUN_002a2d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_Node_ClassName_0040e438;
extern uint32_t PTR_s_ParticleApp_LifeName_004037a8;
void FUN_002a2d70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_ParticleApp_LifeName_004037a8,param_2,param_3);
  }
  return;
}

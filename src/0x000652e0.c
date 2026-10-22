/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A148BF2CB6B8F62C6D1CF0DEDC1404CA5B2EDB27F51529E3C528418FBAAC414
 * Entry: 0x000652e0, Ghidra index: 1101, label: FUN_000652e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_Emitter_LODCurve_0040e1f0;
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_000652e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Emitter_LODCurve_0040e1f0,param_2,param_3);
  }
  return;
}

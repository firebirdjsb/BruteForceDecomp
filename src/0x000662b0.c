/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CBCA131ED0443A66C12A4A9EADD4B4BD683D03B2CA666B6569A74C95DF430CD
 * Entry: 0x000662b0, Ghidra index: 1118, label: FUN_000662b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_KillField_Width_0040e190;
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_000662b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_KillField_Width_0040e190,param_2,param_3);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26F63C0143AE1E4C3AA359995324E87B6DBBE6B6A20F74C2B6CAAFF6F2811999
 * Entry: 0x002af520, Ghidra index: 9718, label: FUN_002af520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_CollideField_Reflectivity_00402e80;
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_002af520(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))
              (param_1,&PTR_s_CollideField_Reflectivity_00402e80,param_2,param_3);
  }
  return;
}

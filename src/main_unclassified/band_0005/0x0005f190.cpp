/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84EFEACEDC93544D7C24B72E36753F2E09AFC0517C5D9CA6F0F168810EC9AFC2
 * Entry: 0x0005f190, Ghidra index: 1005, label: FUN_0005f190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_BasicApp_Color_0040e4f0;
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_0005f190(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_BasicApp_Color_0040e4f0,param_2,param_3);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1428CCB3FFCE78DB2CBAC961508207E3E150182014BB8D89D7C0602C46FD0523
 * Entry: 0x00066f50, Ghidra index: 1125, label: FUN_00066f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x0040dff0; address-only label. Link definition and role unverified. */
extern unsigned char LAB_0040dff0;

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_00066f50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&LAB_0040dff0,param_2,param_3);
  }
  return;
}

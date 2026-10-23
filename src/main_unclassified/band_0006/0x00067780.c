/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90CBE9C3EB9A3CA0BA8686C5B74D9041D0B8125A7DC2DF8BDA47D037666ECC4D
 * Entry: 0x00067780, Ghidra index: 1132, label: FUN_00067780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x0040de98; address-only label. Link definition and role unverified. */
extern unsigned char LAB_0040de98;

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_Node_ClassName_0040e438;
void FUN_00067780(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,&PTR_s_Node_ClassName_0040e438,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&LAB_0040de98,param_2,param_3);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B03B3A870770E443292EEC0C7C194B31F013A3B78A4C36C4001C378D307A60D
 * Entry: 0x00314937, Ghidra index: 12072, label: FUN_00314937
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fdec;
void FUN_00314937(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + -4);
  if (iVar1 == 0x6c6f6f70) {
    FUN_00314850((int *)(param_1 + -4));
  }
  else if ((iVar1 == 0x706f6c73) && (DAT_0032fdec != 0)) {
    FUN_0031afd8(param_1);
  }
  return;
}

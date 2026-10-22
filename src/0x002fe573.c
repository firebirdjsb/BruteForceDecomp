/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F68BB39E623D75A7660F87065544C58C57257A6217DB9A7100B3DE9F58597F89
 * Entry: 0x002fe573, Ghidra index: 11026, label: FUN_002fe573
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038c668;
void FUN_002fe573(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = &DAT_0038c668;
  puVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  XAPILIB__RaiseException(local_24[0],local_24[1],local_14,local_10);
  return;
}

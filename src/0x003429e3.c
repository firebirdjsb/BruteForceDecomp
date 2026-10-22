/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDC86E61C2E211322304A9BA2A19574E9B1C51B525AF7EDACD108C1F8CA3DE70
 * Entry: 0x003429e3, Ghidra index: 12694, label: FUN_003429e3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_Envelope_003b7698;
extern uint32_t PTR_s_Envelope_003b76a4;
undefined4 FUN_003429e3(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined ***pppuVar4;
  undefined4 local_430 [130];
  int local_228 [130];
  undefined4 local_20;
  undefined **local_1c [5];
  int local_8;
  
  piVar2 = local_228;
  for (iVar1 = 0x83; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  puVar3 = local_430;
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_228[0] = param_2;
  pppuVar4 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pppuVar4 = (undefined **)0x0;
    pppuVar4 = pppuVar4 + 1;
  }
  if (param_2 == 200) {
    local_1c[0] = &PTR_s_Envelope_003b7698;
    local_1c[1] = (undefined **)0x3;
  }
  else {
    local_1c[0] = &PTR_s_Envelope_003b76a4;
    local_1c[1] = (undefined **)0x5;
  }
  local_1c[2] = (undefined **)local_430;
  local_1c[3] = (undefined **)0xa;
  FUN_00342562(param_1 + 0x8dc,local_1c,local_228);
  if (local_8 == 0) {
    local_20 = 0x80151918;
  }
  return local_20;
}

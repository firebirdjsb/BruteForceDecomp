/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 058CF99BD0F3753D708A0868AFE9EA62D93D128E2A0DFCA6743B2743EEDE969A
 * Entry: 0x00380719, Ghidra index: 13533, label: XID_fCloseDevice
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412680;
void XAPILIB__XID_fCloseDevice(void)

{
  char *pcVar1;
  code *pcVar2;
  int *in_ECX;
  undefined1 local_18 [2];
  undefined1 local_16;
  undefined4 local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  undefined1 local_5;
  
  local_5 = KeRaiseIrqlToDpcLevel();
  pcVar2 = *(code **)(*(int *)((int)in_ECX + 0xa3) + 0x1c);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (*in_ECX == 0) {
    KfLowerIrql();
  }
  else {
    *(byte *)((int)in_ECX + 0xa2) = *(byte *)((int)in_ECX + 0xa2) | 1;
    local_c = &local_10;
    local_10 = &local_10;
    local_18[0] = 0;
    local_16 = 4;
    local_14 = 0;
    *(undefined1 **)((int)in_ECX + 0x9e) = local_18;
    FUN_003805b1();
    KfLowerIrql();
    KeWaitForSingleObject(local_18,0,0,0,0);
  }
  pcVar1 = (char *)(*(int *)((int)in_ECX + 0xa3) + 1);
  *pcVar1 = *pcVar1 + '\x01';
  *(int **)((int)in_ECX + 0xa7) = DAT_00412680;
  DAT_00412680 = in_ECX;
  return;
}

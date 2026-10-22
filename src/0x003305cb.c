/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B5CE8A34098195D8DF08860E5E9B4DA9FFF0248144088188A9DB0296AC92811
 * Entry: 0x003305cb, Ghidra index: 12364, label: FUN_003305cb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b75b0;
void FUN_003305cb(undefined1 *param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char local_220 [520];
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  ushort local_c [2];
  undefined1 *local_8;
  
  puVar1 = param_1;
  local_18 = 0;
  *param_1 = 0;
  local_10 = 0x40;
  local_14 = &DAT_003b75b0;
  iVar2 = NtOpenSymbolicLinkObject(&param_1,&local_18);
  if (-1 < iVar2) {
    local_c[0] = 0;
    local_8 = local_220;
    local_c[1] = 0x208;
    iVar2 = NtQuerySymbolicLinkObject(param_1,local_c,0);
    NtClose(param_1);
    if (-1 < iVar2) {
      uVar3 = local_c[0] + 1;
      if (param_2 < local_c[0] + 1) {
        uVar3 = param_2;
      }
      pcVar4 = local_220;
      goto LAB_00330652;
    }
  }
  pcVar4 = "\\Device\\Cdrom0";
  uVar3 = param_2;
LAB_00330652:
  XAPILIB__lstrcpynA(puVar1,pcVar4,uVar3);
  return;
}

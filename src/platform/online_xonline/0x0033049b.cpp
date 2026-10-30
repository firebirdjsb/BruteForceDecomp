/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 198F35E777C53CFDCD63A5A087FD6702C95750F1E0426E796D72239C2FD15392
 * Entry: 0x0033049b, Ghidra index: 12362, label: FUN_0033049b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_certificate_layout.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b75b0;
void FUN_0033049b(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char local_42c [520];
  undefined1 local_224 [520];
  undefined4 local_1c;
  undefined *local_18;
  undefined4 local_14;
  ushort local_10 [2];
  undefined1 *local_c;
  undefined4 local_8;
  
  local_224[0] = 0;
  local_1c = 0;
  local_14 = 0x40;
  local_18 = &DAT_003b75b0;
  iVar1 = NtOpenSymbolicLinkObject(&local_8,&local_1c);
  if (-1 < iVar1) {
    local_10[0] = 0;
    local_c = local_42c;
    local_10[1] = 0x208;
    iVar1 = NtQuerySymbolicLinkObject(local_8,local_10,0);
    NtClose(local_8);
    if (-1 < iVar1) {
      uVar2 = local_10[0] + 1;
      if (0x208 < uVar2) {
        uVar2 = 0x208;
      }
      pcVar3 = local_42c;
      goto LAB_00330522;
    }
  }
  uVar2 = 0x208;
  pcVar3 = "\\Device\\Cdrom0";
LAB_00330522:
  XAPILIB__lstrcpynA(local_224,pcVar3,uVar2);
  FUN_002f2759(param_1 + 3,local_224,param_2,XBE_CERTIFICATE_HEADER_00010180.TitleID,param_3);
  return;
}

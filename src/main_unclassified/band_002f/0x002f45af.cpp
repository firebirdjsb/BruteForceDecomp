/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEE8BB61C878A14BD96206BABFFB593B018E008B699A66B6844B79ADCD6E436D
 * Entry: 0x002f45af, Ghidra index: 10855, label: XFormatUtilityDrive
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003876a4;
undefined4 XAPILIB__XFormatUtilityDrive(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_124 [260];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined1 local_10 [2];
  undefined2 local_e;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_1c = 0;
  local_14 = 0x40;
  local_18 = &DAT_003876a4;
  iVar1 = NtOpenSymbolicLinkObject(&local_8,&local_1c);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
    return 0;
  }
  local_c = local_124;
  local_e = 0x104;
  iVar1 = NtQuerySymbolicLinkObject(local_8,local_10,local_20);
  NtClose(local_8);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_002f870d(local_10,0x4000);
  }
  return uVar2;
}

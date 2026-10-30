/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12EA0A4A4497A0F48352CEA9057A8A5F25EFC52BF59B940320F5988A8D2C989C
 * Entry: 0x002f2fcb, Ghidra index: 10820, label: FUN_002f2fcb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002f2fcb(undefined4 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [8];
  uint local_28;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  RtlInitAnsiString(local_c,param_1);
  local_1c = local_c;
  local_20 = 0xfffffffd;
  local_18 = 0x40;
  iVar2 = NtOpenFile(&param_1,(uintptr_t)0x00100100U,&local_20,local_14,7,0x4020);
  if (iVar2 < 0) {
    XAPILIB__XapiSetLastNTError(iVar2);
    bVar1 = false;
  }
  else {
    puVar3 = local_48;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_28 = param_2 & 0x3127 | 0x80;
    iVar2 = NtSetInformationFile(param_1,local_14,local_48,0x28,4);
    NtClose(param_1);
    if (iVar2 < 0) {
      XAPILIB__XapiSetLastNTError(iVar2);
    }
    bVar1 = iVar2 >= 0;
  }
  return bVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4AD840298DFFCF53FA6554B5651E32E27C2D3EEEFBFBC5D2C2FB4A5DE4FAAB6
 * Entry: 0x002f44aa, Ghidra index: 10854, label: XMountUtilityDrive
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003876a4;
undefined1 XAPILIB__XMountUtilityDrive(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_118 [260];
  undefined1 local_14 [4];
  int local_10;
  short local_c [2];
  undefined4 local_8;
  
  iVar2 = XapiSelectCachePartition(param_1,&local_8,&local_10);
  if (iVar2 < 0) goto LAB_002f45a1;
  if ((param_1 != 0) || (bVar1 = false, local_10 != 0)) {
    bVar1 = true;
  }
  FUN_002eaa19(local_118,0x104,"\\Device\\Harddisk0\\Partition%d\\",local_8);
  RtlInitAnsiString(local_14,local_118);
  RtlInitAnsiString(local_c,local_118);
  local_c[0] = local_c[0] + -1;
  if ((bVar1) && (iVar2 = FUN_002f870d(local_c,0x4000), iVar2 == 0)) {
    return 0;
  }
  iVar2 = FUN_002f7a1b(local_14,0x4000);
  if (iVar2 < 0) {
    if ((!bVar1) && (iVar3 = FUN_002f870d(local_c,0x4000), iVar3 != 0)) {
      iVar2 = FUN_002f7a1b(local_14,0x4000);
    }
    if (-1 < iVar2) goto LAB_002f457d;
  }
  else {
LAB_002f457d:
    iVar2 = IoCreateSymbolicLink(&DAT_003876a4,local_c);
  }
  if (-1 < iVar2) {
    return 1;
  }
LAB_002f45a1:
  XapiSetLastNTError(iVar2);
  return 0;
}

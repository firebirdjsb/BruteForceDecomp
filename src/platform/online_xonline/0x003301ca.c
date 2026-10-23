/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E11C991963A35515294CDED4D108743DCCC8D43A082E7CDCDB779404E4C62B0
 * Entry: 0x003301ca, Ghidra index: 12359, label: FUN_003301ca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b75b8;
uint FUN_003301ca(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_14 [8];
  short local_c [4];
  
  RtlInitAnsiString(local_14,"\\Device\\Harddisk0\\Partition2\\");
  RtlInitAnsiString(local_c,"\\Device\\Harddisk0\\Partition2\\");
  local_c[0] = local_c[0] + -1;
  iVar1 = FUN_002f81e8(local_14);
  if (-1 < iVar1) {
    IoDeleteSymbolicLink(&DAT_003b75b8);
    iVar1 = IoCreateSymbolicLink(&DAT_003b75b8,local_c);
    if (-1 < iVar1) {
      return 0;
    }
  }
  iVar2 = RtlNtStatusToDosError(iVar1);
  if (iVar2 < 1) {
    uVar3 = RtlNtStatusToDosError(iVar1);
  }
  else {
    uVar3 = RtlNtStatusToDosError(iVar1);
    uVar3 = uVar3 & 0xffff | 0x80070000;
  }
  return uVar3;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C7C4FF275DDCC38392708FE78BE88F63C717A40E19180B6906684447DAD219E
 * Entry: 0x0033ec4e, Ghidra index: 12626, label: FUN_0033ec4e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033ec4e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = param_2;
  iVar1 = NtSetInformationFile(param_1,local_14,&local_c,8,0x14);
  if (iVar1 < 0) {
    iVar2 = RtlNtStatusToDosError(iVar1);
    if (iVar2 < 1) {
      uVar3 = RtlNtStatusToDosError(iVar1);
    }
    else {
      uVar3 = RtlNtStatusToDosError(iVar1);
      uVar3 = uVar3 & 0xffff | 0x80070000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

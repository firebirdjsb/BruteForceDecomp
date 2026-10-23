/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5186014ACA73E25E113A77706269DA502BFDFCFE294B34BAEB451FF2B520D5BC
 * Entry: 0x0033c4ab, Ghidra index: 12552, label: FUN_0033c4ab
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033c4ab(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined1 local_7c [100];
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  
  piVar1 = (int *)(in_ECX + 0x15cc + param_1 * 4);
  uVar4 = 0;
  if (*piVar1 != 0) {
    FUN_0033bd35();
    *piVar1 = 0;
  }
  FUN_0033df31(local_7c,100,"\\Device\\Harddisk0\\partition1\\CACHE\\LocalCache%02d.bin",param_1);
  RtlInitAnsiString(local_c,local_7c);
  local_18 = 0;
  local_14 = local_c;
  local_10 = 0x40;
  iVar2 = NtDeleteFile(&local_18);
  if (iVar2 < 0) {
    iVar3 = RtlNtStatusToDosError(iVar2);
    if (iVar3 < 1) {
      uVar4 = RtlNtStatusToDosError(iVar2);
    }
    else {
      uVar4 = RtlNtStatusToDosError(iVar2);
      uVar4 = uVar4 & 0xffff | 0x80070000;
    }
  }
  return uVar4;
}

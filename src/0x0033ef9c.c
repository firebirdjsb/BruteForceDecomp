/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77F71EB7B9FC19A393C1ADE22A472A02F1E8936BAF88D19085561E0D7C01FBF2
 * Entry: 0x0033ef9c, Ghidra index: 12634, label: FUN_0033ef9c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033ef9c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 1;
  iVar1 = FUN_0034509a(*(undefined4 *)(param_2 + 0x10),0x8004667e,&local_8);
  if (iVar1 == -1) {
    iVar1 = XAPILIB__GetLastError();
    if (iVar1 < 1) {
      uVar2 = XAPILIB__GetLastError();
    }
    else {
      uVar2 = XAPILIB__GetLastError();
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
  }
  else {
    iVar1 = FUN_003450bf(*(undefined4 *)(param_2 + 0x10),param_1,0x10);
    uVar2 = 0;
    if (((iVar1 == -1) && (uVar3 = XAPILIB__GetLastError(), uVar3 != 0x2733)) &&
       (uVar2 = uVar3, 0 < (int)uVar3)) {
      uVar2 = uVar3 & 0xffff | 0x80070000;
    }
    if (*(int *)(param_2 + 8) != 0) {
      XAPILIB__SetEvent(*(int *)(param_2 + 8));
    }
  }
  return uVar2;
}

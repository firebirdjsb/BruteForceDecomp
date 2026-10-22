/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54B46EA734DF3718D437C107CB22B43B57B02041C62707C0507CCD0EB526F8FF
 * Entry: 0x000b9fd0, Ghidra index: 2247, label: FUN_000b9fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000b9fd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar1 = FUN_002ea01d(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000b8710();
  }
  iVar1 = *(int *)(param_1 + 0x1354);
  local_4 = uVar2;
  iVar3 = FUN_000ff730(param_1 + 0x1350,iVar1,*(undefined4 *)(iVar1 + 4),&local_4);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  return uVar2;
}

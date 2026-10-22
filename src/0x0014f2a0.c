/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DEEDFD915F1E3DCC0DE348D7640F5D67F5CF480D35BDFA7317322D2433517B2
 * Entry: 0x0014f2a0, Ghidra index: 4392, label: FUN_0014f2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014f2a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  FUN_001554d0(param_1,param_2);
  if (*(int *)(iVar1 + 0x2c) == 3) {
    iVar1 = param_1 + 0x228;
    if (*(int **)(param_1 + 0x22c) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x22c);
    }
  }
  else {
    iVar1 = param_1 + 0x210;
    iVar2 = *(int *)(param_1 + 0x214);
  }
  iVar1 = FUN_000ff730(iVar1,iVar2,*(undefined4 *)(iVar2 + 4),&param_2);
  FUN_000b2a50();
  *(int *)(iVar2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  return;
}

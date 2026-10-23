/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFC0D8D0D8F9ED1848A586C0C6C10F991102FCFD21C67E7977F45BC1887593A3
 * Entry: 0x00288710, Ghidra index: 9111, label: FUN_00288710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00288710(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002ea01d(0x38);
  if (iVar1 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = FUN_002885a0(param_3);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = FUN_000ff730(param_1 + 0x1c,iVar1,*(undefined4 *)(iVar1 + 4),&param_3);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return 1;
}

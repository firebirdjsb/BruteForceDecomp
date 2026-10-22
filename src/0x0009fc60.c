/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF1224FEC6D2D2B7BEB1A4527F75AF5A05F6F3A339A1B759ED907732D5479D12
 * Entry: 0x0009fc60, Ghidra index: 1888, label: FUN_0009fc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0009fc60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1);
    iVar3 = FUN_0009e8b0(param_1);
    return iVar3 + iVar2;
  }
  iVar2 = FUN_0009e8b0(param_1);
  return iVar2;
}

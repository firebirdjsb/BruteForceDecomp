/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 467D1B5A6665B0ECF17ACDB0D55EE3845A6C13A65C93F307D74F2E4913F87A51
 * Entry: 0x0009fd80, Ghidra index: 1890, label: FUN_0009fd80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0009fd80(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1,param_2), iVar2 != 0))
  {
    return;
  }
  FUN_0009fd40(param_2);
  return;
}

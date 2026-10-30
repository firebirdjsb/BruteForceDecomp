/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BC33E52327A5030D957C9A0B0AE48B59A1DAECC086D10D49D4429A575B37091
 * Entry: 0x003828dc, Ghidra index: 13604, label: FUN_003828dc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003828dc(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_003814a8();
  if (*(int *)(in_ECX + 0x14) != 0x20) {
    iVar1 = FUN_00380f37(param_1);
    *(int *)(in_ECX + 0x10) = iVar1;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 8))();
      return;
    }
  }
  FUN_0038274f(0x80000400);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E51E1AAB9343F09EE17EF5F995F9582502EDD8DF2E9862F00CDBAF5DAFB5FD77
 * Entry: 0x000cd2f0, Ghidra index: 2531, label: FUN_000cd2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cd2f0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  FUN_002385a0();
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(piVar1,0);
  }
  cVar2 = FUN_000a4a60(6);
  if (cVar2 != '\0') {
    FUN_000a4d00();
    FUN_000a4d80();
  }
  param_1 = 1;
  FUN_0006a610(&param_1);
  param_1 = 1;
  FUN_0006a610(&param_1);
  param_1 = 0;
  FUN_0006a610(&param_1);
  param_1 = 1;
  FUN_0006a610(&param_1);
  param_1 = 1;
  FUN_0006a610(&param_1);
  param_1 = 0x207;
  FUN_0006a610(&param_1);
  param_1 = 0x302;
  FUN_0006a610(&param_1);
  param_1 = 0x303;
  FUN_0006a610(&param_1);
  param_1 = 8;
  FUN_0006a610(&param_1);
  param_1 = 0x206;
  FUN_0006a610(&param_1);
  param_1 = 1;
  FUN_0006a610(&param_1);
  param_1 = 1;
  FUN_0006a610(&param_1);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F398239A9B12CC5473827B53216DD8CF56109395EAD0C2EE7F65E5E1DB5B322
 * Entry: 0x002583b0, Ghidra index: 8467, label: FUN_002583b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002583b0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x2898) = 0xb000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 **)(param_1 + 0x2860) = (uintptr_t)0x00257760U;
  *(int *)(param_1 + 0x44) = param_1;
  *(undefined4 *)(param_1 + 0x287c) = 0;
  *(undefined4 *)(param_1 + 0x2880) = 0;
  uVar2 = thunk_FUN_002ea01d(0x180c);
  *(undefined4 *)(param_1 + 0x2868) = uVar2;
  FUN_00281870();
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  return 0;
}

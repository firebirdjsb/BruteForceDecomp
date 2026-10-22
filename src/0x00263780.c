/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 737E8E2E1AB450712B8755D4C4DF63815D44027FAC4F6DD04CF9E537FFB0D5B2
 * Entry: 0x00263780, Ghidra index: 8684, label: FUN_00263780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00263780(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    *(int **)(param_1 + 4) = param_2;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  return 0;
}

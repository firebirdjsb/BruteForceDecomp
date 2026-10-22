/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F992A1AC29932CBBF2264F507352E136622A634003C534274CC6AC232034993
 * Entry: 0x00252d60, Ghidra index: 8385, label: FUN_00252d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00252d60(int *param_1)

{
  int *piVar1;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *unaff_ESI = 0;
  }
  param_1 = (int *)*param_1;
  *unaff_ESI = (int)param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}

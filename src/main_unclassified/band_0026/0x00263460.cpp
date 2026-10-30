/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB4183E573F71F1168665695B063E8AA132C011EBF77532C6ED23027D34184BF
 * Entry: 0x00263460, Ghidra index: 8677, label: FUN_00263460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263460(int *param_1,int *param_2)

{
  int *piVar1;
  int *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    piVar1 = (int *)*unaff_EDI;
    *param_1 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  return;
}

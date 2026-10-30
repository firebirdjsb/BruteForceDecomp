/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88F0CF4DFEDC5D5DD7B1FC62882545D4880E0535D4FFC77448DD645478DAB44A
 * Entry: 0x00249340, Ghidra index: 8163, label: FUN_00249340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00249340(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EDI;
      FUN_00249ff0(unaff_EDI + 1);
      FUN_0024a170(unaff_EDI + 5);
      param_1 = param_1 + 9;
    } while (param_1 != param_2);
  }
  return;
}

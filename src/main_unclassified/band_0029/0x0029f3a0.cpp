/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74F90CA335C2DE0ECCAF994913D6EFD63D40E5FB5CB0F37F760C9829E9E68258
 * Entry: 0x0029f3a0, Ghidra index: 9484, label: FUN_0029f3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029f3a0(void)

{
  int *piVar1;
  int *in_EAX;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *in_EAX = 0;
  }
  piVar1 = (int *)in_EAX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_EAX[2] = 0;
  }
  in_EAX[9] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  return;
}

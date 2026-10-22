/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14B1E288F63641D2335D9E46FD6E7E702B0E94ADB665B5E3AFDFE322CFD32A17
 * Entry: 0x0025bf20, Ghidra index: 8548, label: FUN_0025bf20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025bf20(void)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 4))();
  }
  piVar1 = (int *)unaff_ESI[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[1] = 0;
  }
  unaff_ESI[1] = unaff_EDI;
  return;
}

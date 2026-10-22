/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A123AF3ABBD3666D399B14DDEA8D1CEDF55710918A604B0CD2D111A7EC254DE
 * Entry: 0x0025ae00, Ghidra index: 8531, label: FUN_0025ae00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025ae00(undefined4 *param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_EAX;
  unaff_ESI[1] = in_ECX;
  unaff_ESI[2] = in_EDX;
  unaff_ESI[3] = *param_1;
  unaff_ESI[5] = 0;
  unaff_ESI[4] = param_1[1];
  piVar1 = (int *)unaff_ESI[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[5] = 0;
  }
  piVar1 = (int *)param_1[2];
  unaff_ESI[5] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined1 *)(unaff_ESI + 6) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x19) = 0;
  return;
}

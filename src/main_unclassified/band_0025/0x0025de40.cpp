/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AD800107553BD1EE6BFF8D345973A98231FF18E10AE60B7657FAC89DA84C62D
 * Entry: 0x0025de40, Ghidra index: 8582, label: FUN_0025de40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025de40(undefined4 param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[2] = param_1;
  unaff_ESI[3] = *in_EAX;
  unaff_ESI[4] = in_EAX[1];
  piVar1 = (int *)in_EAX[2];
  unaff_ESI[5] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined1 *)(unaff_ESI + 6) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x19) = 0;
  return;
}

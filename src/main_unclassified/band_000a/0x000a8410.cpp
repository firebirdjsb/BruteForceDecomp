/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D0459FA55D7D9D88BA15120B4B83EE7D9F4D6987E3D504DE44D8AE324E9D430
 * Entry: 0x000a8410, Ghidra index: 2004, label: FUN_000a8410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a8410(undefined4 *param_1,undefined1 param_2)

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
  piVar1 = (int *)param_1[1];
  unaff_ESI[4] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
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

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D645FFC29D25B816E31136E2AE68CC111B1514E9D3EBA1B6E88F9D869649CA18
 * Entry: 0x002a7ec0, Ghidra index: 9605, label: FUN_002a7ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a7ec0(undefined4 param_1,undefined1 param_2)

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
  piVar1 = (int *)in_EAX[1];
  unaff_ESI[4] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined1 *)(unaff_ESI + 5) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x15) = 0;
  return;
}

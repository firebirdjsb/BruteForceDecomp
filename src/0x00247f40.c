/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27ED87DD44FBD5614CF3E807C7DB22B74888B6AFC2062C8EC5023EE040E08C95
 * Entry: 0x00247f40, Ghidra index: 8109, label: FUN_00247f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00247f40(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  piVar1 = (int *)unaff_EDI[1];
  unaff_ESI[1] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  unaff_ESI[2] = unaff_EDI[2];
  uVar2 = unaff_EDI[5];
  uVar3 = unaff_EDI[4];
  unaff_ESI[3] = unaff_EDI[3];
  unaff_ESI[5] = uVar2;
  unaff_ESI[4] = uVar3;
  FUN_00248400(unaff_ESI + 6);
  *(undefined1 *)(unaff_ESI + 10) = *(undefined1 *)(unaff_EDI + 10);
  return;
}

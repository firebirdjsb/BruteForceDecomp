/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95120CF7944301FDA24F8DC85B6F2C39CF43EF11878C43F7C64D72EC97C0C87E
 * Entry: 0x002594b0, Ghidra index: 8499, label: FUN_002594b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002594b0(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (unaff_ESI[3] == 0) {
    return -0x7fffbffb;
  }
  iVar2 = FUN_00259430();
  if (-1 < iVar2) {
    iVar2 = FUN_0025a270(unaff_ESI[1]);
    if (iVar2 != 1) {
      return -0x7fffbffb;
    }
    piVar1 = (int *)unaff_ESI[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[3] = 0;
    }
    (**(code **)(*unaff_ESI + 8))();
    iVar2 = 0;
  }
  return iVar2;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9709B93CEA37226921E340F82A1DF675C62F2D591B85D500EF1D0045F4EBF703
 * Entry: 0x002a79d0, Ghidra index: 9599, label: FUN_002a79d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a79d0(void)

{
  int *piVar1;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  
  (**(code **)(*unaff_ESI + 0x58))();
  piVar1 = (int *)unaff_EDI[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x58))(piVar1);
    (**(code **)(*unaff_ESI + 0x54))();
    unaff_EDI[1] = unaff_ESI;
    return;
  }
  (**(code **)(*unaff_ESI + 0x54))();
  *unaff_EDI = unaff_ESI;
  unaff_EDI[1] = unaff_ESI;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1387F67D05123298DD20CE40F3069F77647A541ADF25BD4AFD71128819952EAB
 * Entry: 0x00076a80, Ghidra index: 1382, label: FUN_00076a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00239dc0(void);

bool FUN_00076a80(void)

{
  int *in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  (**(code **)(*unaff_EDI + 0x18))();
  (**(code **)(*in_EAX + 0x18))();
  iVar1 = (**(code **)(*unaff_EDI + 0x24))();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EDI + 0x28))();
  }
  FUN_00239dc0();
  return -1 < iVar1;
}

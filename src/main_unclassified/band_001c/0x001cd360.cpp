/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04F3D6EB14C6FD4787E77C6E9C7B688C44310878A9FB47775609B7932ABE2B9C
 * Entry: 0x001cd360, Ghidra index: 5970, label: FUN_001cd360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cd360(void)

{
  undefined4 *puVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (*unaff_EDI == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_ESI);
  }
  if (*unaff_ESI == 0) {
    puVar1 = (undefined4 *)FUN_002ea01d(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
    }
    *unaff_ESI = (int)puVar1;
  }
  if ((undefined4 *)*unaff_EDI != (undefined4 *)0x0) {
    *(undefined4 *)*unaff_ESI = *(undefined4 *)*unaff_EDI;
  }
  return;
}

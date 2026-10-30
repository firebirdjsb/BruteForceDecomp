/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C845A63CEEA536D8CF3E052F0CEA905A23A363ED796DE6BC4F621D191B0028EA
 * Entry: 0x001cd310, Ghidra index: 5969, label: FUN_001cd310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cd310(void)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
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
      *puVar1 = in_ECX;
    }
    *unaff_ESI = (int)puVar1;
  }
  if ((undefined4 *)*unaff_EDI != (undefined4 *)0x0) {
    *(undefined4 *)*unaff_ESI = *(undefined4 *)*unaff_EDI;
  }
  return;
}

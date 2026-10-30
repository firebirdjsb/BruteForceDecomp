/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2A1ABB5C77BE912FAA8422686E60E354128A5682D9D5A93B5C223340565F203
 * Entry: 0x001a7340, Ghidra index: 5394, label: FUN_001a7340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7340(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_EDX;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if ((iVar1 != 0) == 0) {
    in_EDX = 1;
  }
  if ((uint)(iVar1 != 0) + in_EDX == 0) {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
    *unaff_ESI = 0;
    return 0;
  }
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *unaff_ESI = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  return *unaff_ESI;
}

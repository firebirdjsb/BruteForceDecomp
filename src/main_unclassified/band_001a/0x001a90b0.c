/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08493F94CEDFC84E9BC6A6548FB1F4AFF0F05C117E5573A14D21BB954F5DE0A5
 * Entry: 0x001a90b0, Ghidra index: 5455, label: FUN_001a90b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a90b0(void)

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
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
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

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FAD0B7BCCE3EE8B86CE6069CC6AFBD843787BB9F36C89C866BFD89188E11852
 * Entry: 0x001b0490, Ghidra index: 5583, label: FUN_001b0490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b0490(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_14 [5];
  
  if (in_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_EBX);
  }
  if (*unaff_EBX == 0) {
    puVar1 = (undefined4 *)FUN_002ea01d(0x14);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = local_14;
      puVar4 = puVar1;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *unaff_EBX = (int)puVar1;
      return;
    }
    *unaff_EBX = 0;
  }
  return;
}

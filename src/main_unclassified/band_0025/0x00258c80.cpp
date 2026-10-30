/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95DC0353AD4E823183873CDD34D7629547F3CB1255432896D8CDCD8BBC1BB5C6
 * Entry: 0x00258c80, Ghidra index: 8485, label: FUN_00258c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00258c80(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EAX;
  int *unaff_EBX;
  
  iVar1 = *unaff_EBX;
  if ((iVar1 != 0) && ((int *)((*(uint *)(iVar1 + 0x10) & 0x3ffffff) + iVar1) == unaff_EBX)) {
    FUN_00258b20(in_EAX,iVar1);
    FUN_00258b20(in_EAX,unaff_EBX);
    uVar2 = *(uint *)(iVar1 + 0x10);
    *(uint *)(iVar1 + 0x10) = (unaff_EBX[4] + uVar2 ^ uVar2) & 0x3ffffff ^ uVar2;
    *(int *)(iVar1 + 4) = unaff_EBX[1];
    FUN_00258ad0();
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      **(int **)(iVar1 + 4) = iVar1;
      FUN_00258cf0(iVar1);
    }
    return 1;
  }
  return 0;
}

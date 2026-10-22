/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42AFBABE0B878517DDDB4800CDACA1050295D52338CD5F373009A4AAED027AC1
 * Entry: 0x00258cf0, Ghidra index: 8486, label: FUN_00258cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00258cf0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_ECX;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && ((*(uint *)(param_1 + 0x10) & 0x3ffffff) + param_1 == iVar1)) {
    FUN_00258b20(in_ECX,param_1);
    FUN_00258b20(in_ECX,iVar1);
    uVar2 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = (*(int *)(iVar1 + 0x10) + uVar2 ^ uVar2) & 0x3ffffff ^ uVar2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 4);
    FUN_00258ad0();
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      **(int **)(param_1 + 4) = param_1;
      FUN_00258cf0(param_1);
    }
    return 1;
  }
  return 0;
}

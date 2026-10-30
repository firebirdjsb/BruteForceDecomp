/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFE0178C6452C7B3AD535C48DE75308A1096E5AE27688CD5BC371EE09A724E7A
 * Entry: 0x00248340, Ghidra index: 8116, label: FUN_00248340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0024838a) */

int FUN_00248340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307f20; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307f20U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 != 0) {
    iVar1 = FUN_002ea01d(iVar3);
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 0xc) = iVar1 + iVar3;
    local_8 = 0;
    uVar2 = FUN_00249940(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

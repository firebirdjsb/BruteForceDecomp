/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 016C37F2F3717D57E708F232160CD3B22A332B19CC8AA0490DF8596144831D31
 * Entry: 0x00218b00, Ghidra index: 7480, label: FUN_00218b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00218b00(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307f90; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307f90U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  uVar2 = FUN_00061500(param_1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = 0;
  puVar1 = *(undefined4 **)(param_2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  uVar3 = 0;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    uVar3 = **(undefined4 **)(param_1 + 4);
  }
  FUN_00142bf0(param_1,uVar3,uVar2,puVar1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

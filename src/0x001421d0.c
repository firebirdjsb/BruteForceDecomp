/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B79096B2A51CC064C4CEED1EA6D1B06F2CDB75976165FDC97AD4D6F9426941E
 * Entry: 0x001421d0, Ghidra index: 4119, label: FUN_001421d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001421d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308920;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_1c = *(undefined4 **)(in_ECX + 4);
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    puVar1 = (undefined4 *)
             FUN_001429f0(in_ECX,local_1c,param_2,local_1c,param_1 + 3,*(undefined1 *)(param_1 + 7))
    ;
    if (*(char *)((int)local_1c + 0x1d) != '\0') {
      local_1c = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_001421d0(*param_1,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_001421d0(param_1[2],puVar1);
    puVar1[2] = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return local_1c;
}

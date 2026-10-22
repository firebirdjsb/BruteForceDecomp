/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13869AE34C0E5DFDC86011EF74A2AABAC310ECEAEA200E128076693148DAA442
 * Entry: 0x002262a0, Ghidra index: 7642, label: FUN_002262a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_002262a0(undefined4 *param_1,undefined4 param_2)

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
  puStack_c = &LAB_003076d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_1c = *(undefined4 **)(in_ECX + 4);
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    puVar1 = (undefined4 *)
             FUN_000fb930(in_ECX,local_1c,param_2,local_1c,param_1 + 3,*(undefined1 *)(param_1 + 5))
    ;
    if (*(char *)((int)local_1c + 0x15) != '\0') {
      local_1c = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_002262a0(*param_1,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_002262a0(param_1[2],puVar1);
    puVar1[2] = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return local_1c;
}

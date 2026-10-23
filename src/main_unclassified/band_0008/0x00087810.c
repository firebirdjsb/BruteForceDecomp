/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A4F7012106A4D1F9368D364C6F2C3990349B82BFBA27F32B9FD08F1A3D0404A
 * Entry: 0x00087810, Ghidra index: 1621, label: FUN_00087810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x003075c0; address-only symbol, link definition/role unverified. */
extern unsigned char LAB_003075c0;

void FUN_00087810(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003075c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uVar4 = param_2 | 7;
  if (0x7ffffffe < (param_2 | 7)) {
    uVar4 = param_2;
  }
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_002ea01d(uVar4 * 2 + 2);
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    if (*(uint *)(param_1 + 0x18) < 8) {
      puVar2 = (undefined4 *)(param_1 + 4);
    }
    else {
      puVar2 = *(undefined4 **)(param_1 + 4);
    }
    puVar5 = puVar1;
    for (uVar3 = (param_3 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  if (*(uint *)(param_1 + 0x18) < 8) {
    puVar2 = (undefined4 *)(param_1 + 4);
    *(undefined2 *)puVar2 = 0;
    *puVar2 = puVar1;
    *(uint *)(param_1 + 0x18) = uVar4;
    *(uint *)(param_1 + 0x14) = param_3;
    if (7 < uVar4) {
      puVar2 = puVar1;
    }
    *(undefined2 *)((int)puVar2 + param_3 * 2) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
}

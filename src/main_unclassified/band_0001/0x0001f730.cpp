/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39A5E5AA5641CB575E1C061F0049ADF9A105063758472F83A2BA2534C56B302C
 * Entry: 0x0001f730, Ghidra index: 148, label: FUN_0001f730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Address from mapped original XBE; ABI/runtime mapping remains unverified. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);

void FUN_0001f730(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x00307620u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  uVar3 = param_1 | 0xf;
  if ((param_1 | 0xf) == 0xffffffff) {
    uVar3 = param_1;
  }
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_002ea01d(uVar3 + 1);
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    if (*(uint *)(in_ECX + 0x18) < 0x10) {
      puVar4 = (undefined4 *)(in_ECX + 4);
    }
    else {
      puVar4 = *(undefined4 **)(in_ECX + 4);
    }
    puVar5 = puVar1;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  if (*(uint *)(in_ECX + 0x18) < 0x10) {
    puVar4 = (undefined4 *)(in_ECX + 4);
    *(undefined1 *)puVar4 = 0;
    *puVar4 = puVar1;
    *(uint *)(in_ECX + 0x18) = uVar3;
    *(uint *)(in_ECX + 0x14) = param_2;
    if (uVar3 < 0x10) {
      puVar1 = puVar4;
    }
    *(undefined1 *)((int)puVar1 + param_2) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
}

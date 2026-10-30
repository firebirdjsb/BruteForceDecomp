/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84B148B7F46EBE403B3BA39FA81174135461AA62BBDF72B79D1563453A0DACA7
 * Entry: 0x001322c0, Ghidra index: 3841, label: FUN_001322c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Mapped Xbox image address 0x00307d70; extern label with unresolved link definition. */
extern unsigned char LAB_00307d70;

uint FUN_001322c0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_2c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307d70;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uVar1 = (uint)*(byte *)(param_3 + 0x10);
  iVar4 = *(int *)(in_ECX + 4);
  if (iVar4 == 0) {
    local_2c = 0;
  }
  else {
    iVar3 = *(int *)(in_ECX + 0xc) - iVar4;
    uVar1 = iVar3 * 0x66666667;
    local_2c = iVar3 / 0x14;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar4) / 0x14;
    }
    if (0xcccccccU - iVar3 < param_2) {
      uVar1 = FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return uVar1;
    }
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar4) / 0x14;
    }
    if (local_2c < iVar3 + param_2) {
      if (0xccccccc - (local_2c >> 1) < local_2c) {
        local_2c = 0;
      }
      else {
        local_2c = local_2c + (local_2c >> 1);
      }
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar4) / 0x14;
      }
      if (local_2c < iVar4 + param_2) {
        iVar4 = FUN_0017c210();
        local_2c = iVar4 + param_2;
      }
      uVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_00132720(in_ECX);
      FUN_00132640();
      FUN_00132720(in_ECX);
      local_8 = 0xffffffff;
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar4) / 0x14;
      }
      if (iVar4 != 0) {
        for (; iVar4 != *(int *)(in_ECX + 8); iVar4 = iVar4 + 0x14) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar1 + local_2c * 0x14;
      *(uint *)(in_ECX + 8) = uVar1 + (param_2 + iVar3) * 0x14;
      *(uint *)(in_ECX + 4) = uVar1;
      *unaff_FS_OFFSET = local_10;
      return uVar1;
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x14) < param_2) {
      FUN_00132720(in_ECX);
      local_8 = 2;
      FUN_00132640();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x14;
    }
    else {
      uVar2 = FUN_00132720(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar2;
      FUN_00132790(param_1);
    }
    uVar1 = FUN_00132750();
  }
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B477CF5FD508897610C5450EE39074ADC3AF7B88A1AED1406FF76F96EC8310F8
 * Entry: 0x000a7d80, Ghidra index: 1999, label: FUN_000a7d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00307a60; address-only symbol, link definition/role unverified. */
extern unsigned char LAB_00307a60;

void FUN_000a7d80(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_ECX;
  int in_EDX;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307a60;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar2 = *(int *)(in_EDX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EDX + 0xc) - iVar2 >> 2;
  }
  if (in_ECX != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 2;
    }
    if (0x3fffffffU - iVar5 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 2;
    }
    if (uVar1 < iVar5 + in_ECX) {
      if (0x3fffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 2;
      }
      if (uVar1 < iVar5 + in_ECX) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_EDX + 8) - iVar2 >> 2;
        }
        uVar1 = iVar2 + in_ECX;
      }
      iVar5 = FUN_002ea01d();
      local_8 = 0;
      uVar3 = FUN_001e0da0();
      FUN_0003efa0(uVar3);
      FUN_001e0da0();
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_EDX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_EDX + 8) - iVar2 >> 2;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = uVar1 * 4 + iVar5;
      *(uint *)(in_EDX + 8) = iVar5 + (in_ECX + iVar4) * 4;
      *(int *)(in_EDX + 4) = iVar5;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_EDX + 8) - param_1 >> 2) < in_ECX) {
      FUN_001e0da0();
      local_8 = 2;
      FUN_0003efa0(*(int *)(in_EDX + 8),in_ECX - (*(int *)(in_EDX + 8) - param_1 >> 2));
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 4;
    }
    else {
      uVar3 = FUN_001e0da0();
      *(undefined4 *)(in_EDX + 8) = uVar3;
      FUN_002614a0(param_1);
    }
    FUN_000a4790();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

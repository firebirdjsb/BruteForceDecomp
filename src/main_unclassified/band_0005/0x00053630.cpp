/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38C4243F1ED3912BDCD191F0AC7C975C6BDFB4BD38D84026CEBAE9A4A2963FC0
 * Entry: 0x00053630, Ghidra index: 767, label: FUN_00053630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Original mapped XBE image address; ABI/relocations unverified. */
extern void FUN_00038940(void);
extern int FUN_0017c210(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000539e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int FUN_00053060(void);
extern void FUN_00053a60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_00053a10(undefined4 *param_1,undefined4 *param_2);

void FUN_00053630(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = ((unsigned char *)(uintptr_t)0x00307e80u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_EDX + 0xc) - iVar3) / 0x14;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
    }
    if (0xcccccccU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
    }
    if (uVar5 < iVar2 + in_ECX) {
      if (0xccccccc - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
      }
      if (uVar5 < iVar3 + in_ECX) {
        iVar3 = FUN_0017c210();
        uVar5 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_000539e0(in_EDX);
      FUN_00053060();
      FUN_000539e0(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = uVar5 * 0x14 + iVar2;
      *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 0x14;
      *(int *)(in_EDX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x14) < in_ECX) {
      FUN_000539e0(in_EDX);
      local_8 = 2;
      FUN_00053060();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x14;
    }
    else {
      uVar1 = FUN_000539e0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_00053a60(param_1);
    }
    FUN_00053a10();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A49E4C2DEB5D18CDB8E4E30512A3E2492632BAE93D0811FBD9116603BF80173A
 * Entry: 0x001bcd40, Ghidra index: 5744, label: FUN_001bcd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x001bd0bb) */

void FUN_001bcd40(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  uint local_54;
  int local_20;
  int local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00309390; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309390U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_0001f4f0(in_ECX + 4);
  FUN_001e0dd0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_54 = 0;
  }
  else {
    local_54 = (*(int *)(param_1 + 0xc) - iVar3) / 0x3c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x3c;
    }
    if (0x4444444U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x3c;
      }
      if (local_54 < iVar3 + param_3) {
        if (0x4444444 - (local_54 >> 1) < local_54) {
          local_54 = 0;
        }
        else {
          local_54 = local_54 + (local_54 >> 1);
        }
        iVar3 = FUN_00162850();
        if (local_54 < iVar3 + param_3) {
          iVar3 = FUN_00162850();
          local_54 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce030();
        FUN_001cbbb0();
        FUN_001ce030();
        local_8 = 0xffffffff;
        iVar2 = FUN_00162850();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00069aa0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = local_54 * 0x3c + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x3c + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x3c) < param_3) {
          FUN_001ce030();
          local_8 = 2;
          FUN_001cbbb0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x3c;
        }
        else {
          uVar1 = FUN_001ce030();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001cfa70(param_2);
        }
        FUN_001cfa10();
      }
    }
  }
  if (local_20 != 0) {
    for (; local_20 != local_1c; local_20 = local_20 + 4) {
      FUN_000e35e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

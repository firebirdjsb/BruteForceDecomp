/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E579975C544C3588A600A1673A7A16BE6752DD9DAFA85C0B01C2F8C52DC7850
 * Entry: 0x000d0d20, Ghidra index: 2586, label: FUN_000d0d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox VA 0x00308520; original label address; definition and semantics pending. */
extern unsigned char LAB_00308520;

/* WARNING: Removing unreachable block (ram,0x000d0ff2) */

void FUN_000d0d20(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308520;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (*(int *)(param_4 + 0xc) != 0) {
    FUN_0008f6a0();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 4;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - iVar2 >> 4;
    }
    if (0xfffffffU - iVar4 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar2 >> 4;
      }
      if (uVar1 < iVar4 + param_3) {
        if (0xfffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        if (uVar1 < iVar4 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 4;
          }
          uVar1 = iVar2 + param_3;
        }
        iVar4 = FUN_002ea01d();
        local_8 = 0;
        FUN_000d1030(param_1);
        FUN_000d1010();
        FUN_000d1030(param_1);
        local_8 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        if (iVar2 != 0) {
          FUN_000d11b0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar1 * 0x10 + iVar4;
        *(uint *)(param_1 + 8) = (param_3 + iVar5) * 0x10 + iVar4;
        *(int *)(param_1 + 4) = iVar4;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 4) < param_3) {
          FUN_000d1030(param_1);
          local_8 = 2;
          FUN_000d1010();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        }
        else {
          uVar3 = FUN_000d1030(param_1);
          *(undefined4 *)(param_1 + 8) = uVar3;
          FUN_000d10e0(param_2);
        }
        FUN_000d1060(param_2);
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

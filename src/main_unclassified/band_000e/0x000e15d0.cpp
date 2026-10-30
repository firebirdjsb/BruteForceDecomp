/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F52AA261C1580FD1DF17B610F398DAA91EA5E2E42115EB3889505CF60D8220FE
 * Entry: 0x000e15d0, Ghidra index: 2773, label: FUN_000e15d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x00308590; address reference only, symbol linkage unverified. */
extern unsigned char LAB_00308590;

/* WARNING: Removing unreachable block (ram,0x000e18e8) */

int FUN_000e15d0(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_34;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308590;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_0001f4f0(param_4);
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    local_34 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc) - iVar4;
    iVar1 = iVar3 * -0x6db6db6d;
    local_34 = iVar3 / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar4) / 0x1c;
    }
    if (0x9249249U - iVar1 < param_3) {
      iVar1 = FUN_00038940();
    }
    else {
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x1c;
      }
      if (local_34 < iVar4 + param_3) {
        if (0x9249249 - (local_34 >> 1) < local_34) {
          local_34 = 0;
        }
        else {
          local_34 = local_34 + (local_34 >> 1);
        }
        iVar4 = FUN_0015e840();
        if (local_34 < iVar4 + param_3) {
          iVar4 = FUN_0015e840();
          local_34 = iVar4 + param_3;
        }
        iVar1 = FUN_002ea01d();
        local_8 = 0;
        FUN_000e2820();
        FUN_00076550();
        FUN_000e2820();
        local_8 = 0xffffffff;
        iVar4 = FUN_0015e840();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_000762d0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = local_34 * 0x1c + iVar1;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x1c + iVar1;
        *(int *)(param_1 + 4) = iVar1;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x1c) < param_3) {
          FUN_000e2820();
          local_8 = 2;
          FUN_00076550();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
        }
        else {
          uVar2 = FUN_000e2820();
          *(undefined4 *)(param_1 + 8) = uVar2;
          FUN_00076570(param_2);
        }
        iVar1 = FUN_000765a0();
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}

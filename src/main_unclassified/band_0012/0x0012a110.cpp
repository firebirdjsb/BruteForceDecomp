/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1B898328FAB09A71F8BC9A744FC86069C2637DE507499AFBF25C8E2C4EFAEF7
 * Entry: 0x0012a110, Ghidra index: 3763, label: FUN_0012a110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Mapped Xbox image address 0x00307d90; extern label with unresolved link definition. */
extern unsigned char LAB_00307d90;

void FUN_0012a110(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307d90;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0xc;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    if (0x15555555U - iVar2 < param_3) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    if (uVar5 < iVar2 + param_3) {
      if (0x15555555 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_001aa460();
        uVar5 = iVar3 + param_3;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_0012afa0(param_1);
      FUN_00129b40();
      FUN_0012afa0(param_1);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (iVar3 != 0) {
        FUN_0012a0e0();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(param_1 + 0xc) = uVar5 * 0xc + iVar2;
      *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0xc;
      *(int *)(param_1 + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0xc) < param_3) {
      FUN_0012afa0(param_1);
      local_8 = 2;
      FUN_00129b40();
      local_8 = 0xffffffff;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xc;
    }
    else {
      uVar1 = FUN_0012afa0(param_1);
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_001cef00(param_2);
    }
    FUN_001ceed0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B6F72E5C528503DC3B8A3673462915C8EBB464DF484B9773BC351F215C2F73F
 * Entry: 0x001bc4e0, Ghidra index: 5740, label: FUN_001bc4e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bc4e0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_54 [48];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  /* Original XBE 0x001BC4FE: MOV [EBP-0x10],ESP saves the original
   * x86 guest ESP after constructing the FS:0 SEH frame. Ghidra's
   * local_14 synthetic pointer is assigned once and never used.
   * Removing that dead C alias does not emulate native SEH. */
  undefined4 local_10;
  uint32_t puStack_c; /* original guest32 SEH stack word; FS:0 adapter pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308e70); /* XBE push imm32 at 0x001bc4e5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_0003d6c0(local_54);
  local_24 = *(undefined4 *)(in_ECX + 0x34);
  local_20 = *(undefined4 *)(in_ECX + 0x38);
  local_1c = *(undefined4 *)(in_ECX + 0x3c);
  local_18 = 0;
  FUN_000fdba0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x44;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
    }
    if (0x3c3c3c3U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x3c3c3c3 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_000e0c50();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001cdfd0();
        FUN_001cbb70();
        FUN_001cdfd0();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
        }
        if (iVar3 != 0) {
          FUN_000e22a0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x44 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x44 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x44) < param_3) {
          FUN_001cdfd0();
          local_8 = 2;
          FUN_001cbb70();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x44;
        }
        else {
          uVar1 = FUN_001cdfd0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001cf930(param_2);
        }
        FUN_001cf890();
      }
    }
  }
  if (local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

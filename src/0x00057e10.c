/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71D3A2646C615E053B9BB84E8B1CAA01215869E5E0275AF20FD7F4B0DEA00B52
 * Entry: 0x00057e10, Ghidra index: 859, label: FUN_00057e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x003089b0; address-only label. Link definition and role unverified. */
extern unsigned char LAB_003089b0;

void FUN_00057e10(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  uint local_34;
  int local_28;
  int local_20;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003089b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00056c80();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = (*(int *)(param_1 + 0xc) - iVar3) / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x1c;
    }
    if (0x9249249U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x1c;
      }
      if (local_34 < iVar3 + param_3) {
        if (0x9249249 - (local_34 >> 1) < local_34) {
          local_34 = 0;
        }
        else {
          local_34 = local_34 + (local_34 >> 1);
        }
        iVar3 = FUN_0015e840();
        if (local_34 < iVar3 + param_3) {
          iVar3 = FUN_0015e840();
          local_34 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_00058160();
        FUN_00058140();
        FUN_00058160();
        local_8 = 0xffffffff;
        iVar2 = FUN_0015e840();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00057df0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = local_34 * 0x1c + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x1c + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x1c) < param_3) {
          FUN_00058160();
          local_8 = 2;
          FUN_00058140();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
        }
        else {
          uVar1 = FUN_00058160();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_000581c0(param_2);
        }
        FUN_00058190();
      }
    }
  }
  if (local_20 != 0) {
    FUN_0008f6e0();
  }
  if (local_28 != 0) {
    FUN_0008f6e0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

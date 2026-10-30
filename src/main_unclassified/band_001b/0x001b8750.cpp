/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FCBFD0792463DFA5D07202C5DA405CBC28ADC3C3517E22C03D8D0B3C286F138
 * Entry: 0x001b8750, Ghidra index: 5706, label: FUN_001b8750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b8750(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00309420); /* x86 push imm32 at 0x001b8755 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001cb420();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x14;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
    }
    if (0xcccccccU - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
      }
      if (uVar5 < iVar2 + param_3) {
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
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_0017c210();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001cdd30(param_1);
        FUN_001cb540();
        FUN_001cdd30(param_1);
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
        }
        if (iVar3 != 0) {
          FUN_00069bb0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x14 + iVar2;
        *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0x14;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x14) < param_3) {
          FUN_001cdd30(param_1);
          local_8 = 2;
          FUN_001cb540();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x14;
        }
        else {
          uVar1 = FUN_001cdd30(param_1);
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001cf1a0(param_2);
        }
        FUN_001cf170();
      }
    }
  }
  if (local_20 == 0) {
    *unaff_FS_OFFSET = local_10;
    return;
  }
  for (; local_20 != local_1c; local_20 = local_20 + 0x18) {
    FUN_000e35e0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}

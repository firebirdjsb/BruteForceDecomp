/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 328779795BBCCBA61DD259E0C901FA49947E1822FF9BD3180991E49EBF60EAA3
 * Entry: 0x0004aff0, Ghidra index: 607, label: FUN_0004aff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004aff0(int param_1,int param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003085e0);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  /* Original x86 LEA ESI,[EBP-0x18] at 0x0004b026 selects the
   * four-byte local_1c storage; later LEAs at 0x0004b11a,
   * 0x0004b226, 0x0004b248 and 0x0004b2e7 select the same slot.
   * This is local frame storage, not the guest saved ESP or SEH. */
  local_14 = local_1c;
  local_18 = 0;
  puVar1 = local_1c;
  if (*(int *)(param_4 + 4) != 0) {
    FUN_0008f6a0();
    puVar1 = local_14;
  }
  local_14 = puVar1;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 3;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
    }
    if (0x1fffffffU - iVar6 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
      }
      if (uVar2 < iVar6 + param_3) {
        if (0x1fffffff - (uVar2 >> 1) < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
        }
        if (uVar2 < iVar6 + param_3) {
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 8) - iVar3 >> 3;
          }
          uVar2 = iVar3 + param_3;
        }
        iVar6 = FUN_002ea01d();
        local_8 = 0;
        uVar4 = FUN_0004b610();
        FUN_0004b6d0(uVar4,param_3,local_1c);
        FUN_0004b610();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar3 >> 3;
        }
        if (iVar3 != 0) {
          FUN_0001d590();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar2 * 8 + iVar6;
        *(uint *)(param_1 + 8) = iVar6 + (param_3 + iVar5) * 8;
        *(int *)(param_1 + 4) = iVar6;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 3) < param_3) {
          FUN_0004b610();
          local_8 = 2;
          FUN_0004b6d0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 3),
                       local_1c);
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
        }
        else {
          uVar4 = FUN_0004b610();
          *(undefined4 *)(param_1 + 8) = uVar4;
          FUN_0004b640(param_2);
        }
        FUN_0005ec50();
      }
    }
  }
  if (local_18 != 0) {
    FUN_0008f6e0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

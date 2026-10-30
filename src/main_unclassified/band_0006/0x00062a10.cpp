/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B04ADD6D9124D84ECF156DB2E5A268CDD572564E12B3B8D25EB92F2EE53D6092
 * Entry: 0x00062a10, Ghidra index: 1064, label: FUN_00062a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00062a10(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00307e60);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  /* x86 0x00062a2e: mov [ebp-0x10],esp, after the SEH setup.
   * Ghidra's stack0xffffff80 denotes guest stack state; local_14
   * is unused outside this synthetic assignment chain. */
  local_14 = (undefined1 *)0;
  local_1c = *param_4;
  piVar7 = (int *)param_4[1];
  local_18 = piVar7;
  /* Do not reinterpret an Xbox guest stack address as a host pointer. */
  puVar1 = (undefined1 *)0;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 4))();
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
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 3;
    }
    if (0x1fffffffU - iVar5 < param_3) {
      FUN_00038940();
      piVar7 = local_18;
    }
    else {
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 3;
      }
      if (uVar2 < iVar5 + param_3) {
        if (0x1fffffff - (uVar2 >> 1) < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar3 >> 3;
        }
        if (uVar2 < iVar5 + param_3) {
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 8) - iVar3 >> 3;
          }
          uVar2 = iVar3 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        uVar4 = FUN_00062d10();
        FUN_000619d0(uVar4,param_3,&local_1c);
        FUN_00062d10();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
        }
        if (iVar3 != 0) {
          FUN_000627f0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar2 * 8 + iVar5;
        *(uint *)(param_1 + 8) = iVar5 + (param_3 + iVar6) * 8;
        *(int *)(param_1 + 4) = iVar5;
        piVar7 = local_18;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 3) < param_3) {
          FUN_00062d10();
          local_8 = 2;
          FUN_000619d0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 3),
                       &local_1c);
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
        }
        else {
          uVar4 = FUN_00062d10();
          *(undefined4 *)(param_1 + 8) = uVar4;
          FUN_00062d40(param_2);
        }
        FUN_00062d70();
        piVar7 = local_18;
      }
    }
  }
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

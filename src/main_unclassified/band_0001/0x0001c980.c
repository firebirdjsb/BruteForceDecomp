/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E710F94CC4E230DD1324C747FDD89B0B7A0C65F4B6DB7A12F2074D82EE1AF463
 * Entry: 0x0001c980, Ghidra index: 115, label: FUN_0001c980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001c980(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  undefined4 *in_EDX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_54 [16];
  undefined4 local_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00307f00);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  /* x86: mov [ebp-0x10], esp; original ESP = EBP-0x94 after
   * the SEH setup, local allocation and EBX/ESI/EDI saves.
   * Ghidra's stack0xffffff68 is a synthetic stack reference, not a
   * host C object. This saved-ESP slot has no subsequent read in this
   * decompiled C body. Guest stack/SEH emulation remains ABI_UNVERIFIED. */
  puVar6 = local_54;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0xc) - iVar3 >> 6;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 6;
    }
    if (0x3ffffffU - iVar5 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 6;
    }
    if (uVar4 < iVar5 + param_2) {
      if (0x3ffffff - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 6;
      }
      if (uVar4 < iVar5 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8) - iVar3 >> 6;
        }
        uVar4 = iVar3 + param_2;
      }
      iVar5 = FUN_002ea01d();
      local_8 = 0;
      FUN_0001d320(in_ECX);
      FUN_0001d070();
      FUN_0001d320(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar3 >> 6;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar4 * 0x40 + iVar5;
      *(uint *)(in_ECX + 8) = (param_2 + iVar1) * 0x40 + iVar5;
      *(int *)(in_ECX + 4) = iVar5;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_ECX + 8) - param_1 >> 6) < param_2) {
      FUN_0001d320(in_ECX);
      local_8 = 2;
      FUN_0001d070();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x40;
    }
    else {
      uVar2 = FUN_0001d320(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar2;
      FUN_0001d3b0(param_1);
    }
    FUN_0001d380();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

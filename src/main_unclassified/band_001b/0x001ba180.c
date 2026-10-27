/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35EAF6F03949EC376F056CAD38A0827CFBA2C30335FB0C713E01BC2E5378D927
 * Entry: 0x001ba180, Ghidra index: 5720, label: FUN_001ba180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ba180(int param_1,uint param_2)

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
  undefined4 local_414 [256];
  /* Original XBE 0x001BA1A1 MOV [EBP-0x10],ESP records saved
   * guest ESP after a 0x43C-byte allocation and three register
   * pushes. Ghidra's &stack0xfffffba8 produced only an unread
   * local_14 assignment, not the REP MOVSD 0x400-byte copy.
   * Do not invent a native host stack pointer here.
   * FS:0 guest SEH/ESP restoration remains ABI_UNVERIFIED. */
  undefined4 local_10;
  uint32_t puStack_c; /* original guest32 SEH word; native FS:0 adapter TBD */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003081f0); /* original x86 push imm32 at 0x001ba185 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar6 = local_414;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0xc) - iVar3 >> 10;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 10;
    }
    if (0x3fffffU - iVar5 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 10;
    }
    if (uVar4 < iVar5 + param_2) {
      if (0x3fffff - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 10;
      }
      if (uVar4 < iVar5 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8) - iVar3 >> 10;
        }
        uVar4 = iVar3 + param_2;
      }
      iVar5 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cde50(in_ECX);
      FUN_001cb8b0();
      FUN_001cde50(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar3 >> 10;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar4 * 0x400 + iVar5;
      *(uint *)(in_ECX + 8) = (param_2 + iVar1) * 0x400 + iVar5;
      *(int *)(in_ECX + 4) = iVar5;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_ECX + 8) - param_1 >> 10) < param_2) {
      FUN_001cde50(in_ECX);
      local_8 = 2;
      FUN_001cb8b0();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x400;
    }
    else {
      uVar2 = FUN_001cde50(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar2;
      FUN_001cf420(param_1);
    }
    FUN_001cf3f0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

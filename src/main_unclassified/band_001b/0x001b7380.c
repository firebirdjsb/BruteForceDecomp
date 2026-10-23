/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22D4D26DF2CB5D8CEBC924817D5A74BC5D22760B57EBD3F00ADB4DE4A173A3BA
 * Entry: 0x001b7380, Ghidra index: 5698, label: FUN_001b7380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b7380(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *in_EDX;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_30 [7];
  undefined1 *local_14;
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003082b0); /* x86 push imm32 at 0x001b7385 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff8c;
  puVar4 = local_30;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
    }
    if (0x9249249U - iVar3 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
    }
    if (uVar5 < iVar2 + param_2) {
      if (0x9249249 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      iVar2 = FUN_0015e840();
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_0015e840();
        uVar5 = iVar2 + param_2;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdbe0(in_ECX);
      FUN_001cb210();
      FUN_001cdbe0(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = FUN_0015e840();
      if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x1c + iVar2;
      *(uint *)(in_ECX + 8) = (param_2 + iVar3) * 0x1c + iVar2;
      *(int *)(in_ECX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x1c) < param_2) {
      FUN_001cdbe0(in_ECX);
      local_8 = 2;
      FUN_001cb210();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x1c;
    }
    else {
      uVar1 = FUN_001cdbe0(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_001ced60(param_1);
    }
    FUN_001ced30();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

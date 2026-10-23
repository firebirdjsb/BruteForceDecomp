/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CE92B470DFA1E972B706E564D88AA0935FB57523FD4A3BDD14A52BAB0165753
 * Entry: 0x0028dc50, Ghidra index: 9198, label: FUN_0028dc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028dc50(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_ECX;
  int in_EDX;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003079d0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003079d0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = *(int *)(in_EDX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EDX + 0xc) - iVar2 >> 4;
  }
  if (in_ECX != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 4;
    }
    if (0xfffffffU - iVar5 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 4;
    }
    if (uVar1 < iVar5 + in_ECX) {
      if (0xfffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 4;
      }
      if (uVar1 < iVar5 + in_ECX) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_EDX + 8) - iVar2 >> 4;
        }
        uVar1 = iVar2 + in_ECX;
      }
      iVar5 = FUN_002ea01d();
      local_8 = 0;
      FUN_0028e270(in_EDX);
      FUN_0028e230();
      FUN_0028e270(in_EDX);
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_EDX + 4);
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_EDX + 8) - iVar2 >> 4;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = uVar1 * 0x10 + iVar5;
      *(uint *)(in_EDX + 8) = (in_ECX + iVar3) * 0x10 + iVar5;
      *(int *)(in_EDX + 4) = iVar5;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_EDX + 8) - param_1 >> 4) < in_ECX) {
      FUN_0028e270(in_EDX);
      local_8 = 2;
      FUN_0028e230();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x10;
    }
    else {
      uVar4 = FUN_0028e270(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar4;
      FUN_0028e2f0(param_1);
    }
    FUN_0028e2a0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

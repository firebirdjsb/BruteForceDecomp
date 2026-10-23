/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98FD36F8A7F6491685D0A192D624ECA91846FFBCDEAC40DB5E8B44C2FE7790B1
 * Entry: 0x001b44e0, Ghidra index: 5655, label: FUN_001b44e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b44e0(void)

{
  int in_EAX;
  uint in_ECX;
  uint uVar1;
  int iVar2;
  uint in_stack_00000130;
  undefined4 in_stack_00000140;
  uint in_stack_00000144;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_EAX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_EAX + 8) - iVar2) / 0x144;
  }
  if (uVar1 < in_ECX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EAX + 8) - iVar2) / 0x144;
    }
    FUN_001c29e0(in_EAX,*(undefined4 *)(in_EAX + 8),in_ECX - iVar2,&stack0x00000004);
  }
  else if (iVar2 != 0) {
    if (in_ECX < (uint)((*(int *)(in_EAX + 8) - iVar2) / 0x144)) {
      FUN_001c2990(local_4,in_ECX * 0x144 + *(int *)(in_EAX + 4),*(int *)(in_EAX + 8));
    }
  }
  if (0xf < in_stack_00000144) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_00000130);
  }
  in_stack_00000144 = 0xf;
  in_stack_00000140 = 0;
  in_stack_00000130 = in_stack_00000130 & 0xffffff00;
  FUN_00160220();
  return;
}

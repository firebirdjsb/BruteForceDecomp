/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6E6F530F9042F63606B07F3BD954DC4319671CA3CBEA274434120442AA3BBB7
 * Entry: 0x0001c3b0, Ghidra index: 105, label: FUN_0001c3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x0001C3F6/0x0001C444: address of first caller stack word;
 * both exits ret 12. Incoming EAX/ECX still ABI_UNVERIFIED. */
void FUN_0001c3b0(undefined4 caller_stack_word_1,
                  undefined4 caller_stack_word_2,
                  undefined4 caller_stack_word_3)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
    }
    FUN_0001cc80(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&caller_stack_word_1);
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0xc)) {
      FUN_0001cc20(in_ECX,&caller_stack_word_1,*(int *)(in_ECX + 4) + in_EAX * 0xc,*(int *)(in_ECX + 8))
      ;
    }
  }
  return;
}

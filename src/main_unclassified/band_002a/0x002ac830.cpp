/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75CD7A54DCA4D3E68922719984D1CA045EC5970F52902C76CE0EA99BE246D518
 * Entry: 0x002ac830, Ghidra index: 9671, label: FUN_002ac830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE E8 at 0x002AC85F -> 0x002AD140; callee RET 12.
 * Original guest stack words evidenced; native ABI remains ABI_UNVERIFIED. */
extern void FUN_002ad140(int guest_word_0, int guest_word_1, uint guest_word_2);
void FUN_002ac830(int param_1)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 4;
  }
  FUN_002ad140(unaff_EDI,param_1,1);
  *unaff_EBX = iVar1 * 0x10 + *(int *)(unaff_EDI + 4);
  return;
}

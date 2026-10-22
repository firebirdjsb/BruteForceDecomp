/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BE639AB6E10CE6E5A386FC8A98566E988EBC63181A57AAD51404AC718DAF243
 * Entry: 0x0033d73c, Ghidra index: 12587, label: FUN_0033d73c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033d73c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0033bc7e(3,0,0,param_3,1);
    iVar1 = FUN_0033d3df();
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  else {
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}

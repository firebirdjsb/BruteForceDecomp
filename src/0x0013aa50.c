/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D27EF8D5730541DB8527615768941C11FB3659DC9AFAFE36FFFB76E663CBA47
 * Entry: 0x0013aa50, Ghidra index: 3971, label: FUN_0013aa50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013aa50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 param_6)

{
  int iVar1;
  
  for (iVar1 = param_2 - param_1; 1 < iVar1 >> 3; iVar1 = iVar1 + -8) {
    FUN_0013b1d0(param_1,param_2,param_3,param_4,param_5,param_6,0);
    param_2 = param_2 + -8;
  }
  return;
}

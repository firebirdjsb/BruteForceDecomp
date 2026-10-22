/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1B4FECAA357615689CD0B38CBFCC78821B1097B600C021FCD2A9147A42FA938
 * Entry: 0x0013ad60, Ghidra index: 3977, label: FUN_0013ad60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013ad60(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0013afe0(param_1);
    FUN_0013afe0(param_2 + iVar1 * -8);
    FUN_0013afe0(param_3 + iVar1 * -0x10);
    FUN_0013afe0(param_1 + iVar1 * 8);
    return;
  }
  FUN_0013afe0(param_1);
  return;
}

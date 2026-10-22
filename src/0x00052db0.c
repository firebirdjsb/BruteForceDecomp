/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3663D61C3539D46DF6DCDFC23464C0D8A1BC8A01CE20177B1D6461645684DFD6
 * Entry: 0x00052db0, Ghidra index: 757, label: FUN_00052db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00052db0(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0xc) < (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0xc))
     ) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00053bc0(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0xc;
    return;
  }
  FUN_00052f40(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}

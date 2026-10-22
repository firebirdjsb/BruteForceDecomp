/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EC8F48782D754605883058B4A3DD02F2E68134F0BA5D91700C09CC7EABA8122
 * Entry: 0x0004f530, Ghidra index: 687, label: FUN_0004f530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004f530(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0xc) < (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0xc))
     ) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_001dc2b0(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0xc;
    return;
  }
  FUN_0004f770(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}

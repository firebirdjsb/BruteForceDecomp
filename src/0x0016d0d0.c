/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E62A2CA7598DB3E893F4AC17E9A770662159798B761AEA1C5E21BA2F7353A52
 * Entry: 0x0016d0d0, Ghidra index: 4789, label: FUN_0016d0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016d0d0(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x14) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x14))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_0016de30(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x14;
    return;
  }
  FUN_0016d380(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}

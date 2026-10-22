/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63B7A4AB2370762617879DC04D86F7B3418BF5CA6B7164A3D7AD2CFE299C0E38
 * Entry: 0x000764c0, Ghidra index: 1373, label: FUN_000764c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000764c0(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x1c))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_000e2bb0(iVar1,1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x1c;
    return;
  }
  FUN_000e0be0(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}

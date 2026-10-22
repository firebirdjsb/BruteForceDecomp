/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C18399CDBD950403214D01533081A82DF9C1A097334959C9D551E26881AE241
 * Entry: 0x0008ebe0, Ghidra index: 1737, label: FUN_0008ebe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008ebe0(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x28) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x28))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_0008f480(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x28;
    return;
  }
  FUN_0008ec70(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}

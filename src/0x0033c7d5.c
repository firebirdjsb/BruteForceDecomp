/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75B8EDF7F1229D444C76C93DC0918CB1D3BB8E5E39A626B8262F706D537CBF6A
 * Entry: 0x0033c7d5, Ghidra index: 12561, label: FUN_0033c7d5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033c7d5(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = FUN_0033c1a6(*(undefined4 *)(in_ECX + 0x1c),param_1);
  iVar2 = FUN_0033bcae(uVar1);
  if (-1 < iVar2) {
    FUN_0033c342(*(undefined4 *)(in_ECX + 0x1c),param_1);
  }
  return;
}

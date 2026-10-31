/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7A370F0D0614DD058048DB5C07A721C92A0B576769388D307CFA5C2925D4C60
 * Entry: 0x0033d3df, Ghidra index: 12580, label: FUN_0033d3df
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callee draft only; original Xbox ABI_UNVERIFIED. */
extern undefined4 FUN_0033d057(int param_1,undefined4 param_2);
void FUN_0033d3df(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10) + 0x84c;
  *(int *)(in_ECX + 0x18) = iVar1;
  iVar1 = FUN_0033d057(*(undefined4 *)(in_ECX + 0x1c),iVar1);
  if (iVar1 < 0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(int *)(in_ECX + 0x2c) = iVar1;
    *(undefined4 *)(in_ECX + 0x14) = 1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 2;
  return;
}

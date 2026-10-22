/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9AD47EAB89DABD736C3A73823CD98DDC491A82E55668C91DB7235E447792D30
 * Entry: 0x0033bc50, Ghidra index: 12531, label: FUN_0033bc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bc50(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 8) = 0;
  iVar1 = *(int *)(in_ECX + 0x14);
  *(undefined4 *)(in_ECX + 0x14) = 499;
  *(int *)(in_ECX + 4) =
       *(int *)(in_ECX + 4) + ((param_1 - *(int *)(in_ECX + 0x10)) * 500 - iVar1) + -1;
  *(int *)(in_ECX + 0x10) = param_1 + -1;
  return;
}

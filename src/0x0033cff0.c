/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D8F57934CD190C0C8DA36F4C740FE03D19B97EEB6B5BE58D562C1D05826F1BF
 * Entry: 0x0033cff0, Ghidra index: 12571, label: FUN_0033cff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033cff0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  FUN_0033cf8f(param_1);
  FUN_0033bf88(*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 0x82c),
               *(undefined4 *)(in_ECX + 0x834));
  iVar1 = *(int *)(in_ECX + 0x82c) * 0x200;
  FUN_0033ee35(*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 0xc) + iVar1,0x200,iVar1,0,
               *(undefined4 *)(in_ECX + 0x8b8),param_2);
  FUN_0033edd5(param_2,0);
  return;
}

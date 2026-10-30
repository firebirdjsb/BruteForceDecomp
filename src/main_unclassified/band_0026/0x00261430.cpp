/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C87C79330C3886718ADCE4DC3220255C168D3BB012708C76CE399FAE3E2B562
 * Entry: 0x00261430, Ghidra index: 8632, label: FUN_00261430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00261430(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x24) = iVar1;
  return iVar1;
}

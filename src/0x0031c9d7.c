/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFD4AA964D00E20E3F13E1D800A89335EA01BE609824335A15BBAB9B2AABEA62
 * Entry: 0x0031c9d7, Ghidra index: 12347, label: FUN_0031c9d7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c9d7(undefined4 param_1,uint param_2)

{
  int *in_ECX;
  
  *(undefined4 *)(**(int **)(*in_ECX + 0x10) + 0x440) = param_1;
  *(uint *)(**(int **)(*in_ECX + 0x10) + 0x444) = param_2 >> 2;
  return;
}

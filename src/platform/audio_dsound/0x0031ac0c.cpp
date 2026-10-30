/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D3FBB0EA42CF3CD227E9EFE7C2084C7FA372DD4828347EC88ACFE17E74B1EA7
 * Entry: 0x0031ac0c, Ghidra index: 12274, label: FUN_0031ac0c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031ac0c(int param_1,int param_2)

{
  int in_ECX;
  
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + *(short *)(param_2 + 10);
  FUN_00315aac(in_ECX + 0xc,param_2);
  return param_1;
}

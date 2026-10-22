/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FF9F1422A3469F52660087758DF2DC667E8772983A22E78C3EB765557A2A99F
 * Entry: 0x00154880, Ghidra index: 4448, label: FUN_00154880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00154880(int param_1)

{
  int in_ECX;
  
  *(byte *)(in_ECX + 0xc) =
       *(byte *)(in_ECX + 0xc) ^ (*(char *)(param_1 + 0xd) << 1 ^ *(byte *)(in_ECX + 0xc)) & 2;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EF80B4F5B5AACA4F68569CC77A65B281B91A5C83C94573D60C7D8A861D3A1A1
 * Entry: 0x0001d410, Ghidra index: 128, label: FUN_0001d410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001d410(int param_1,int param_2)

{
  int in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 8);
  }
  return;
}

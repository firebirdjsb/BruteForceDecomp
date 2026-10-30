/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13ECB06EDA8DBE2908E5BDEC2008A67979A472E13390BD3B0334D1C00C03A3FE
 * Entry: 0x001fc490, Ghidra index: 7157, label: FUN_001fc490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fc490(int param_1)

{
  int in_ECX;
  
  FUN_001ff4c0(param_1);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(in_ECX + 0x48) != *(int *)(param_1 + 0x48)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x48));
  }
  if (*(int *)(in_ECX + 0x50) != *(int *)(param_1 + 0x50)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x50));
  }
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  if (*(int *)(in_ECX + 0x5c) != *(int *)(param_1 + 0x5c)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x5c));
    *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
    return;
  }
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}

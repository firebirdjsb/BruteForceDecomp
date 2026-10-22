/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66C1E91EE75390B22D708A2D9D7ADC1961410DC280B652C855AEBE2DE8C5F6C3
 * Entry: 0x000ec100, Ghidra index: 2919, label: FUN_000ec100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec100(int param_1)

{
  byte bVar1;
  int in_ECX;
  
  FUN_000eb560(param_1);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  bVar1 = *(byte *)(in_ECX + 100) ^ (*(byte *)(in_ECX + 100) ^ *(byte *)(param_1 + 100)) & 1;
  *(byte *)(in_ECX + 100) = bVar1;
  bVar1 = (*(byte *)(param_1 + 100) ^ bVar1) & 2 ^ bVar1;
  *(byte *)(in_ECX + 100) = bVar1;
  bVar1 = (*(byte *)(param_1 + 100) ^ bVar1) & 4 ^ bVar1;
  *(byte *)(in_ECX + 100) = bVar1;
  bVar1 = (*(byte *)(param_1 + 100) ^ bVar1) & 8 ^ bVar1;
  *(byte *)(in_ECX + 100) = bVar1;
  *(byte *)(in_ECX + 100) = (*(byte *)(param_1 + 100) ^ bVar1) & 0x10 ^ bVar1;
  return;
}

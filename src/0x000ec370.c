/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 316EAA5F8E44E2355643593B04299841C37F4C1365EEA5E42DE20EEDCF892D25
 * Entry: 0x000ec370, Ghidra index: 2924, label: FUN_000ec370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec370(int param_1)

{
  int in_ECX;
  
  FUN_000eb560(param_1);
  if (*(int *)(in_ECX + 0x60) != *(int *)(param_1 + 0x60)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x60));
  }
  if (*(int *)(in_ECX + 0x68) != *(int *)(param_1 + 0x68)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x68));
  }
  if (*(int *)(in_ECX + 0x70) != *(int *)(param_1 + 0x70)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x70));
  }
  if (*(int *)(in_ECX + 0x78) != *(int *)(param_1 + 0x78)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x78));
  }
  return;
}

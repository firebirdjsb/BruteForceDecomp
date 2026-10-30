/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C068ADC28BAAB411B9C56C6EF9DAC32863CCF0B1494B3A3D4FE4BE82D39D0A4C
 * Entry: 0x002d1960, Ghidra index: 10190, label: FUN_002d1960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d1960(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  FUN_002b3c60();
  if (*(int *)(in_ECX + 0x6c) == 0) {
    iVar1 = FUN_002ea01d(0x30);
    *(int *)(in_ECX + 0x6c) = iVar1;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x18) = 0;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x14) = param_2;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x10) = param_2;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0xc) = param_2;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x2c) = param_1;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x28) = param_1;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x24) = param_1;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D05969CB449FBDFCB5568603D7EFBC83BD11E6D29D5949C269CF3B8703352CC
 * Entry: 0x0033bcdc, Ghidra index: 12534, label: FUN_0033bcdc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bcdc(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8) = 0;
  }
  return;
}

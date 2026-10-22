/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA8FB78526C897161A422B1DAB3DC8E82D08CB9D81B0A64C54E01EF3D14AC065
 * Entry: 0x002e5bd0, Ghidra index: 10488, label: FUN_002e5bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e5bd0(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) != param_1) {
    *(int *)(in_ECX + 0x28) = param_1;
  }
  return 0;
}

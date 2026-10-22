/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F9D062B2C2F94D93EAB20864B1928AD1186393F8E4783A4C3807BB837D96818
 * Entry: 0x003166f1, Ghidra index: 12146, label: FUN_003166f1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_003166f1(uint param_1)

{
  int in_ECX;
  
  param_1 = param_1 / *(uint *)(*(int *)(in_ECX + 0x78) + 0x14);
  if (*(short *)(*(int *)(in_ECX + 0x78) + 0xc) == 0x69) {
    param_1 = param_1 << 6;
  }
  return param_1;
}

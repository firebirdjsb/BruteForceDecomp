/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E40DD636188BE249D97ECC2ABC638F40ACCBC6E6D3F132884163665C7BF005A
 * Entry: 0x001eba60, Ghidra index: 6892, label: FUN_001eba60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eba60(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x2c))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x1c);
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x20);
  return param_1[3];
}

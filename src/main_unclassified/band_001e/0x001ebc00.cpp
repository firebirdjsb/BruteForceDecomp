/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 827F35553B51C4526AE2BFF1C6C51C2302191108623597B8A5C076A761C8FBE8
 * Entry: 0x001ebc00, Ghidra index: 6896, label: FUN_001ebc00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ebc00(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x2c))(in_ECX + 0x1c);
  return param_1[3];
}

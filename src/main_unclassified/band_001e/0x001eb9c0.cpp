/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D7B8024D2728B2A8B5775F35A04B697B7150AE47DBF64C7004D1C3E9D35FECE
 * Entry: 0x001eb9c0, Ghidra index: 6890, label: FUN_001eb9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eb9c0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x18);
  return param_1[3];
}

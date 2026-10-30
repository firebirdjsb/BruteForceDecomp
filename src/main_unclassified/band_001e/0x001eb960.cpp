/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DAC1E7C863420D133697361BCEFAC599F9709DEE5A13DBF7900A98C6218E191
 * Entry: 0x001eb960, Ghidra index: 6889, label: FUN_001eb960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eb960(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x18);
  return param_1[3];
}

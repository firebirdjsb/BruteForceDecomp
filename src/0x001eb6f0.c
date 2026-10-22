/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B55BFD97893BCD385D4597ABC65A5FBDBC8B4A1EF1A5156F6597198E1A4B1AC0
 * Entry: 0x001eb6f0, Ghidra index: 6884, label: FUN_001eb6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eb6f0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x1c);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x20);
  return param_1[3];
}

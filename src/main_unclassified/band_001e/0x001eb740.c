/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCE66A4E49AEB18346A1D7DBF4F6082CDABF41C876DB481802C25328EEAE9163
 * Entry: 0x001eb740, Ghidra index: 6885, label: FUN_001eb740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eb740(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x54))(in_ECX + 0x1c,&stack0x00000000);
  return param_1[3];
}

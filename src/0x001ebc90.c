/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F97418E17CAE7E65281BB839F259EAF8794533A15DAB47423C09A470000DD223
 * Entry: 0x001ebc90, Ghidra index: 6897, label: FUN_001ebc90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ebc90(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x2c))(in_ECX + 0x1c);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x24);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x28);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x20);
  return param_1[3];
}

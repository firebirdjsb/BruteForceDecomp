/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B5C86477C853801C2EA19778471A52E430724464D8CB6F6DA728EB89317011C
 * Entry: 0x001ebbc0, Ghidra index: 6895, label: FUN_001ebbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ebbc0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x1c);
  return param_1[3];
}

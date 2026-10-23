/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10B3278DD294C43FB0504417321F73E35184E4F49872E452225A3AF995B549D4
 * Entry: 0x0014b5d0, Ghidra index: 4317, label: FUN_0014b5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014b5d0(int param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x30))();
  if (param_1 != 0) {
    in_ECX[7] = param_1;
    (**(code **)(*in_ECX + 0x24))(*(short *)((int)in_ECX + 0x1a) + 1);
  }
  return;
}

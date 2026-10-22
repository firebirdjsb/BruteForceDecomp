/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9046066C0BD50D233CC3F2F736138F0674D3EBBA3946DB5C077AA85E0B32A8BB
 * Entry: 0x00058190, Ghidra index: 862, label: FUN_00058190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058190(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    if (in_EAX != param_1) {
      FUN_00056c20();
    }
  }
  return;
}

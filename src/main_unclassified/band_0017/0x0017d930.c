/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E40D3EBBF5271D6C5A28EB59BB8A863E5C2B09A38EDB4E39AC4D72708E52235
 * Entry: 0x0017d930, Ghidra index: 5084, label: FUN_0017d930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d930(int param_1)

{
  int in_EAX;
  
  for (; in_EAX != param_1; in_EAX = in_EAX + 0x24) {
    if (*(int *)(in_EAX + 0x20) != 0) {
      FUN_0017dd90(1);
    }
    *(undefined4 *)(in_EAX + 0x20) = 0;
    if (*(int *)(in_EAX + 8) != 0) {
      FUN_000e35e0(1);
    }
    *(undefined4 *)(in_EAX + 8) = 0;
  }
  return;
}

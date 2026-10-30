/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83F158496F7D7AE00E46FB39692FC749FDB1755B68D8209967A09D89EDA76986
 * Entry: 0x00022ba0, Ghidra index: 200, label: FUN_00022ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00022ba0(void)

{
  uint *puVar1;
  int in_ECX;
  int *in_EDX;
  
  if (*in_EDX != 0) {
    puVar1 = (uint *)(*in_EDX + 0x28);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *in_EDX = in_ECX;
  if (in_ECX != 0) {
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 1;
  }
  return;
}

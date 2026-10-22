/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 048774C37D38A862A4492EC62754707DD07544F9FA1ED31321815C1E2DD9FDB6
 * Entry: 0x001dd000, Ghidra index: 6608, label: FUN_001dd000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd000(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_ECX != 0) {
    FUN_000fdc90(in_EAX);
    *(undefined4 *)(in_ECX + 0x28) = 0;
    FUN_000fdaa0(in_EAX + 0x28);
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    FUN_000fdba0();
  }
  return;
}

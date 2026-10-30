/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE90175CB1F071C6314707CE7EA85D8AB4CAE862FA6B8FC79751B69FD81E8F7D
 * Entry: 0x001016d0, Ghidra index: 3245, label: FUN_001016d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001016d0(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 4))();
  }
  return;
}

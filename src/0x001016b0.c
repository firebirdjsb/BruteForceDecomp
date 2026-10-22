/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DCA652A78B1DAB203D2E8C379FC52A208643BE3F8B5F44FE74B3EA2283CDEA3
 * Entry: 0x001016b0, Ghidra index: 3244, label: FUN_001016b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001016b0(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 4))();
  }
  return;
}

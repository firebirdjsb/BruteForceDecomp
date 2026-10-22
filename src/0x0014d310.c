/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22E2A8F8834814637A3EC58FB4D12B5A0B588C5146E15BF9DD086A2D0A4FB4F7
 * Entry: 0x0014d310, Ghidra index: 4358, label: FUN_0014d310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014d310(void)

{
  char cVar1;
  int unaff_ESI;
  
  cVar1 = (**(code **)(*(int *)(unaff_ESI + 0x178) + 0x20))();
  if (cVar1 != '\0') {
    return *(undefined4 *)(unaff_ESI + 0x198);
  }
  return 0;
}

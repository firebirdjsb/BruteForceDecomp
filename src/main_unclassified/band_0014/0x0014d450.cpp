/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EB125F49F5FD3EE368E7499FA2DC6907FC084A34A77A14E793121ACF7C3F1D3
 * Entry: 0x0014d450, Ghidra index: 4362, label: FUN_0014d450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014d450(void)

{
  char cVar1;
  int unaff_ESI;
  
  cVar1 = (**(code **)(*(int *)(unaff_ESI + 0x44) + 0x20))();
  if (cVar1 != '\0') {
    return *(undefined4 *)(unaff_ESI + 100);
  }
  return 0;
}

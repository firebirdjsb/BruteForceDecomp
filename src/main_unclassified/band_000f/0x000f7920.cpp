/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3132DC2715D4E1756F00B31FA5F11293331E14736FE9BA96D2D2E969CE60DE10
 * Entry: 0x000f7920, Ghidra index: 3105, label: FUN_000f7920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000f7920(void)

{
  int iVar1;
  int *unaff_EDI;
  
  if (unaff_EDI != (int *)0x0) {
    iVar1 = (**(code **)(*unaff_EDI + 4))();
    if (iVar1 == 3) {
      iVar1 = FUN_001020d0();
      if (iVar1 != 0) {
        iVar1 = FUN_0008a460();
        if (iVar1 != 0) {
          FUN_0010c7d0();
          return 1;
        }
      }
    }
  }
  return 0;
}

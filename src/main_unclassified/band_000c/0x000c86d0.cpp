/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75F069262D2E5B077ACFD578970AABEF368B1CBEF5D75977FF46EF4ECEB1322F
 * Entry: 0x000c86d0, Ghidra index: 2468, label: FUN_000c86d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000c86d0(void)

{
  uint uVar1;
  int *piVar2;
  int in_EDX;
  int unaff_ESI;
  
  uVar1 = 0;
  piVar2 = (int *)(unaff_ESI + 0x34);
  do {
    if (*piVar2 == in_EDX) {
      if ((0 < (int)uVar1) && ((int)uVar1 < 5)) {
        return CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)(uVar1 + 0x58 + unaff_ESI));
      }
      break;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2;
  } while ((int)uVar1 < 5);
  return uVar1 & 0xffffff00;
}

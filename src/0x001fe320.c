/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1EE539EB2D91A9276556D512B41D49693EEBC1FF2A5470852CB0EFF9A3D255A
 * Entry: 0x001fe320, Ghidra index: 7227, label: FUN_001fe320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fe320(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    FUN_0001b650();
    puVar1 = *(undefined4 **)(unaff_EDI + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*puVar1;
    }
    if (puVar2 != puVar1) {
      do {
        if (puVar2[3] != 0) {
          FUN_001611d0();
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != *(undefined4 **)(unaff_EDI + 4));
    }
  }
  return;
}

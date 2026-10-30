/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24AF8BA2F938B0775F980BCF67287B23CC89665ACA8995D6D2C45221E21F185D
 * Entry: 0x0016ada0, Ghidra index: 4769, label: FUN_0016ada0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016ada0(void)

{
  int *piVar1;
  int in_EDX;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x3c);
  if (piVar1 != *(int **)(unaff_ESI + 0x40)) {
    while (*piVar1 != in_EDX) {
      piVar1 = piVar1 + 4;
      if (piVar1 == *(int **)(unaff_ESI + 0x40)) {
        return;
      }
    }
    FUN_00176700(piVar1 + 4,*(undefined4 *)(unaff_ESI + 0x40),piVar1);
    *(int *)(unaff_ESI + 0x40) = *(int *)(unaff_ESI + 0x40) + -0x10;
  }
  return;
}

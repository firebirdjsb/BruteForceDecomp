/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6C186E52D78C064AD1609C74A29CB692BACA1D6471500C51A3C85A1E0370010
 * Entry: 0x00149e60, Ghidra index: 4280, label: FUN_00149e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00149e60(void)

{
  int *piVar1;
  int unaff_EBX;
  int *piVar2;
  
  piVar1 = *(int **)(unaff_EBX + 0x30);
  for (piVar2 = *(int **)(unaff_EBX + 0x2c); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 != 0) {
      FUN_0014c0f0(*piVar2);
    }
  }
  *(undefined1 *)(unaff_EBX + 0x60) = 0;
  return;
}

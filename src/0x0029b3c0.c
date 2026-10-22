/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79B7FA3DFB941B9D85CC60D0DAE027D9E67A52F856D179AB55FF00A078FA768D
 * Entry: 0x0029b3c0, Ghidra index: 9423, label: FUN_0029b3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029b3c0(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  while ((*(int *)(unaff_ESI + 4) == 0x10d || (*(int *)(unaff_ESI + 4) == 0x2d))) {
    FUN_0029af90();
    uVar1 = FUN_00296110();
    *(undefined4 *)(unaff_ESI + 4) = uVar1;
  }
  FUN_0029b0a0(param_1);
  return;
}

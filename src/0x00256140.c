/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2981F17991E53F0C7A3FF1E19D2507A4FEC23B4B6D66770CC8D69AC786A9B55
 * Entry: 0x00256140, Ghidra index: 8431, label: FUN_00256140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00256140(void)

{
  int *piVar1;
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x60)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x4c));
  }
  *(undefined4 *)(unaff_ESI + 0x60) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined1 *)(unaff_ESI + 0x4c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x44)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x30));
  }
  *(undefined4 *)(unaff_ESI + 0x44) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined1 *)(unaff_ESI + 0x30) = 0;
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    FUN_00256480(unaff_ESI + 0x18);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x1c));
  }
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  piVar1 = *(int **)(unaff_ESI + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
  }
  if (*(int *)(unaff_ESI + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return;
}

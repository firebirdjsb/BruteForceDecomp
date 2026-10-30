/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE4FB89B657EA500FA62BC7B7C252E69B963256EB53C3D1CBF6C438AD5E1454B
 * Entry: 0x00068730, Ghidra index: 1149, label: FUN_00068730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00068730(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x44)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x30));
  }
  *(undefined4 *)(unaff_ESI + 0x44) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined1 *)(unaff_ESI + 0x30) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x20)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0xc));
  }
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0xf;
  *(undefined1 *)(unaff_ESI + 0xc) = 0;
  return;
}

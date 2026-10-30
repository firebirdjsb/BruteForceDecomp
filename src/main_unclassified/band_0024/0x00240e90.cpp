/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C0E001BEE8AF6C4DFD8BA561070946F9F643A4D2C04AA7A342E997AA477CCC8
 * Entry: 0x00240e90, Ghidra index: 7992, label: FUN_00240e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00240e90(void)

{
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x2c;
    if (iVar1 != 0) goto LAB_00240ec5;
  }
  FUN_00242d60();
LAB_00240ec5:
  FUN_00243ee0(0,0);
  return iVar1 * 0x2c + *(int *)(unaff_ESI + 4);
}

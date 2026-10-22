/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EBFDBA637CDEE93185AA8FCE67A31298E6C388ADA6854DC2623EBBDE79A6604
 * Entry: 0x0006a5b0, Ghidra index: 1200, label: FUN_0006a5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006a5b0(void)

{
  undefined4 *unaff_ESI;
  undefined8 uVar1;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  XAPILIB__QueryPerformanceFrequency(unaff_ESI + 6);
  uVar1 = __alldiv(unaff_ESI[6],unaff_ESI[7],1000,0);
  *(undefined8 *)(unaff_ESI + 8) = uVar1;
  return;
}

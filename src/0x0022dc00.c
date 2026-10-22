/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0113BCB17D5EED39AFBB86B0761DF7B4FA117A0BE98FA3A69B6BF1CEB466930F
 * Entry: 0x0022dc00, Ghidra index: 7714, label: FUN_0022dc00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022dc00(void)

{
  float fVar1;
  char cVar2;
  int *unaff_ESI;
  
  fVar1 = *(float *)(unaff_ESI[0x8a] + 0xcc);
  cVar2 = (**(code **)(*unaff_ESI + 0x15c))();
  if (cVar2 != '\0') {
    fVar1 = *(float *)(unaff_ESI[0x8a] + 0xd0);
  }
  unaff_ESI[0xa3] = 0;
  *(byte *)(unaff_ESI + 0x89) = *(byte *)(unaff_ESI + 0x89) & 0xfb;
  unaff_ESI[0x86] = (int)(1.0 / fVar1);
  return;
}

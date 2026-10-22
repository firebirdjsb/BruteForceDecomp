/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12E7626E3D9FB8FB5039B4450019F1A9C04A6236DFC1CF1CD90528228CDA52AB
 * Entry: 0x001f0b30, Ghidra index: 6978, label: FUN_001f0b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f0b30(void)

{
  uint *unaff_ESI;
  uint local_8;
  int local_4;
  
  XAPILIB__QueryPerformanceCounter(&local_8);
  __alldiv(local_8 - *unaff_ESI,(local_4 - unaff_ESI[1]) - (uint)(local_8 < *unaff_ESI),unaff_ESI[8]
           ,unaff_ESI[9]);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 298A183ACAE26200A79DB4034957B830C063337214A850DC6E1145A0EF3DC159
 * Entry: 0x002db860, Ghidra index: 10285, label: FUN_002db860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002db860(void)

{
  float fVar1;
  int unaff_EBX;
  float *unaff_ESI;
  int iVar2;
  
  iVar2 = ((int)unaff_ESI[9] * unaff_EBX + unaff_EBX) * 4;
  fVar1 = *(float *)(iVar2 + (int)unaff_ESI[2]);
  if (ABS(fVar1) < *unaff_ESI) {
    return 0;
  }
  fVar1 = 1.0 / fVar1;
  FUN_002d9cc0(fVar1);
  FUN_002d9cc0(fVar1);
  *(undefined4 *)(iVar2 + (int)unaff_ESI[2]) = 0x3f800000;
  return 1;
}

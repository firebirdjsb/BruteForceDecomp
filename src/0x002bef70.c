/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72D16D06E82F4FB493F60F0D8F5AE9CAB7422FDAD5AADEC60C8B9EAD07BC2782
 * Entry: 0x002bef70, Ghidra index: 9987, label: FUN_002bef70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002bef70(int param_1,float param_2,double param_3)

{
  double dVar1;
  undefined4 uVar2;
  double *unaff_ESI;
  
  dVar1 = *unaff_ESI;
  uVar2 = FUN_002d5d50(param_1,(float)(((float10)param_3 - (float10)dVar1) *
                                       (float10)*(float *)(unaff_ESI + 1) +
                                       (float10)*(float *)(unaff_ESI + 2) + (float10)param_2));
  *(undefined4 *)(param_1 + 4) = uVar2;
  return ((float10)*(float *)(unaff_ESI + 2) - (float10)*(float *)((int)unaff_ESI + 0x14)) +
         ((float10)*(float *)(unaff_ESI + 1) - (float10)*(float *)((int)unaff_ESI + 0xc)) *
         (float10)(float)((float10)param_3 - (float10)dVar1);
}

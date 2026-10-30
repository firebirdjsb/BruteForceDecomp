/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14EC59936F945D540422B094C7235AC68C8866622CAB1BB825D5686042884281
 * Entry: 0x00039410, Ghidra index: 397, label: FUN_00039410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort FUN_00039410(void)

{
  float fVar1;
  float *in_ECX;
  ushort uVar2;
  
  fVar1 = SQRT(in_ECX[2] * in_ECX[2] + in_ECX[1] * in_ECX[1] + *in_ECX * *in_ECX);
  uVar2 = (ushort)(fVar1 < 1e-05) << 8 | (ushort)isnan(fVar1) << 10 | (ushort)(fVar1 == 1e-05) << 0xe;
  if (fVar1 < 1e-05) {
    return uVar2;
  }
  fVar1 = 1.0 / fVar1;
  *in_ECX = fVar1 * *in_ECX;
  in_ECX[1] = fVar1 * in_ECX[1];
  in_ECX[2] = fVar1 * in_ECX[2];
  return CONCAT11((char)(uVar2 >> 8),1);
}

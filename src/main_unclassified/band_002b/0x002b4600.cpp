/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E631C65CD877487B8DF8D947DEE2517FD04038B6B9EC998D0BF3C853F2195DF
 * Entry: 0x002b4600, Ghidra index: 9786, label: FUN_002b4600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b4600(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar1 = in_ECX[3] * in_ECX[3] + in_ECX[2] * in_ECX[2] + in_ECX[1] * in_ECX[1] + *in_ECX * *in_ECX;
  if (1e-06 < ABS(1.0 - fVar1)) {
    fVar2 = 1.5 - fVar1 * 0.5;
    fVar3 = 1.0 - fVar2 * fVar2 * fVar1;
    do {
      fVar2 = fVar3 * 0.5 + fVar2;
      fVar3 = 1.0 - fVar2 * fVar2 * fVar1;
    } while (1e-06 < ABS(fVar3));
    *in_ECX = fVar2 * *in_ECX;
    in_ECX[1] = fVar2 * in_ECX[1];
    in_ECX[2] = fVar2 * in_ECX[2];
    in_ECX[3] = fVar2 * in_ECX[3];
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE0AE7ED4809C37D83CD5B930610BBFA87DECD528B61584FFCE76091A9F5C5E3
 * Entry: 0x000285f0, Ghidra index: 277, label: FUN_000285f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001f9c0(void);

void FUN_000285f0(undefined4 param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  undefined1 local_24 [36];
  
  fVar1 = param_2 * in_ECX[3] * in_ECX[4] + in_ECX[2];
  in_ECX[2] = fVar1;
  if (fVar1 < *in_ECX) {
    in_ECX[2] = *in_ECX;
    in_ECX[4] = -in_ECX[4];
  }
  if (in_ECX[1] < in_ECX[2]) {
    in_ECX[2] = in_ECX[1];
    in_ECX[4] = -in_ECX[4];
  }
  FUN_00039380(local_24,in_ECX[2] * 0.017453292);
  FUN_0001f9c0();
  return;
}

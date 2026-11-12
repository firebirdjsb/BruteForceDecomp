/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39321F66A49AAD22A20B105A544EA7BC10A3FFEF6CDE1B86DA5E0714D6010FA0
 * Entry: 0x0010acf0, Ghidra index: 3435, label: FUN_0010acf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern void FUN_0010a740(int param_1);
extern void FUN_0010aac0(void);
extern void FUN_0010ab60(void);
undefined4 FUN_0010acf0(void)

{
  float fVar1;
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x14) != *(float *)(in_ECX + 0xec)) {
    *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x14);
    FUN_0010a740(in_ECX);
    fVar1 = *(float *)(in_ECX + 0xe0);
    if (!isnan(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_0010aac0();
    }
  }
  FUN_0010ab60();
  return 1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E840D4143C48D136DFC6906F3BEE4C88606A803E30349137B6C669648D69044
 * Entry: 0x00058a60, Ghidra index: 877, label: FUN_00058a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058a60(void)

{
  float fVar1;
  undefined4 *in_ECX;
  
  fVar1 = (float)in_ECX[8];
  *in_ECX = 3;
  if (0.0 < (float)in_ECX[9]) {
    fVar1 = (float)in_ECX[9];
  }
  if (1.1920929e-07 < fVar1) {
    in_ECX[0xd] = fVar1;
    in_ECX[0xb] = fVar1;
    *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xf9 | 1;
    return;
  }
  return;
}

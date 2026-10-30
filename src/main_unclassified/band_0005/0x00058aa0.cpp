/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2ED1504F089A63E47D121AF6DA4BAD269E494BA702BB310E369DA983A99C95D7
 * Entry: 0x00058aa0, Ghidra index: 878, label: FUN_00058aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058aa0(void)

{
  float fVar1;
  int iVar2;
  int *in_ECX;
  
  if ((((*(byte *)(in_ECX + 0xc) & 1) != 0) && ((*(byte *)(in_ECX + 0xc) >> 1 & 1) != 0)) &&
     (iVar2 = in_ECX[1], *in_ECX != iVar2)) {
    if (3 < iVar2) {
      fVar1 = (float)in_ECX[8];
      *in_ECX = 4;
      if (0.0 < (float)in_ECX[9]) {
        fVar1 = (float)in_ECX[9];
      }
      if (1.1920929e-07 < fVar1) {
        in_ECX[0xd] = (int)fVar1;
        in_ECX[0xb] = (int)fVar1;
        *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xf9 | 1;
        return;
      }
      return;
    }
    if (iVar2 < 3) {
      fVar1 = (float)in_ECX[8];
      *in_ECX = 2;
      if (0.0 < (float)in_ECX[9]) {
        fVar1 = (float)in_ECX[9];
      }
      if (1.1920929e-07 < fVar1) {
        in_ECX[0xd] = (int)fVar1;
        in_ECX[0xb] = (int)fVar1;
        *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xf9 | 1;
        return;
      }
      return;
    }
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA897B85A05C388DA64CE492DB7ECEBD3D5A7961C5FB0CE81DFB24BAEAF378C5
 * Entry: 0x00058590, Ghidra index: 870, label: FUN_00058590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00058590(float param_1)

{
  int *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < (float)in_ECX[3] == (param_1 == (float)in_ECX[3])) {
    if ((param_1 < (float)in_ECX[4] != (param_1 == (float)in_ECX[4])) && (2 < in_ECX[1])) {
      iVar1 = *in_ECX;
      in_ECX[1] = 3;
      if (3 < iVar1) {
        *in_ECX = 3;
        return 3;
      }
    }
  }
  else if (1 < in_ECX[1]) {
    in_ECX[1] = 2;
    if (*in_ECX < 3) {
      in_ECX[9] = -0x40800000;
      return *in_ECX;
    }
    *in_ECX = 2;
    in_ECX[9] = -0x40800000;
    return 2;
  }
  return iVar1;
}

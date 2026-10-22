/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 504DD1AE7311FC1F9781FA84E9D43210EE96C3033379A3634355B4C322D71FFC
 * Entry: 0x0035b2c0, Ghidra index: 13197, label: FUN_0035b2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035b2c0(float param_1)

{
  undefined2 uVar1;
  int in_EAX;
  undefined2 *in_ECX;
  float *in_EDX;
  int local_8;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    local_8 = (int)(longlong)ROUND(param_1 * *in_EDX);
    if (local_8 < 0x7fff) {
      if (local_8 < -0x7fff) {
        uVar1 = 0x8000;
      }
      else {
        uVar1 = (undefined2)(longlong)ROUND(param_1 * *in_EDX);
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    *in_ECX = uVar1;
    in_ECX = in_ECX + 1;
    in_EDX = in_EDX + 1;
  }
  return;
}

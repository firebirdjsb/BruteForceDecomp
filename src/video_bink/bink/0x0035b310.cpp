/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 406EAD30A87A76C9DAF9059830C8A89B114F29776BC9C00CBE6241E37E57F7E2
 * Entry: 0x0035b310, Ghidra index: 13198, label: FUN_0035b310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035b310(float param_1)

{
  undefined2 uVar1;
  undefined2 *in_ECX;
  float *in_EDX;
  int unaff_ESI;
  int iVar2;
  int local_10;
  
  for (iVar2 = unaff_ESI; iVar2 != 0; iVar2 = iVar2 + -1) {
    local_10 = (int)(longlong)ROUND(param_1 * *in_EDX);
    if (local_10 < 0x7fff) {
      if (local_10 < -0x7fff) {
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
    local_10 = (int)(longlong)ROUND(param_1 * in_EDX[unaff_ESI]);
    if (local_10 < 0x7fff) {
      if (local_10 < -0x7fff) {
        uVar1 = 0x8000;
      }
      else {
        uVar1 = (undefined2)(longlong)ROUND(param_1 * in_EDX[unaff_ESI]);
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    in_ECX[1] = uVar1;
    in_ECX = in_ECX + 2;
    in_EDX = in_EDX + 1;
  }
  return;
}

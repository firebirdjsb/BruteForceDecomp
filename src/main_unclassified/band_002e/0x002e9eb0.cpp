/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 134AF56BD56DB0781A4A292F23B22933BDAD6884AAF02A5A0DC4C209A847EB44
 * Entry: 0x002e9eb0, Ghidra index: 10567, label: FUN_002e9eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e9eb0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    if ((code *)in_ECX[8] != (code *)0x0) {
      (*(code *)in_ECX[8])(*in_ECX,in_ECX[5] * in_ECX[4] + -1 + in_ECX[2]);
    }
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[4] = 0;
  }
  return;
}

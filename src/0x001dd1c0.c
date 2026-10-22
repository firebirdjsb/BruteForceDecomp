/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39F33F092B6EF7640C876F8EFBACAD996C928A03BD0840B246A2B95F453D6F67
 * Entry: 0x001dd1c0, Ghidra index: 6617, label: FUN_001dd1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd1c0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
    in_EAX[6] = in_ECX[6];
    in_EAX[7] = in_ECX[7];
    in_EAX[8] = in_ECX[8];
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 909B1A39B7337F2FA8D8626167F578BF92643CF163EE37F401893B5B813DB166
 * Entry: 0x002fe760, Ghidra index: 11030, label: __aullshr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio */

ulonglong __aullshr(void)

{
  uint in_EAX;
  byte in_CL;
  uint in_EDX;
  
  if (0x3f < in_CL) {
    return 0;
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX >> (in_CL & 0x1f),
                    in_EAX >> (in_CL & 0x1f) | in_EDX << 0x20 - (in_CL & 0x1f));
  }
  return (ulonglong)(in_EDX >> (in_CL & 0x1f));
}

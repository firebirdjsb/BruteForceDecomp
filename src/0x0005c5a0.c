/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E0C2349F631650223A04805E0BA17A34D50CEB12F95B527EACFD5E5F332AE58
 * Entry: 0x0005c5a0, Ghidra index: 953, label: FUN_0005c5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005c5a0(void)

{
  float *in_ECX;
  char unaff_BL;
  float *unaff_ESI;
  
  if ((((in_ECX[3] != 0.0) && (in_ECX[2] != 0.0)) && (in_ECX[3] != in_ECX[2])) &&
     (((unaff_ESI == (float *)0x0 || (*in_ECX < *unaff_ESI != (*in_ECX == *unaff_ESI))) &&
      ((unaff_BL != '\0' || (*in_ECX < 0.25)))))) {
    return;
  }
  return;
}

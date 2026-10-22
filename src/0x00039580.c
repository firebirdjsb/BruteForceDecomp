/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B1541256181E8AFB82A1D0C44ECF19E9D8DDB2D65DF923B08773FA9BB23C609
 * Entry: 0x00039580, Ghidra index: 401, label: FUN_00039580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00039580(void)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  *in_EAX = *in_ECX * *in_EDX + in_ECX[1] * in_EDX[1] + in_ECX[2] * in_EDX[2] + in_ECX[9];
  in_EAX[1] = in_ECX[4] * in_EDX[1] + in_ECX[3] * *in_EDX + in_ECX[5] * in_EDX[2] + in_ECX[10];
  in_EAX[2] = in_ECX[7] * in_EDX[1] + in_ECX[6] * *in_EDX + in_ECX[8] * in_EDX[2] + in_ECX[0xb];
  return;
}

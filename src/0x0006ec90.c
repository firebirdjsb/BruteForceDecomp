/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC30B9F139C5E362DFB71074BAEEC650F345FEB64B810D639F7EE930BAE795FA
 * Entry: 0x0006ec90, Ghidra index: 1250, label: FUN_0006ec90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006ec90(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  in_EAX[3] = in_ECX[9];
  in_EAX[4] = in_ECX[3];
  in_EAX[5] = in_ECX[4];
  in_EAX[6] = in_ECX[5];
  in_EAX[7] = in_ECX[10];
  in_EAX[8] = in_ECX[6];
  in_EAX[9] = in_ECX[7];
  in_EAX[10] = in_ECX[8];
  in_EAX[0xb] = in_ECX[0xb];
  in_EAX[0xe] = 0;
  in_EAX[0xd] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xf] = 0x3f800000;
  return;
}

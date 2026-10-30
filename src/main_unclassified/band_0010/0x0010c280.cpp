/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6E504AA45A22739DBF24B5B1844DFCB0307CE6172F7E8B06B6D46C9B9EA7E9F
 * Entry: 0x0010c280, Ghidra index: 3464, label: FUN_0010c280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010c280(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[2] = *in_EAX;
  unaff_ESI[3] = in_EAX[1];
  unaff_ESI[4] = in_EAX[2];
  unaff_ESI[5] = in_EAX[3];
  FUN_001e0dd0(unaff_ESI + 6);
  return;
}

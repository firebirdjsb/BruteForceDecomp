/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2A6C43A8214FE8F7FF35451458C7F85F99C843A80266B2336B8309DCC198B67
 * Entry: 0x001cacc0, Ghidra index: 5855, label: FUN_001cacc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cacc0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = in_EAX[1];
  unaff_ESI[2] = in_EAX[2];
  unaff_ESI[3] = in_EAX[3];
  unaff_ESI[4] = in_EAX[4];
  *(undefined1 *)(unaff_ESI + 5) = *(undefined1 *)(in_EAX + 5);
  unaff_ESI[6] = in_EAX[6];
  unaff_ESI[7] = in_EAX[7];
  unaff_ESI[8] = in_EAX[8];
  unaff_ESI[9] = in_EAX[9];
  unaff_ESI[10] = in_EAX[10];
  FUN_001cca00(unaff_ESI + 0xb);
  return;
}

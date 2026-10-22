/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA50BCAC6AFA1A655459ED365F60DF2CBC20950283AAD203ED51130D924DC67D
 * Entry: 0x002228d0, Ghidra index: 7587, label: FUN_002228d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002228d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = *in_EAX;
  uVar1 = in_EAX[3];
  uVar2 = in_EAX[2];
  unaff_EDI[1] = in_EAX[1];
  unaff_EDI[2] = uVar2;
  unaff_EDI[3] = uVar1;
  unaff_EDI[4] = in_EAX[4];
  unaff_EDI[5] = in_EAX[5];
  unaff_EDI[7] = 0;
  if (in_EAX[7] != 0) {
    FUN_0008f6a0(in_EAX[7]);
  }
  return;
}

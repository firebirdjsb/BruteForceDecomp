/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FE9933D8E31A5C486B3573B8170DC4B6DF56DFECB1BD31ACE454CDC5FEEC305
 * Entry: 0x0017d480, Ghidra index: 5070, label: FUN_0017d480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d480(undefined4 param_1,undefined1 param_2)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[2] = param_1;
  unaff_ESI[3] = *in_EAX;
  FUN_0017cb30();
  unaff_ESI[0x1f] = in_EAX[0x1c];
  *(undefined1 *)(unaff_ESI + 0x20) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x81) = 0;
  return;
}

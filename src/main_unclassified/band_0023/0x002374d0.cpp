/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76FAC55183573404BAF206374FBC7E731FF35BA02EA2CDFAA7A0826B91BD33AD
 * Entry: 0x002374d0, Ghidra index: 7849, label: FUN_002374d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002374d0(undefined2 param_1,undefined4 param_2)

{
  int *piVar1;
  int in_EAX;
  undefined4 *in_ECX;
  int *in_EDX;
  int unaff_EDI;
  
  in_ECX[3] = in_EAX;
  *in_ECX = in_EDX;
  in_ECX[1] = in_EDX;
  piVar1 = (int *)((in_EAX / unaff_EDI) * unaff_EDI + (int)in_EDX);
  in_ECX[2] = piVar1;
  while (in_EDX < piVar1) {
    *in_EDX = (int)in_EDX + unaff_EDI;
    in_EDX = (int *)((int)in_EDX + unaff_EDI);
  }
  *(undefined2 *)(in_ECX + 4) = param_1;
  *(short *)((int)in_ECX + 0x12) = (short)unaff_EDI;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = param_2;
  return;
}

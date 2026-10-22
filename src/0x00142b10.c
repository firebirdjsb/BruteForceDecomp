/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B03F1BCA016699D7B18D7BF5DBBE4E99213305D6C8265F9DF5DD23CF03321A3C
 * Entry: 0x00142b10, Ghidra index: 4131, label: FUN_00142b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00142b10(undefined4 param_1,undefined1 param_2)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[2] = param_1;
  unaff_ESI[3] = *in_EAX;
  FUN_00142460(unaff_ESI + 4,in_EAX + 1);
  *(undefined1 *)(unaff_ESI + 7) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x1d) = 0;
  return;
}

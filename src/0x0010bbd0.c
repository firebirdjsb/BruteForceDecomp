/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C4EC2DE470529FAF57D784E99E0BCAA4D0EAE0E7F672DD2EA4F2E5439E45B1D
 * Entry: 0x0010bbd0, Ghidra index: 3450, label: FUN_0010bbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010bbd0(undefined4 param_1,undefined1 param_2)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[2] = param_1;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[3] = *in_EAX;
  FUN_0010b470(unaff_ESI + 4);
  *(undefined1 *)(unaff_ESI + 8) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x21) = 0;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BA5E67DBE7DED115963EC338335D7F2B833B81A5093EC9595B5B54B7BBE3EC0
 * Entry: 0x000506a0, Ghidra index: 706, label: FUN_000506a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000506a0(undefined4 param_1,undefined1 param_2)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[2] = param_1;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[3] = *in_EAX;
  FUN_000506d0(unaff_ESI + 4);
  *(undefined1 *)(unaff_ESI + 8) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x21) = 0;
  return;
}

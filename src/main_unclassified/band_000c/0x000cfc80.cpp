/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4C4B02F77E099E753C9CD7593F656F49A298072F0899C12039149F7A2516E40
 * Entry: 0x000cfc80, Ghidra index: 2566, label: FUN_000cfc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000cfda0(int param_1,undefined4 param_2,float *param_3);

void FUN_000cfc80(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = in_EAX - unaff_EDI >> 2;
  for (iVar2 = iVar1 - (in_EAX - unaff_EDI >> 0x1f) >> 1; 0 < iVar2; iVar2 = iVar2 + -1) {
    FUN_000cfda0(iVar1,*(undefined4 *)(unaff_EDI + -4 + iVar2 * 4),param_1);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65470CA28D74348B84C116221F87D924AFA2509035A3AD65F6F171E489861D66
 * Entry: 0x0010dc60, Ghidra index: 3503, label: FUN_0010dc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010dc60(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x80) = in_ECX;
  *(int *)(unaff_ESI + 0x7c) = in_EAX;
  FUN_0014c470(in_ECX);
  iVar1 = 0;
  if (0 < in_ECX * in_EAX) {
    do {
      *(undefined4 *)(*(int *)(unaff_ESI + 0xac) + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_ECX * in_EAX);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11F4B06040D274FD7D0F6B998EC128F152EC94EC9DF70333287C14D9A4D52BFD
 * Entry: 0x002383f0, Ghidra index: 7872, label: FUN_002383f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002383f0(void)

{
  char *pcVar1;
  char cVar2;
  char *unaff_ESI;
  
  if (unaff_ESI != (char *)0x0) {
    cVar2 = *unaff_ESI;
    while (cVar2 != '\0') {
      pcVar1 = unaff_ESI + 1;
      unaff_ESI = unaff_ESI + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}

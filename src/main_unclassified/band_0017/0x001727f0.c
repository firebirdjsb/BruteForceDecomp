/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA11242F14B827891D78F8B793227ED7C46B66A262CD7A0E9B9CE905169CEBF9
 * Entry: 0x001727f0, Ghidra index: 4866, label: FUN_001727f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001727f0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *unaff_EDI;
  
  if (unaff_EDI == (char *)0x0) {
    return 0;
  }
  pcVar2 = unaff_EDI;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = thunk_FUN_002ea01d(pcVar2 + (1 - (int)(unaff_EDI + 1)));
  iVar4 = iVar3 - (int)unaff_EDI;
  do {
    cVar1 = *unaff_EDI;
    unaff_EDI[iVar4] = cVar1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return iVar3;
}

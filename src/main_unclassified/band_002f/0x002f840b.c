/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48EA2E22472AADFB3ACF7943CAF2605F0EC3BAAB08E3C88547363027898B63CD
 * Entry: 0x002f840b, Ghidra index: 10946, label: lstrlenA
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int XAPILIB__lstrlenA(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  if (param_1 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    iVar3 = (int)param_1 - (int)pcVar1;
  }
  return iVar3;
}

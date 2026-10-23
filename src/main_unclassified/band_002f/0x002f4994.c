/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7922A0326B6503D4FDC29DDE11C2A97B0E4CA62BC3B60549558A41F9088CE4C
 * Entry: 0x002f4994, Ghidra index: 10863, label: SetEvent
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__SetEvent(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = NtSetEvent(param_1,0);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
  }
  return iVar1 >= 0;
}

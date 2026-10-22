/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2E1064E3BB9CCCB1B3B8D6070BF4D86F5521890C87CC2DCEDFB4933C5328B28
 * Entry: 0x002f506d, Ghidra index: 10885, label: XapiSetLastNTError
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XapiSetLastNTError(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  
  uVar1 = RtlNtStatusToDosError(param_1);
  SetLastError(uVar1);
  return extraout_EDX;
}

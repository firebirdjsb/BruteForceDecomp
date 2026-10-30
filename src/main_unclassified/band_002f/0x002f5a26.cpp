/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F89583D93B758CBE157B4B6D93532ECFBA29D7906D6885EFD52E2E2EDA7C7CF
 * Entry: 0x002f5a26, Ghidra index: 10899, label: XLoadContentSignaturesEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XLoadContentSignaturesEx(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_108 [260];
  
  FUN_002f56db(param_2,local_108);
  XLoadContentSignaturesWithFileName(param_1,local_108);
  return;
}

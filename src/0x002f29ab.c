/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9FC4CB510DF9A8BFAB25598E751652EDE06FB8299962EF1DC5B511C059A23E2
 * Entry: 0x002f29ab, Ghidra index: 10811, label: GetTickCount
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
undefined4 XAPILIB__GetTickCount(void)

{
  return *(undefined4 *)KeTickCount_exref;
}

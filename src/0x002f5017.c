/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0956B35A264BB8CB8CAA6B492B029A3E420AFBB0678D7F9FDEE2E3229394AF8
 * Entry: 0x002f5017, Ghidra index: 10883, label: GetLastError
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xapi_tls_filter_source.h"
undefined4 XAPILIB__GetLastError(void)

{
  int unaff_FS_OFFSET;
  
  return *(undefined4 *)(*(int *)(*(int *)(unaff_FS_OFFSET + 4) + _tls_index * 4) + 4);
}

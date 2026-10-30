/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B81B320490EC5DF99961CCCEFEF917A273B05CADE02F05FD8FCBC8347D81A9AB
 * Entry: 0x002f503f, Ghidra index: 10884, label: SetLastError
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xapi_tls_filter_source.h"
void XAPILIB__SetLastError(undefined4 param_1)

{
  int unaff_FS_OFFSET;
  
  *(undefined4 *)(*(int *)(*(int *)(unaff_FS_OFFSET + 4) + _tls_index * 4) + 4) = param_1;
  return;
}

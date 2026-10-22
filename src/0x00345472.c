/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 030623CD8EA2C0C48FF9E37B946DD34957CB3786F01ABA793B8A34CF90F6ED27
 * Entry: 0x00345472, Ghidra index: 12805, label: GetLastError
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__GetLastError(void)

{
  int unaff_FS_OFFSET;
  
  return *(undefined4 *)(*(int *)(*(int *)(unaff_FS_OFFSET + 4) + _tls_index * 4) + 4);
}

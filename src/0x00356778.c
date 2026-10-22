/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6C5874F3B38AB41C7A1A0C074D8EADEC3D86D58F160AEAE6A8B7007224FBE6A
 * Entry: 0x00356778, Ghidra index: 13142, label: FUN_00356778
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00356778(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x10; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_1[0x11] = 0x67452301;
  param_1[0x12] = 0xefcdab89;
  param_1[0x13] = 0x98badcfe;
  param_1[0x14] = 0x10325476;
  *param_1 = 0x2035444d;
  return 1;
}

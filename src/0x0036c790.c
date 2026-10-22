/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DED328DA726D9386547531C322DCE85EADF3748CB764EA1445D7328AB8E225A5
 * Entry: 0x0036c790, Ghidra index: 13281, label: D3DResource_GetType_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char D3D8LTCG__D3DResource_GetType_0(void)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX & 0x70000;
  if (0x30000 < uVar1) {
    if (uVar1 == 0x40000) {
      if ((in_ECX[3] & 4) != 0) {
        return '\x05';
      }
      return (0x20 < (in_ECX[3] & 0xf0)) + '\x03';
    }
    if (uVar1 != 0x50000) {
      return '\n';
    }
    return (0x20 < (in_ECX[3] & 0xf0)) + '\x01';
  }
  if (uVar1 == 0x30000) {
    return '\t';
  }
  if (uVar1 != 0) {
    return (uVar1 != 0x10000) + '\a';
  }
  return '\x06';
}

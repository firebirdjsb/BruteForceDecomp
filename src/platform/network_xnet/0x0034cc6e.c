/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27F0537D15A823D221E9197A2CB921A177A4BABAA8C8A2C177517F94447E3137
 * Entry: 0x0034cc6e, Ghidra index: 12987, label: FUN_0034cc6e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034cc6e(void)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if ((((uVar1 != 0) && ((uVar1 & 0xff) != 0)) && (uVar1 != 0xffffffff)) &&
     ((((byte)uVar1 & 0xf0) != 0xe0 && ((uVar1 & 0xff) != 0x7f)))) {
    return 1;
  }
  return 0;
}

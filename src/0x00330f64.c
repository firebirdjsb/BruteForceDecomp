/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3012681217A1EBD000F81680D5499C8E1312D92B50E5FA7C128161A9C6EDB1E8
 * Entry: 0x00330f64, Ghidra index: 12384, label: FUN_00330f64
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00330f64(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    uVar1 = 0x80150005;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E20B406DF8A8B4AA967471463280F42D03D98D7378E984D6C11911EDE6290AEA
 * Entry: 0x00352e26, Ghidra index: 13069, label: FUN_00352e26
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00352e26(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xa60) = 0;
  *(undefined4 *)(in_ECX + 0xa68) = 0xffffffff;
  *(undefined1 **)(in_ECX + 0xa6c) = &LAB_00352440;
  uVar1 = FUN_0034c812();
  *(undefined4 *)(in_ECX + 0xa74) = uVar1;
  return 0;
}

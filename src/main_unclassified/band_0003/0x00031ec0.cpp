/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D06086CBC51E5229154726BFD89FC987B8EA4504F81BEF19FAF0F56F4868E272
 * Entry: 0x00031ec0, Ghidra index: 320, label: FUN_00031ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00031ec0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 300))();
  if (((in_ECX[0xe1] & 0x100U) != 0) && (in_ECX[6] == 3)) {
    (**(code **)(*in_ECX + 0xac))();
    return 1;
  }
  (**(code **)(*in_ECX + 0x2ac))();
  return 1;
}

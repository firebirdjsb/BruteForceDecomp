/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45DB4E4191EA97F59755122941E594A5B4631983275FF1ABE85627D61C09E1A6
 * Entry: 0x002b5a00, Ghidra index: 9807, label: FUN_002b5a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b5a00(undefined4 param_1)

{
  int in_EAX;
  
  if (*(ushort *)(in_EAX + 8) <= *(ushort *)(in_EAX + 10)) {
    FUN_002ccf80();
  }
  *(undefined4 *)(*(int *)(in_EAX + 0xc) + (uint)*(ushort *)(in_EAX + 10) * 4) = param_1;
  *(short *)(in_EAX + 10) = *(short *)(in_EAX + 10) + 1;
  return;
}

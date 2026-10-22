/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17E57BBAD0EC309A3BCE3ACD3A073F0A3A95F1EF4435A355A73505BDE2CC01EF
 * Entry: 0x000e0560, Ghidra index: 2745, label: FUN_000e0560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e0560(void)

{
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  if (*(undefined4 **)(unaff_ESI + 0xc4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0xc4c))(1);
    *(undefined4 *)(unaff_ESI + 0xc4c) = 0;
  }
  *(undefined4 *)(unaff_ESI + 0xc4c) = unaff_EDI;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EBC9A70B5656DAA5033344051F64170BB6E7B581176CBABB9EB8B40BF7CF22E
 * Entry: 0x002497f0, Ghidra index: 8187, label: FUN_002497f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002497f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(unaff_EDI + 2);
    FUN_00137500();
    FUN_00249bc0();
  }
  return;
}

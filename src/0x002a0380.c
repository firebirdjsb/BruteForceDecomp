/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD0392F3542FCF1E28F1B2A439983198D2F0C3D18481A9C843E25001B5EB5AF5
 * Entry: 0x002a0380, Ghidra index: 9506, label: FUN_002a0380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a0380(void)

{
  undefined4 uVar1;
  int *unaff_ESI;
  undefined1 *unaff_EDI;
  
  (**(code **)(*unaff_ESI + 0x10))();
  if ((short)unaff_ESI == 0) {
    *unaff_EDI = 0;
    return 0;
  }
  uVar1 = (**(code **)(*unaff_ESI + 0x10))();
  if (((uint)unaff_ESI & 1) != 0) {
    uVar1 = (**(code **)(*unaff_ESI + 0x10))();
  }
  return uVar1;
}

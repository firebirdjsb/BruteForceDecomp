/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD856200D4E1AA40079BBC85E2437C0D6E532B57C1A9E0E8977A987C61A2542E
 * Entry: 0x002a6450, Ghidra index: 9585, label: FUN_002a6450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a6450(void)

{
  ushort uVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  ushort uStack_64;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  (**(code **)(*unaff_ESI + 0x1c))();
  (**(code **)(*unaff_ESI + 0x14))();
  (**(code **)(*unaff_ESI + 0x40))();
  uStack_4c = 0x2a648b;
  (**(code **)(*unaff_EDI + 0x14))();
  uStack_4c = 0;
  uStack_50 = 2;
  puStack_54 = &stack0xffffffc8;
  (**(code **)(*unaff_EDI + 0x14))();
  (**(code **)(*unaff_EDI + 0x14))();
  uVar1 = 0;
  uStack_64 = (ushort)&puStack_54;
  if (uStack_64 != 0) {
    do {
      uStack_50 = 0;
      uStack_4c = 0;
      (**(code **)(*unaff_ESI + 0x2c))();
      (**(code **)(*unaff_ESI + 0x30))();
      (**(code **)(*unaff_EDI + 0x14))();
      (**(code **)(*unaff_EDI + 0x14))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < uStack_64);
  }
  return;
}

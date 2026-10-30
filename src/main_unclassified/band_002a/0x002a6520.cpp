/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AADB918B70D5E572C753B670A66614AC0B8201C506E30BCD8B9710D9E2FF16F3
 * Entry: 0x002a6520, Ghidra index: 9586, label: FUN_002a6520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a6520(void)

{
  ushort uVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  ushort uVar2;
  
  (**(code **)(*unaff_EDI + 0xc))();
  (**(code **)(*unaff_ESI + 0x10))();
  (**(code **)(*unaff_ESI + 0x10))();
  (**(code **)(*unaff_ESI + 0x10))();
  (**(code **)(*unaff_EDI + 0x18))();
  uVar2 = (ushort)unaff_EDI;
  if (uVar2 == 1) {
    (**(code **)(*unaff_ESI + 0x10))();
    (**(code **)(*unaff_ESI + 0x10))();
    (**(code **)(*unaff_EDI + 0x18))();
    (**(code **)(*unaff_EDI + 0x3c))();
    return;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      (**(code **)(*unaff_ESI + 0x10))();
      (**(code **)(*unaff_ESI + 0x10))();
      (**(code **)(*unaff_EDI + 0x20))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  (**(code **)(*unaff_EDI + 0x3c))();
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F4912D4855884816472A77EF650C2AC64220035E65280C31747FD96B45A262B
 * Entry: 0x001b3200, Ghidra index: 5635, label: FUN_001b3200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3200(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *unaff_EDI;
    FUN_001b9590(puVar1 + 1);
    puVar1[5] = unaff_EDI[5];
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(unaff_EDI + 6);
    *(undefined1 *)((int)puVar1 + 0x19) = *(undefined1 *)((int)unaff_EDI + 0x19);
    *unaff_EBX = puVar1;
    return;
  }
  *unaff_EBX = 0;
  return;
}

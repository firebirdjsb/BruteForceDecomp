/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83F6CD3F9CD326F74E1752D1193C254B4B2AE8D82EB2F9B9E06869DCEA14F848
 * Entry: 0x001b23a0, Ghidra index: 5619, label: FUN_001b23a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b23a0(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *unaff_EDI;
    puVar1[1] = unaff_EDI[1];
    puVar1[2] = unaff_EDI[2];
    FUN_001b7c70(puVar1 + 3);
    *unaff_EBX = puVar1;
    return;
  }
  *unaff_EBX = 0;
  return;
}

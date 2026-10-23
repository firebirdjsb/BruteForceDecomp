/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 975693BBED9D0E390ADA09CDAEB67D952F8BD55928E58AA676B2FBDFE0B1B3AF
 * Entry: 0x001f3840, Ghidra index: 7023, label: FUN_001f3840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f3840(void)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_000d0aa0(in_ECX);
  puVar1[1] = 0;
  *puVar1 = *(undefined4 *)(unaff_ESI + 0x1c);
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    *(undefined4 **)(*(int *)(unaff_ESI + 0x1c) + 4) = puVar1;
  }
  *(undefined4 **)(unaff_ESI + 0x1c) = puVar1;
  if (*(int *)(unaff_ESI + 0x20) == 0) {
    *(undefined4 **)(unaff_ESI + 0x20) = puVar1;
  }
  return;
}

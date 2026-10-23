/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F60E9EE42984055D76A07E7C06C2C995DA3E0B70CFEF423742546F9C95077C3D
 * Entry: 0x0015b710, Ghidra index: 4527, label: FUN_0015b710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015b710(char param_1)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  *(char *)(unaff_ESI + 0x79) = param_1;
  if (((param_1 != '\0') && ((*(byte *)(unaff_ESI + 0x26) & 0x10) == 0)) &&
     (*(int *)(unaff_ESI + 8) != 0)) {
    puVar1 = (undefined4 *)FUN_000e0350(*(int *)(unaff_ESI + 8),&param_1,unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x14) = *puVar1;
    *(byte *)(unaff_ESI + 0x26) = *(byte *)(unaff_ESI + 0x26) | 0x10;
  }
  return;
}

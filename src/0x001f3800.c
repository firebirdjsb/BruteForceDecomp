/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4EB1AE4D136FF8581D9A17CBA905BD81B3B8168BAF89B92A11A508CFBCE965B
 * Entry: 0x001f3800, Ghidra index: 7022, label: FUN_001f3800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f3800(void)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_000d0aa0(in_ECX);
  if (*(int *)(unaff_ESI + 0x24) == 0) {
    *(undefined4 **)(unaff_ESI + 0x24) = puVar1;
  }
  *puVar1 = 0;
  if (*(undefined4 **)(unaff_ESI + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_ESI + 0x20) = puVar1;
    puVar1[1] = *(undefined4 *)(unaff_ESI + 0x20);
    *(undefined4 **)(unaff_ESI + 0x20) = puVar1;
    return;
  }
  puVar1[1] = 0;
  *(undefined4 **)(unaff_ESI + 0x1c) = puVar1;
  *(undefined4 **)(unaff_ESI + 0x20) = puVar1;
  return;
}

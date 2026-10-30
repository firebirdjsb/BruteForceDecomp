/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A089380A1A7FF16E7813E5792A965AA0D2785B6FF4A3CB3F9D264B62B35CF59
 * Entry: 0x000d44c0, Ghidra index: 2651, label: FUN_000d44c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d44c0(undefined4 param_1)

{
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  FUN_000e09c0();
  *(undefined4 *)(unaff_ESI + 0x18) = param_1;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 8;
  *(undefined1 *)(unaff_ESI + 0x24) = 1;
  return;
}

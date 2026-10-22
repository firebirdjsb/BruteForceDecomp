/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02F0ECE1B4DBF95A476F333969666DC3C48CD364463676556EB45AA0D84039EA
 * Entry: 0x0010d660, Ghidra index: 3495, label: FUN_0010d660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010d660(void)

{
  int in_EAX;
  int in_ECX;
  uint uVar1;
  int unaff_ESI;
  
  if (in_EAX < 0) {
    in_EAX = *(int *)(unaff_ESI + 0x80) + -1;
  }
  if (*(int *)(unaff_ESI + 0x80) <= in_EAX) {
    in_EAX = 0;
  }
  if (in_ECX < 0) {
    in_ECX = *(int *)(unaff_ESI + 0x7c) + -1;
  }
  if (*(int *)(unaff_ESI + 0x7c) <= in_ECX) {
    in_ECX = 0;
  }
  *(int *)(unaff_ESI + 0x84) = in_EAX;
  *(int *)(unaff_ESI + 0x88) = in_ECX;
  for (uVar1 = 0;
      (*(int *)(unaff_ESI + 0xbc) != 0 &&
      (uVar1 < (uint)(*(int *)(unaff_ESI + 0xc0) - *(int *)(unaff_ESI + 0xbc) >> 2)));
      uVar1 = uVar1 + 1) {
    FUN_00101170();
  }
  return 1;
}

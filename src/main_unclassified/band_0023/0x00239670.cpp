/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73FD0A198E343C36D192C29C076086AB5BC922AD645AC2BFD5DB4173E882E744
 * Entry: 0x00239670, Ghidra index: 7889, label: FUN_00239670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00239670(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x1bf8) == 0) {
    FUN_00238910(*(undefined4 *)(unaff_EDI + 0x1bf0));
    *(undefined4 *)(unaff_EDI + 0x1bf8) = *(undefined4 *)(unaff_EDI + 0x34);
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x1bf8) + 8) = *(undefined4 *)(unaff_EDI + 0x1bf0);
  }
  if (*(int *)(unaff_EDI + 0x1c0c) == 0) {
    FUN_00238910(*(undefined4 *)(unaff_EDI + 0x1c04));
    *(undefined4 *)(unaff_EDI + 0x1c0c) = *(undefined4 *)(unaff_EDI + 0x34);
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x1c0c) + 8) = *(undefined4 *)(unaff_EDI + 0x1c04);
  }
  if (*(int *)(unaff_EDI + 0x1c20) == 0) {
    FUN_00238910(*(undefined4 *)(unaff_EDI + 0x1c18));
    *(undefined4 *)(unaff_EDI + 0x1c20) = *(undefined4 *)(unaff_EDI + 0x34);
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x1c20) + 8) = *(undefined4 *)(unaff_EDI + 0x1c18);
  }
  if (*(int *)(unaff_EDI + 0x1c34) != 0) {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x1c34) + 8) = *(undefined4 *)(unaff_EDI + 0x1c2c);
    return;
  }
  FUN_00238910(*(undefined4 *)(unaff_EDI + 0x1c2c));
  *(undefined4 *)(unaff_EDI + 0x1c34) = *(undefined4 *)(unaff_EDI + 0x34);
  return;
}

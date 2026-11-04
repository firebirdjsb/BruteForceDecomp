/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2BDDE441140F1F69B29CEE0F26B7F31F0902CBAD1BCC2DA16F5A769619403CB
 * Entry: 0x001e8010, Ghidra index: 6833, label: FUN_001e8010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_001611d0(void);
void FUN_001e8010(int param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar2 = 0;
  if (*(int *)(unaff_EDI + 4) != 0) {
    if (*(int *)(unaff_EDI + 4) != 0) goto LAB_001e8028;
    iVar1 = 0;
    while( true ) {
      if (*(int *)(iVar1 + 4) == param_1) {
        FUN_001611d0();
      }
      uVar2 = uVar2 + 1;
      if (*(uint *)(unaff_EDI + 4) <= uVar2) break;
LAB_001e8028:
      iVar1 = *(int *)(*(int *)(unaff_EDI + 8) + uVar2 * 4);
    }
  }
  return;
}

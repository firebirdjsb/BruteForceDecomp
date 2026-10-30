/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D32D30D70F194424EECC50EE4D7F01F74518158D867965262C15CD4FA0FD5E5
 * Entry: 0x000d3ee0, Ghidra index: 2635, label: FUN_000d3ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d3f70(int param_1);

void FUN_000d3ee0(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int unaff_EDI;
  
  for (iVar1 = (in_EAX - unaff_EDI >> 2) - (in_EAX - unaff_EDI >> 0x1f) >> 1; 0 < iVar1;
      iVar1 = iVar1 + -1) {
    FUN_000d3f70(*(undefined4 *)(unaff_EDI + -4 + iVar1 * 4),param_1);
  }
  return;
}

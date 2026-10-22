/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 938B3D7568E81ED5C19139BD39011548A2D69C1CA27C9383EB044313E78674C9
 * Entry: 0x00225d20, Ghidra index: 7633, label: FUN_00225d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00225d20(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  uint *unaff_EDI;
  
  iVar1 = FUN_000a2840(unaff_EDI);
  if ((iVar1 != *(int *)(in_EAX + 4)) && (*(uint *)(iVar1 + 0xc) <= *unaff_EDI)) {
    *unaff_EBX = iVar1;
    return;
  }
  *unaff_EBX = *(int *)(in_EAX + 4);
  return;
}

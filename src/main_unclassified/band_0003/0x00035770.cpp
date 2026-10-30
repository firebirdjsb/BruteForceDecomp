/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4EE7995973A7CA64319233C2BB27B2E710B4C4F9AB51DBE07ACF2AF64E486BC
 * Entry: 0x00035770, Ghidra index: 350, label: FUN_00035770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern bool FUN_00121170(undefined4 param_1);

undefined4 FUN_00035770(int param_1)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  
  FUN_000120f0();
  iVar1 = FUN_000120f0();
  if (-1 < unaff_EBX) {
    if ((*(int *)(*(int *)(iVar1 + 0x2e8) + 0x1b8) == param_1) &&
       (*(int *)(*(int *)(iVar1 + 0x2e8) + 0x1bc) == unaff_EBX)) {
      FUN_00121170(*(undefined4 *)(unaff_ESI + 0x84));
      return 1;
    }
  }
  return 0;
}

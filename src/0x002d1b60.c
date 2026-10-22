/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9566A55CE32E7E32AD5BA694007036D4BB359D124447B4B8CF4C43B05EC26943
 * Entry: 0x002d1b60, Ghidra index: 10191, label: FUN_002d1b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
void FUN_002d1b60(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar1 = (*(code *)PTR_FUN_003bc650)(*unaff_ESI * 8 + 8);
  iVar2 = 0;
  *unaff_ESI = *unaff_ESI * 2 + 1;
  if (0 < unaff_ESI[1] << 1) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = *(undefined4 *)(unaff_ESI[2] + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (unaff_ESI[1] << 1) >> 1);
  }
  if (((unaff_ESI[1] & 0x80000000U) != 0) && (unaff_ESI[2] != 0)) {
    (*(code *)PTR_FUN_003bc654)(unaff_ESI[2]);
    return;
  }
  unaff_ESI[2] = iVar1;
  unaff_ESI[1] = unaff_ESI[1] | 0x80000000;
  return;
}

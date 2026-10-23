/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B5522F1509ABA631E5E4F60D95489F1ED6A31DA39874B99683A5C3066CB88C1
 * Entry: 0x002bbe60, Ghidra index: 9916, label: FUN_002bbe60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bbe60(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  if ((iVar1 != 0) && ((*(short *)((int)unaff_ESI + 0x12) == 0 || (iVar1 != *unaff_ESI)))) {
    (*(code *)PTR_FUN_003bc654)(iVar1);
    return;
  }
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  return;
}

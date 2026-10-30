/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B459A8B88A46897DE258C7A4EC4001FFE868339EC38E74C8C70830D8BA83A469
 * Entry: 0x0013ef70, Ghidra index: 4042, label: FUN_0013ef70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039c730;
void FUN_0013ef70(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  FUN_0013b770();
  piVar1 = DAT_00469b54;
  *unaff_ESI = &PTR_LAB_0039c730;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[0xf] = *(undefined4 *)(iVar2 + 0x420);
  (**(code **)(*DAT_00469b54 + 0x48))();
  FUN_0013de50();
  return;
}

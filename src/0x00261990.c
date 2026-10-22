/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95B913F7ED699880FE3F4561285C78CEA32AED772987BD20A5A77CF948437228
 * Entry: 0x00261990, Ghidra index: 8643, label: FUN_00261990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392ce8;
extern uint32_t PTR_LAB_00392d04;
extern uint32_t PTR_LAB_00392d30;
void FUN_00261990(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  uVar3 = FUN_00061500(unaff_ESI + 2);
  unaff_ESI[3] = uVar3;
  unaff_ESI[4] = 0;
  FUN_00288a10();
  unaff_ESI[5] = 0;
  *unaff_ESI = &PTR_LAB_00392d30;
  unaff_ESI[1] = &PTR_LAB_00392d04;
  puVar1 = unaff_ESI + 7;
  *puVar1 = &PTR_LAB_00392ce8;
  unaff_ESI[8] = 1;
  unaff_ESI[9] = unaff_ESI;
  iVar2 = *(int *)(unaff_EDI + 8);
  unaff_ESI[6] = iVar2;
  if (iVar2 == 0) {
    unaff_ESI[6] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}

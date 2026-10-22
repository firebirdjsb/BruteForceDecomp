/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2001D837AEECB019E82D94CA3361DB3908914AE7B92DE83E7F768462848DC004
 * Entry: 0x002898d0, Ghidra index: 9134, label: FUN_002898d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_002898d0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *in_EAX;
  int *piVar4;
  
  do {
    cVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  piVar4 = (int *)FUN_00294640();
  FUN_00289520(1);
  piVar3 = DAT_00469888;
  iVar2 = *DAT_00469888;
  *DAT_00469888 = iVar2 + -0x10;
  piVar4[4] = *(int *)(iVar2 + -0x10);
  piVar4[5] = *(int *)(iVar2 + -0xc);
  piVar4[6] = *(int *)(iVar2 + -8);
  piVar4[7] = *(int *)(iVar2 + -4);
  if ((int *)*piVar4 == piVar4) {
    *piVar4 = piVar3[0x16];
    piVar3[0x16] = (int)piVar4;
  }
  return;
}

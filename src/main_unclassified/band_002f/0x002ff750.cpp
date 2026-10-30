/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBE9C01B6D71D78B35847245BDD056F93005B087078019AED3111D13164677DE
 * Entry: 0x002ff750, Ghidra index: 11068, label: FUN_002ff750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002ff750(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  undefined4 *unaff_ESI;
  
  piVar1 = (int *)((in_EAX + 10) * 0x10 + in_ECX);
  *piVar1 = *piVar1 - in_EDX;
  piVar1[2] = piVar1[2] + -1;
  if (in_EDX < 0x201) {
    iVar2 = (int)*(char *)(in_EDX + 0x10a0 + in_ECX);
    piVar1 = (int *)(in_ECX + 0x34 + iVar2 * 4);
    *piVar1 = *piVar1 + -1;
    *unaff_ESI = *(undefined4 *)(in_ECX + iVar2 * 4);
    unaff_ESI[1] = 0x3425234;
    *(undefined4 **)(in_ECX + iVar2 * 4) = unaff_ESI;
    return;
  }
  (*(code *)PTR_FUN_003bc654)();
  return;
}

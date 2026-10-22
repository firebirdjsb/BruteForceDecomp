/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9ADAA1145532435C9081FD2A939B24A78A9DEB47BE7A6B29F83261EA9F63764
 * Entry: 0x002bbf20, Ghidra index: 9918, label: FUN_002bbf20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bbf20(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int iVar3;
  
  if (0 < *unaff_ESI) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(unaff_ESI[2] + iVar2 + 0x68);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
        *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0x68) = 0;
        *(undefined4 *)(iVar1 + 0x3c) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x70;
    } while (iVar3 < *unaff_ESI);
  }
  if (unaff_ESI[2] != 0) {
    (*(code *)PTR_FUN_003bc654)(unaff_ESI[2]);
    return;
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E5D7C026CD78F0A4FE171C12605501ECD6EFA9FA1DC1574AC358D45C0AB0B69
 * Entry: 0x002ccf80, Ghidra index: 10160, label: FUN_002ccf80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
void FUN_002ccf80(void)

{
  int iVar1;
  int iVar2;
  ushort *unaff_ESI;
  
  iVar1 = (*(code *)PTR_FUN_003bc650)((uint)*unaff_ESI * 8 + 8);
  *unaff_ESI = *unaff_ESI * 2 + 1;
  iVar2 = 0;
  if (unaff_ESI[1] != 0) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = *(undefined4 *)(*(int *)(unaff_ESI + 2) + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)unaff_ESI[1]);
  }
  if ((unaff_ESI[4] != 0) && (*(int *)(unaff_ESI + 2) != 0)) {
    (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 2));
    return;
  }
  *(int *)(unaff_ESI + 2) = iVar1;
  unaff_ESI[4] = 1;
  return;
}

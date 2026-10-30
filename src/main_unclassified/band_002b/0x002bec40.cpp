/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 108DD7C2D6CC5909FECE103331A108CB1F9B13EFD7B96CB4D75A1E31FEFF1BEA
 * Entry: 0x002bec40, Ghidra index: 9982, label: FUN_002bec40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
void FUN_002bec40(void)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar1 = unaff_ESI[3];
  iVar5 = *unaff_ESI;
  *unaff_ESI = in_EAX;
  unaff_ESI[1] = in_EAX + -1;
  puVar2 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(in_EAX * 0xc);
  puVar6 = puVar2;
  for (uVar3 = in_EAX * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar4 = unaff_ESI[2];
  unaff_ESI[3] = (int)puVar2;
  if (-1 < iVar5 + -1) {
    piVar7 = (int *)(iVar1 + 8);
    do {
      if (*piVar7 != 0) {
        FUN_002bece0(piVar7[-1],*piVar7,piVar7[-2]);
      }
      piVar7 = piVar7 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  unaff_ESI[2] = iVar4;
  if ((iVar1 != unaff_ESI[4]) && (iVar1 != 0)) {
    (*(code *)PTR_FUN_003bc654)(iVar1);
    return;
  }
  return;
}

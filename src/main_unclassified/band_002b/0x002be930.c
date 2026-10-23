/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F76BDF675B006F542E98FB6CBC23230DFCDDEE93A2DF4F4FA200CF78D38DE411
 * Entry: 0x002be930, Ghidra index: 9977, label: FUN_002be930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
void FUN_002be930(void)

{
  int iVar1;
  uint in_EAX;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int unaff_ESI;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(unaff_ESI + 0xc);
  iVar5 = *(int *)(unaff_ESI + 4);
  *(uint *)(unaff_ESI + 4) = in_EAX - 1;
  puVar2 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(in_EAX * 8);
  puVar7 = puVar2;
  for (iVar3 = (in_EAX & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  uVar4 = *(uint *)(unaff_ESI + 8);
  *(undefined4 **)(unaff_ESI + 0xc) = puVar2;
  if (-1 < iVar5) {
    piVar6 = (int *)(iVar1 + 4);
    iVar5 = iVar5 + 1;
    do {
      if (*piVar6 != 0) {
        FUN_002be9e0(*piVar6,piVar6[-1]);
      }
      piVar6 = piVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = *(uint *)(unaff_ESI + 8) ^ (*(uint *)(unaff_ESI + 8) ^ uVar4 & 0xffffff) & 0xffffff;
  *(uint *)(unaff_ESI + 8) = uVar4;
  if (((uVar4 & 0xff000000) == 0) && (iVar1 != 0)) {
    (*(code *)PTR_FUN_003bc654)(iVar1);
    return;
  }
  *(undefined1 *)(unaff_ESI + 0xb) = 0;
  return;
}

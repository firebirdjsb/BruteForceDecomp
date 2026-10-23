/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4724AA5AB31D87D4F8C3513A0E999C7D696F19B3AAE7F17A74A862ECA6D5A60F
 * Entry: 0x002ff790, Ghidra index: 11069, label: FUN_002ff790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
int FUN_002ff790(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_ESI;
  
  if (0x200 < in_EAX) {
    iVar4 = (*(code *)PTR_FUN_003bc650)();
    return iVar4;
  }
  iVar8 = (int)*(char *)(in_EAX + 0x10a0 + unaff_ESI);
  iVar4 = *(int *)(unaff_ESI + 0x70 + iVar8 * 4);
  if (*(uint *)(unaff_ESI + 0x68) < (uint)(*(int *)(unaff_ESI + 0x6c) + iVar4)) {
    puVar5 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(0x2040);
    *puVar5 = *(undefined4 *)(unaff_ESI + 0x30);
    *(undefined4 **)(unaff_ESI + 0x30) = puVar5;
    *(undefined4 **)(unaff_ESI + 100) = puVar5 + 0x10;
    *(undefined4 **)(unaff_ESI + 0x6c) = puVar5 + 0x10;
    *(undefined4 **)(unaff_ESI + 0x68) = puVar5 + 0x810;
  }
  iVar2 = *(int *)(unaff_ESI + 0x6c);
  *(undefined4 *)(iVar2 + 4) = 0;
  iVar6 = *(int *)(unaff_ESI + 0x6c) + iVar4;
  *(int *)(unaff_ESI + 0x6c) = iVar6;
  uVar3 = *(undefined4 *)(unaff_ESI + 0x34 + iVar8 * 4);
  iVar7 = iVar4;
  while ((iVar7 < 0x100 && ((uint)(iVar6 + iVar4) < *(uint *)(unaff_ESI + 0x68)))) {
    *(undefined4 *)(iVar6 + 4) = 0;
    puVar5 = *(undefined4 **)(unaff_ESI + 0x6c);
    *(int *)(unaff_ESI + 0xb0) = *(int *)(unaff_ESI + 0xb0) - iVar4;
    *(int *)(unaff_ESI + 0xb8) = *(int *)(unaff_ESI + 0xb8) + -1;
    if (0x200 < iVar4) {
      iVar4 = (*(code *)PTR_FUN_003bc654)(puVar5);
      return iVar4;
    }
    iVar6 = (int)*(char *)(iVar4 + 0x10a0 + unaff_ESI);
    piVar1 = (int *)(unaff_ESI + 0x34 + iVar6 * 4);
    *piVar1 = *piVar1 + -1;
    *puVar5 = *(undefined4 *)(unaff_ESI + iVar6 * 4);
    puVar5[1] = 0x3425234;
    *(undefined4 **)(unaff_ESI + iVar6 * 4) = puVar5;
    iVar6 = *(int *)(unaff_ESI + 0x6c) + iVar4;
    iVar7 = iVar7 + iVar4;
    *(int *)(unaff_ESI + 0x6c) = iVar6;
  }
  *(undefined4 *)(unaff_ESI + 0x34 + iVar8 * 4) = uVar3;
  return iVar2;
}

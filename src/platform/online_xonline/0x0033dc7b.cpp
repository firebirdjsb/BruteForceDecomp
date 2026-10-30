/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D72D513333EB3ECD4F8CBD274A4A2EBA059D624A60712082C38652B562E5089
 * Entry: 0x0033dc7b, Ghidra index: 12598, label: FUN_0033dc7b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0950;
int FUN_0033dc7b(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  local_8 = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  local_14 = *(undefined4 *)(in_ECX + 0x20);
  puVar4 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 0x824);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = FUN_0033cb57(0,&local_1c);
  if (iVar3 == 0) {
    FUN_0033cceb(0,&local_1c);
  }
  piVar2 = *(int **)(in_ECX + 0x10);
  piVar1 = piVar2 + 0x220;
  *(int **)(in_ECX + 0x18) = piVar1;
  if (*(short *)(&DAT_004b0950 + *piVar2 * 10) == 0) {
    if (*(int *)(in_ECX + 0x28) == 1) {
      local_8 = FUN_0033d796(piVar2,piVar1,*(undefined4 *)(in_ECX + 0x20));
      *(undefined4 *)(in_ECX + 0x14) = 6;
    }
    else {
      FUN_0033cf8f(*(undefined4 *)(in_ECX + 0x20));
      FUN_0033d172(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
      *(undefined4 *)(in_ECX + 0x2c) = 0x1500f0;
      *(undefined4 *)(in_ECX + 0x14) = 1;
      iVar3 = *(int *)(*(int *)(in_ECX + 0x10) + 0x8b8);
      if (iVar3 == 0) goto LAB_0033dd5c;
      XAPILIB__SetEvent(iVar3);
    }
  }
  else {
    local_8 = FUN_0033dc17(piVar2,piVar1,*(undefined4 *)(in_ECX + 0x24));
    *(undefined4 *)(in_ECX + 0x14) = 7;
  }
  if (local_8 < 0) {
    *(int *)(in_ECX + 0x2c) = local_8;
    *(undefined4 *)(in_ECX + 0x14) = 1;
  }
LAB_0033dd5c:
  if (*(int *)(in_ECX + 0x14) == 1) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  return local_8;
}

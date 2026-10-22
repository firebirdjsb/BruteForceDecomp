/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB06C05AD300EB841BDA9FB0FC508CEE48B558CC5060FD9CDC952F2EA8A1FDDD
 * Entry: 0x000f8080, Ghidra index: 3114, label: FUN_000f8080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f8080(undefined4 param_1)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  uVar2 = 0xffffffff;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar4 = FUN_002e5bf0(0);
      uVar2 = *(undefined4 *)(iVar4 + 0x2c);
    }
    else {
      uVar2 = 0;
    }
  }
  uVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x264))(param_1,uVar2);
  if (in_EAX != 0) {
    for (piVar3 = *(int **)(in_EAX + 0x74);
        (piVar6 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
        (piVar6 = (int *)*piVar3, piVar6[9] != -0xf88ca08)); piVar3 = piVar3 + 1) {
    }
    if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 4))(), iVar4 == 3)) {
      puVar5 = (undefined4 *)FUN_0010c850();
      return *puVar5;
    }
  }
  return uVar2;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6CFE94AEB39F61FEA4AAD6A223763ACC8ABBC2F5629DA5B3B3904E6659FD8D6
 * Entry: 0x000f3be0, Ghidra index: 3049, label: FUN_000f3be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_000f3be0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uStack_4;
  
  piVar4 = *(int **)(DAT_00469b58 + 8);
  iVar3 = (**(code **)(*piVar4 + 0x120))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x58))();
  if (*piVar4 == 0x17506391) {
    bVar5 = SBORROW4(iVar3,4);
    iVar1 = -4;
  }
  else {
    bVar5 = SBORROW4(iVar3,8);
    iVar1 = -8;
  }
  if (bVar5 != iVar3 + iVar1 < 0) {
    uStack_4 = 0;
    cVar2 = FUN_00102120();
    if (cVar2 != '\0') {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar4 + 4))();
      return cVar2;
    }
  }
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar4 == 0x17506391) {
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    uStack_4 = 0x176982e1;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    uStack_4 = 0xd6984cb;
  }
  (**(code **)(*piVar4 + 8))(&uStack_4,0,0);
  return '\0';
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A6EDDD0A551E91A241CC27CE733A39683169A6B521D47E2FB8391CDF8F6FF55
 * Entry: 0x00107960, Ghidra index: 3369, label: FUN_00107960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d170;
undefined4 FUN_00107960(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = param_1;
  if (*(int *)(param_1[1] + 0x24) == -0x171eb031) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    param_1 = (int *)0xfdf186cd;
    cVar2 = (**(code **)(*piVar3 + 0x30))(&param_1);
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = FUN_001091f0();
    if (cVar2 != '\0') {
      FUN_001090e0(0x3f800000);
    }
    iVar4 = 0;
    piVar3 = (int *)(in_ECX + 0x48);
    while ((int *)*piVar3 != piVar1) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      if (2 < iVar4) {
        return 1;
      }
    }
    if (-1 < iVar4) {
      if (iVar4 < 2) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = 0;
      }
      piVar3 = *(int **)(in_ECX + 0x48 + iVar4 * 4);
      if ((*(byte *)(piVar3 + 10) & 2) == 0) {
        *(byte *)(piVar3 + 10) = *(byte *)(piVar3 + 10) | 2;
        (**(code **)(*piVar3 + 0x24))();
      }
      FUN_000ffca0();
      FUN_0017c020(&DAT_0046d170);
      if ((*(byte *)(piVar1 + 10) & 2) != 0) {
        *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) & 0xfd;
        (**(code **)(*piVar1 + 0x24))();
      }
    }
  }
  return 1;
}

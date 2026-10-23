/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66E2BAE281BEF9448AFA885CDFC44EA7FDB8D3FB3030FCAA0C7D8E3E34DB6FF2
 * Entry: 0x0008ac00, Ghidra index: 1666, label: FUN_0008ac00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_0008ac00(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if (*param_1 != DAT_0046d064) {
    iVar2 = *(int *)(param_1[10] + 4);
    if (iVar2 != 0) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(param_1[10] + 8);
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 != 0) {
        iVar5 = 0;
        uVar6 = 1;
        do {
          if (((*(int *)(*(int *)(iVar2 + 0xc) + 8) == *param_1) &&
              ((*(byte *)(iVar2 + 0x70) & 1) != 0)) &&
             (iVar3 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 0xbec) + 0xc))(iVar2),
             iVar3 == 0)) {
            uVar4 = FUN_0008ada0(param_1,iVar2);
            return uVar4;
          }
          uVar1 = *(uint *)(param_1[10] + 4);
          if (uVar1 <= uVar6) {
            return 0;
          }
          iVar5 = iVar5 + 4;
          if (uVar6 < uVar1) {
            iVar2 = *(int *)(iVar5 + *(int *)(param_1[10] + 8));
          }
          else {
            iVar2 = 0;
          }
          iVar2 = *(int *)(iVar2 + 4);
          uVar6 = uVar6 + 1;
        } while (iVar2 != 0);
        return 0;
      }
    }
  }
  return 0;
}

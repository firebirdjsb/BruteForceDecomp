/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42505964160F533DD1980BE718A9669DD45273D4B93E24BEC51A25BA7A9E36A8
 * Entry: 0x000f51b0, Ghidra index: 3070, label: FUN_000f51b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
extern char s_Parameters_004071bc[];
bool FUN_000f51b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  char *pcVar9;
  undefined4 uStack_204;
  undefined1 auStack_200 [512];
  
  bVar8 = *(int *)(DAT_0046995c + 0x1c) != 0;
  if (!bVar8) {
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar2 == 0x120785ef) {
      iVar3 = 2;
    }
    else {
      iVar3 = (uint)(*piVar2 == -0x104e72d8) * 2 + 1;
    }
    *(int *)(param_1 + 0x21c) = iVar3;
    uVar4 = FUN_001ecab0((undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    pcVar9 = s_Parameters_004071bc;
    FUN_002e5920(s_Parameters_004071bc);
    puVar5 = (undefined4 *)FUN_002e4a30(pcVar9);
    iVar3 = *(int *)(param_1 + 0x14);
    puVar7 = (undefined4 *)(param_1 + 0x18);
    for (iVar6 = 0x89; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    if (iVar3 == 0) {
      piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      uStack_204 = 0x1ee7a868;
      (**(code **)(*piVar2 + 8))(&uStack_204,0,0);
    }
    else {
      cVar1 = FUN_00102120();
      if (cVar1 != '\0') {
        uStack_204 = 0xe596a1f4;
        uVar4 = FUN_001e97c0(param_1 + 0x1c);
        FUN_002ea9a9(auStack_200,0x100,uVar4);
        piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar2 + 0xc))(auStack_200,0,0);
        return true;
      }
    }
  }
  return bVar8;
}

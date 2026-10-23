/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9058E438F7BDED1CEA9D7E4C83364D1FFBDAE1115F0A45F81D7310D32F3FF593
 * Entry: 0x000efe40, Ghidra index: 2992, label: FUN_000efe40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040ddcc;
extern uint32_t DAT_00469b58;
undefined4 FUN_000efe40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [32];
  
  piVar1 = param_1;
  if ((param_1 != (int *)0x0) && (iVar2 = (**(code **)(*param_1 + 4))(), iVar2 == 3)) {
    FUN_0010caa0();
    param_1 = (int *)0x32;
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar3 == -0x104e72d8) {
      param_1 = (int *)0xf;
    }
    puVar5 = &uStack_28;
    uStack_28 = 0;
    iStack_24 = 0xe5c5893;
    FUN_001e97c0(puVar5);
    FUN_0010c660(puVar5);
    iVar2 = 5;
    if (4 < param_1) {
      do {
        FUN_002ea9a9(auStack_20,0x10,&DAT_0040ddcc,iVar2);
        iStack_24 = iVar2;
        FUN_0010c660(&iStack_24);
        iVar2 = iVar2 + 5;
      } while (iVar2 <= (int)param_1);
    }
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
    uVar4 = 0;
    while( true ) {
      if (piVar1[0x19] == 0) {
        return 1;
      }
      if ((uint)(piVar1[0x1a] - piVar1[0x19] >> 2) <= uVar4) break;
      if (*(int *)(*(int *)(piVar1[0x19] + uVar4 * 4) + 0x24) == *piVar3) {
        FUN_0010c7d0();
        return 1;
      }
      uVar4 = uVar4 + 1;
    }
    return 1;
  }
  return 0;
}

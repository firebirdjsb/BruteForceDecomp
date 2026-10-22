/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10B38A11BBC9902EF3765EB8ED57A622C1D73F83DA193F814BD18B11C47F2770
 * Entry: 0x000f77e0, Ghidra index: 3104, label: FUN_000f77e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_004a5b84;
void FUN_000f77e0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (DAT_004a5b84 == '\0') {
    iStack_8 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x238))();
    if (*(int *)(iStack_8 + 4) == 0) {
      iStack_c = 0;
    }
    else {
      iStack_c = (*(int *)(iStack_8 + 8) - *(int *)(iStack_8 + 4)) / 0x24;
    }
    if (0 < iStack_c) {
      iStack_10 = 0;
      do {
        iVar4 = *(int *)(iStack_8 + 4) + iStack_10;
        uStack_14 = 0xcc05846;
        if (*(int *)(iVar4 + 0x14) == 0) {
          iVar3 = FUN_001e97c0();
        }
        else if (*(uint *)(iVar4 + 0x18) < 8) {
          iVar3 = iVar4 + 4;
        }
        else {
          iVar3 = *(int *)(iVar4 + 4);
        }
        if (*(char *)(iVar4 + 0x20) == '\0') {
          piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
          iVar4 = *piVar1;
          uVar2 = FUN_001e97c0(iVar3,param_1,param_2,0);
          (**(code **)(iVar4 + 0x34))(&uStack_14,uVar2);
        }
        else {
          piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
          iStack_4 = *piVar1;
          uVar2 = FUN_001e97c0(iVar3,0,param_2,0);
          iVar3 = (**(code **)(iStack_4 + 0x38))(iVar4 + 0x1c,uVar2);
          if ((iVar3 != 0) && (*(char *)(iVar4 + 0x21) != '\0')) {
            FUN_00101c30();
          }
        }
        iStack_10 = iStack_10 + 0x24;
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
    }
    DAT_004a5b84 = '\x01';
  }
  return;
}

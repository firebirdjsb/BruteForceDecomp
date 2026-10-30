/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92E0D3F3AC5FFBDC26DB9AEBC294E8E93D2C1CA1AC004ABC91A96967DBDABBF2
 * Entry: 0x0008c640, Ghidra index: 1700, label: FUN_0008c640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008c380(int *param_1);
extern uint FUN_0008a890(int param_1);
extern void FUN_0008a2b0(float param_1);

extern uint32_t DAT_00469b58;
void FUN_0008c640(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_0008c380(param_1);
  }
  iVar5 = 1;
  do {
    iVar3 = (**(code **)(*param_1 + 8))(iVar5);
    iVar1 = DAT_00469b58;
    if (iVar3 != 0) {
      if ((*(byte *)(iVar3 + 0x6c) & 0x20) != 0) {
        *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) & 0xdf;
        pbVar4 = (byte *)(**(code **)(**(int **)(iVar1 + 8) + 0x130))(iVar5);
        if (pbVar4 != (byte *)0x0) {
          *pbVar4 = *pbVar4 | 0x3d;
        }
        cVar2 = FUN_0008a890(iVar3);
        if (cVar2 == '\0') {
          *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) | 8;
        }
      }
      if ((*(byte *)(iVar3 + 0x6c) & 8) == 0) {
        FUN_0008a2b0(param_2);
      }
      else {
        (**(code **)(*param_1 + 0x38))(iVar5);
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x144))(iVar5);
        (**(code **)(*param_1 + 0x1c))();
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 9);
  return;
}

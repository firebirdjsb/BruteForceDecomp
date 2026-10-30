/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52A744CB31460D95DA8E73D69D359AABAA09BC735A78F06C38ADCC3EEACB0470
 * Entry: 0x0008b1f0, Ghidra index: 1675, label: FUN_0008b1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00160da0(void);
extern void FUN_0014dcb0(int param_1);
extern void FUN_00123fa0(int param_1);
extern int FUN_0014ce90(int param_1,undefined1 *param_2,undefined1 *param_3);

extern uint32_t DAT_0046d064;
void FUN_0008b1f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x2e8);
  if (*(int *)(param_1 + 0x10) != DAT_0046d064) {
    FUN_00160da0(0xffffffff,1);
    FUN_0014dcb0(1);
  }
  if (*(int *)(param_1 + 0x14) != DAT_0046d064) {
    FUN_00160da0(0xffffffff,1);
    FUN_0014dcb0(2);
  }
  FUN_00123fa0(in_EAX);
  piVar5 = (int *)(param_1 + 0x2c);
  iVar4 = 6;
  do {
    iVar2 = *piVar5;
    if ((0 < iVar2) && (piVar5[-1] != DAT_0046d064)) {
      iVar3 = FUN_00160da0(0xffffffff,1);
      if (iVar3 != 0) {
        FUN_0014ce90(uVar1,iVar2,0);
      }
    }
    piVar5 = piVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)(param_1 + 0x5c);
  iVar4 = 3;
  do {
    iVar2 = *piVar5;
    if ((0 < iVar2) && (piVar5[-1] != DAT_0046d064)) {
      iVar3 = FUN_00160da0(0xffffffff,1);
      if (iVar3 != 0) {
        FUN_0014ce90(uVar1,iVar2,0);
      }
    }
    piVar5 = piVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

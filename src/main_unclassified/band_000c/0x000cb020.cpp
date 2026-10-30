/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8064E3984783CD441F949100ADEB4940A011EFA41632D16B6A2EA6DA5786B4D6
 * Entry: 0x000cb020, Ghidra index: 2512, label: FUN_000cb020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000cb020(int param_1)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_000b9120(DAT_00469ab0);
  if (iVar4 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 100) = iVar4;
  if (iVar4 != 0) {
    FUN_000bb600(iVar4);
    iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x2c);
    if ((iVar4 != 0) &&
       (((piVar3 = *(int **)(iVar4 + 0x24), piVar3 == (int *)0x0 || (*piVar3 != 0x97ecc77)) ||
        (piVar3[1] != 0x18)))) {
      uVar5 = FUN_000cd9c0();
      *(undefined4 *)(iVar4 + 0x24) = uVar5;
    }
    FUN_000bb9d0(*(undefined4 *)(param_1 + 100));
    sVar1 = *(short *)(*(int *)(param_1 + 0x34) + 0x22);
    sVar2 = *(short *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 100);
    *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(*(int *)(param_1 + 0x34) + 0x20);
    *(short *)(iVar4 + 6) = (short)(((int)sVar1 - (int)sVar2) / 2);
  }
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 1;
  return;
}

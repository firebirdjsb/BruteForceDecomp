/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1273DDE017BAECF8CC1972D6B01F34EBF97CB0A910F92DC7DC7A3ABF5106CFEA
 * Entry: 0x00183630, Ghidra index: 5200, label: FUN_00183630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038dae8;
uint FUN_00183630(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  uint uVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  undefined3 extraout_var;
  int in_ECX;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 local_2c [2];
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  int local_18 [2];
  undefined1 *local_10;
  
  FUN_00183c30(*(undefined4 *)(in_EAX + 0x58 + in_ECX * 4));
  piVar7 = local_18;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x74);
  local_10 = local_2c;
  local_18[0] = (*(byte *)(param_1 + 0x1c) & 2) << 3;
  local_18[1] = 2;
  uVar3 = DSOUND__DirectSoundCreateStream(local_18,puVar1);
  if (-1 < (int)uVar3) {
    *(uint *)(param_1 + 0x20) =
         *(uint *)(param_1 + 0x20) ^
         (CONCAT22(uStack_28,local_2a) ^ *(uint *)(param_1 + 0x20)) & 0xf;
    puVar2 = (undefined4 *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x34) = CONCAT22(uStack_26,uStack_28);
    puVar8 = puVar2;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *puVar2 = 1;
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0xff;
    DSOUND__IDirectSoundStream_SetEG(*puVar1,puVar2);
    uVar4 = FUN_00183af0(*puVar1);
    uVar5 = (undefined3)((uint)uVar4 >> 8);
    if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
      DSOUND__IDirectSoundStream_SetRolloffCurve(*puVar1,&DAT_0038dae8,5,1);
      uVar5 = extraout_var;
    }
    return CONCAT31(uVar5,1);
  }
  return uVar3 & 0xffffff00;
}

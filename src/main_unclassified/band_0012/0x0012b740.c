/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8EB42B61EAE5576BAD495DBB217FABF966DFA7219DE23C23B3676C350FABC39
 * Entry: 0x0012b740, Ghidra index: 3791, label: FUN_0012b740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003c0590;
extern uint32_t _DAT_003c0594;
extern uint32_t _DAT_003c0598;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012b740(float param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined1 local_60 [4];
  undefined4 local_5c;
  float local_58;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  byte local_4;
  
  param_1 = *(float *)(in_EAX + 0x6e8) - param_1;
  if (0.1 < ABS(param_1)) {
    uVar4 = 0;
    uVar2 = 6;
    if (1.0 < ABS(param_1)) {
      uVar2 = 10;
      uVar4 = 6;
    }
    iVar1 = FUN_0014f5c0((int *)(in_EAX + 0x24c),in_EAX,*(undefined4 *)(in_EAX + 0x24c),uVar2,uVar4)
    ;
    if (iVar1 == 0) {
      *(uint *)(in_EAX + 0x250) = *(uint *)(in_EAX + 0x250) | 0x40;
    }
    else if ((*(byte *)(in_EAX + 0x250) & 1) != 0) {
      *(int *)(in_EAX + 0x24c) = iVar1;
    }
  }
  if (0.0 < (param_1 - _DAT_003c0590) * (1.0 / (_DAT_003c0594 - _DAT_003c0590))) {
    fVar5 = (float10)FUN_00222f60();
    local_4 = local_4 & 0xf7 | 4;
    iVar1 = *(int *)(in_EAX + 0x6c);
    local_58 = (float)((float10)_DAT_003c0598 * fVar5 * fVar5);
    local_5c = 0;
    local_28 = *(undefined4 *)(iVar1 + 0x40);
    local_2c = *(undefined4 *)(iVar1 + 0x3c);
    local_30 = *(undefined4 *)(iVar1 + 0x38);
    local_20 = 0x3f800000;
    local_1c = 0;
    local_34 = 0;
    local_38 = 0xbf800000;
    local_24 = 0;
    local_3c = 0;
    local_18 = local_30;
    local_14 = local_2c;
    local_10 = local_28;
    (*(code *)**(undefined4 **)(in_EAX + 0x48))(local_60);
  }
  if ((*(byte *)(in_EAX + 0x43c) & 2) != 0) {
    *(undefined4 *)(in_EAX + 0x1f0) = 0;
    FUN_0012bc60(in_EAX);
    *(undefined4 *)(in_EAX + 0x71c) = 0x3f800000;
    return;
  }
  bVar3 = *(byte *)(in_EAX + 0x262) ^ (*(byte *)(in_EAX + 0x262) ^ param_1 < 2.0) & 1;
  *(byte *)(in_EAX + 0x262) = bVar3;
  if ((bVar3 & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x478) = 0;
    *(undefined4 *)(in_EAX + 0x474) = 0;
    *(undefined4 *)(in_EAX + 0x470) = 0;
  }
  FUN_0012eab0(1);
  *(undefined4 *)(in_EAX + 0x1f0) = 4;
  return;
}

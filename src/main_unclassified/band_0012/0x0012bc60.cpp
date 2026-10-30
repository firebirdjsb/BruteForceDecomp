/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CFBBB2A80C2D1E9FDE171065237046977573FDE18BF1EDBFE3407120D9B88FF
 * Entry: 0x0012bc60, Ghidra index: 3794, label: FUN_0012bc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
extern uint32_t DAT_0046cfd8;
extern uint32_t DAT_0046d064;
/* XBE 0x12bc95 multiplies by the f32 stored at [0x003c0564]. */
extern float _DAT_003c0564;
extern uint32_t _DAT_003c0568;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012bc60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_EAX;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int local_ac;
  int local_a4 [15];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  
  FUN_0012eab0(1);
  FUN_0012baf0(param_1,(1.0 - (float)in_EAX[1]) * _DAT_003c0564,param_1 + 0x6f8,param_1 + 0x6f8);
  *(float *)(param_1 + 0x6fc) = _DAT_003c0568 + *(float *)(param_1 + 0x6fc);
  uVar4 = in_EAX[2];
  uVar1 = in_EAX[1];
  *(undefined4 *)(param_1 + 0x704) = *in_EAX;
  *(undefined4 *)(param_1 + 0x708) = uVar1;
  *(undefined4 *)(param_1 + 0x70c) = uVar4;
  *(byte *)(param_1 + 0x261) = *(byte *)(param_1 + 0x261) & 0x3f | 0x40;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0xbd8) + 0x18 + *(int *)(param_1 + 0x440) * 0x14
                  );
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  if (*(int *)(param_1 + 0x790) == 0) {
    uVar4 = FUN_0017c170(DAT_00469984);
    *(undefined4 *)(param_1 + 0x790) = uVar4;
    FUN_0003f010();
    local_64 = *(undefined4 *)(param_1 + 0x460);
    local_68 = *(undefined4 *)(param_1 + 0x45c);
    local_a4[0xe] = *(undefined4 *)(param_1 + 0x458);
    local_44 = *(undefined4 *)(param_1 + 0x478);
    local_48 = *(undefined4 *)(param_1 + 0x474);
    local_4c = *(undefined4 *)(param_1 + 0x470);
    local_60 = 1;
    local_40 = 1;
    (**(code **)(*DAT_00469940 + 0x50))(*(undefined4 *)(param_1 + 0x790),0,0x3f000000);
    (**(code **)(*DAT_00469940 + 0x28))(*(undefined4 *)(param_1 + 0x790),local_a4 + 0xb,1);
  }
  piVar6 = (int *)(param_1 + 0x798);
  local_a4[0] = *(int *)(param_1 + 0x428);
  local_a4[1] = *(undefined4 *)(param_1 + 0x42c);
  local_a4[9] = 0;
  local_a4[8] = 0;
  local_a4[7] = 0;
  local_a4[5] = 0;
  local_a4[4] = 0;
  local_a4[3] = 0;
  local_a4[10] = 0x3f800000;
  local_a4[6] = 0x3f800000;
  local_a4[2] = 0x3f800000;
  local_a4[0xd] = 0;
  local_a4[0xc] = 0;
  local_a4[0xb] = 0;
  local_ac = 0;
  do {
    if (*piVar6 != 0) {
      *(undefined4 *)(*(int *)(*piVar6 + 0xe8) + 0xc) = 0;
      FUN_0021c700();
    }
    piVar3 = (int *)local_a4[local_ac];
    if (piVar3 != (int *)0x0) {
      if (*(int *)(iVar2 + 0x1e8) == DAT_0046d064) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)0x0;
        if ((*piVar3 != 0) && (piVar5 = (int *)FUN_000da800(), piVar5 != (int *)0x0)) {
          (**(code **)(*piVar5 + 0xdc))(param_1,piVar3);
          *(byte *)(piVar5 + 0x43) = *(byte *)(piVar5 + 0x43) | 2;
          FUN_0021c380(0x3f800000);
        }
      }
      if ((int *)*piVar6 != piVar5) {
        FUN_0008f6a0(piVar5);
      }
    }
    local_ac = local_ac + 1;
    piVar6 = piVar6 + 2;
  } while (local_ac < 2);
  return;
}

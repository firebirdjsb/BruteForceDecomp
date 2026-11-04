/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19A807F018FF6440D5BF9F9445536764BAA82E4529CF37A460CAE50B7011E386
 * Entry: 0x00124af0, Ghidra index: 3692, label: FUN_00124af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: two guest DWORDs, EAX result, RET 8; implicit ECX/EDX remain unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfdc;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00124af0(int *param_1,float param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float local_7c;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined8 uStack_2c;
  undefined1 auStack_24 [8];
  float fStack_1c;
  float fStack_10;
  float fStack_4;
  
  iVar3 = *(int *)(param_1[3] + 0x1b8);
  if (((iVar3 != 0) && (*(int *)(param_1[3] + 0x1bc) - iVar3 >> 2 != 0)) &&
     (((float)param_1[0x15] <= param_2 || ((float)param_1[0x14] * 0.05 <= param_2)))) {
    DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
    iVar3 = FUN_00160da0(0xffffffff,1);
    if (iVar3 != 0) {
      iVar1 = param_1[0x112];
      local_7c = param_2 * 0.05 + 1.0;
      if (2.0 <= local_7c) {
        local_7c = 2.0;
      }
      if ((float)param_1[0x15] < param_2) {
        local_7c = local_7c + local_7c;
      }
      fVar5 = param_2 * 0.05;
      if (1.0 <= param_2 * 0.05) {
        fVar5 = 1.0;
      }
      iVar4 = (**(code **)(*param_1 + 0x40))();
      fStack_34 = *(float *)(iVar4 + 0x2c) + param_3[2];
      fStack_38 = *(float *)(iVar4 + 0x28) + param_3[1];
      fStack_3c = *(float *)(iVar4 + 0x24) + *param_3;
      fStack_6c = fStack_3c * 0.5;
      fStack_64 = fStack_34 * 0.5;
      fStack_68 = (float)param_1[0x10e];
      DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
      fStack_48 = fStack_6c;
      FUN_00039380(auStack_24,((float)(DAT_0046cfdc >> 9 | 0x3f800000) - 1.0) * 6.28);
      fStack_58 = fStack_4;
      DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
      fStack_60 = fStack_1c;
      fStack_5c = fStack_10;
      FUN_00039380(auStack_24,((float)(DAT_0046cfdc >> 9 | 0x3f800000) - 1.0) * 6.28);
      DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
      fVar2 = (float)(DAT_0046cfdc >> 9 | 0x3f800000) - 1.0;
      fStack_48 = fStack_1c;
      fStack_54 = fVar2 * fStack_1c;
      fStack_38 = fVar2 * fStack_10;
      uStack_50 = CONCAT44(fVar2 * fStack_4,fStack_38);
      fStack_30 = fStack_54 * 0.3;
      fStack_34 = fVar2 * fStack_4 * 0.3;
      uStack_2c = CONCAT44(fStack_34,fStack_38 * 0.3);
      fStack_6c = fStack_30 + fStack_6c;
      fStack_68 = fStack_38 * 0.3 + fStack_68;
      fStack_64 = fStack_34 + fStack_64;
      fStack_3c = fStack_54;
      FUN_00213e60(*(undefined4 *)(param_1[2] + 0x200),&fStack_6c,param_1 + 0x113,&fStack_60,iVar3,
                   local_7c,fVar5 * 0.5 + 0.5,param_1[0x112],0,iVar1 == 0,1);
    }
  }
  return;
}

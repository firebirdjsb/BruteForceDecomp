/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFB742EA050112EFA220BEF3412E687D7BEB12104195DD2425D895DC8CE2C372
 * Entry: 0x000b3970, Ghidra index: 2167, label: FUN_000b3970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d6ec;
extern uint32_t DAT_0040d6ed;
void FUN_000b3970(void)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  float10 fVar3;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c [2];
  
  if (*(int *)(*(int *)(in_ECX[0x22] + 0x10) + 0xd8) == 0) {
    uStack_48 = (double)CONCAT44(0xb399c,(undefined4)uStack_48);
    FUN_000b22a0();
    local_24 = 1.0;
    local_28 = 1.0;
    local_c[0] = 4.2039e-45;
    uStack_48 = (double)CONCAT44(local_c,0xb39cc);
    FUN_0006a610();
    local_c[0] = 4.2039e-45;
    uStack_48 = (double)CONCAT44(local_c,0xb39ec);
    FUN_0006a610();
    uStack_48 = (double)CONCAT44(0xb39fb,(undefined4)uStack_48);
    piVar1 = (int *)(**(code **)(*(int *)(*(int *)(in_ECX[0xd] + 0x10) + 0x48) + 0x18))();
    fStack_20 = (float)(piVar1[2] - *piVar1) * 0.0015625;
    iVar2 = 0;
    fStack_1c = (float)(piVar1[3] - piVar1[1]) * 0.0020833334;
    do {
      local_c[0] = (float)(int)*(short *)((int)in_ECX + 0xe);
      uStack_48 = (double)((float)(int)local_c[0] * (float)in_ECX[0x1d] * fStack_20 * local_24);
      uStack_4c = 0xb3a55;
      fVar3 = (float10)FUN_002ea51b();
      local_c[0] = (float)(int)(short)in_ECX[3];
      fStack_14 = (float)fVar3;
      uStack_48 = (double)((float)(int)local_c[0] * (float)in_ECX[0x1d] * fStack_1c * local_28);
      uStack_4c = 0xb3a78;
      fVar3 = (float10)FUN_002ea51b();
      local_c[0] = (float)(int)*(short *)((int)in_ECX + 0xe);
      fStack_18 = (float)fVar3;
      uStack_48 = (double)((float)(int)local_c[0] * (float)in_ECX[0x1e] * fStack_20 * local_24);
      uStack_4c = 0xb3a9b;
      fVar3 = (float10)FUN_002ea51b();
      fStack_10 = (float)(int)(short)in_ECX[3];
      local_c[0] = (float)fVar3;
      uStack_48 = (double)((float)(int)fStack_10 * (float)in_ECX[0x1e] * fStack_1c * local_28);
      uStack_4c = 0xb3abe;
      fVar3 = (float10)FUN_002ea51b();
      uStack_48 = 0.0;
      uStack_4c = 0;
      uStack_50 = 0x3f800000;
      fStack_54 = 1.0;
      fStack_58 = 0.0;
      uStack_5c = 0;
      uStack_60 = 0;
      uStack_64 = 0;
      uStack_30 = DAT_0040d6ed;
      uStack_2f = DAT_0040d6ed;
      uStack_2e = DAT_0040d6ed;
      iStack_68 = in_ECX[0x1c];
      uStack_6c = 2;
      uStack_70 = 1;
      uStack_74 = 0xff;
      fStack_10 = (float)fVar3;
      uStack_2d = 0xff;
      (**(code **)(*in_ECX + 4))(&uStack_30,fStack_14,fStack_18,-fStack_14,-fStack_18);
      uStack_74 = CONCAT13(0xff,CONCAT12(DAT_0040d6ec,CONCAT11(DAT_0040d6ec,DAT_0040d6ec)));
      (**(code **)(*in_ECX + 4))
                (&uStack_74,fStack_54,fStack_58,-fStack_54,-fStack_58,0xff,1,2,in_ECX[0x1b],0,0,0,0,
                 0x3f800000,0x3f800000,0,0,0);
      if (iVar2 == 1) {
        local_28 = -local_28;
      }
      iVar2 = iVar2 + 1;
      local_24 = -local_24;
    } while (iVar2 < 4);
  }
  return;
}

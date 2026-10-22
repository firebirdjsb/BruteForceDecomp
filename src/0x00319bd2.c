/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF47CC4ABC871C69F4AD62B8992E6D0E6C33CE3FD6C2B930D727C06BE0A19197
 * Entry: 0x00319bd2, Ghidra index: 12247, label: FUN_00319bd2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f6a0;
extern uint32_t DAT_0032f6a4;
void FUN_00319bd2(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int iVar3;
  int extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  float *pfVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_00319a67(param_1 * 24000.0);
  *(undefined4 *)(extraout_ECX + 0x130) = uVar2;
  pfVar4 = (float *)&DAT_0032f6a0;
  iVar3 = extraout_ECX;
  do {
    fVar1 = (float)*(int *)(iVar3 + 0x130);
    if (*(int *)(iVar3 + 0x130) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    uVar5 = FUN_00319a67(fVar1 * *pfVar4);
    *(undefined4 *)((ulonglong)uVar5 >> 0x20) = (int)uVar5;
    pfVar4 = pfVar4 + 5;
    iVar3 = extraout_ECX_00;
  } while ((int)pfVar4 < 0x32f6f0);
  pfVar4 = (float *)&DAT_0032f6a4;
  do {
    uVar5 = FUN_00319a67((param_1 * pfVar4[1] + *pfVar4) * 24000.0);
    *extraout_ECX_01 = (int)uVar5;
    pfVar4 = (float *)((int)((ulonglong)uVar5 >> 0x20) + 0x14);
  } while ((int)pfVar4 < 0x32f6f4);
  return;
}

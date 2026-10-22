/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8441CD86DAF84ECACE61C0A2E448CC30A96F6D4F28B961428055499391546FF
 * Entry: 0x00319ac9, Ghidra index: 12243, label: FUN_00319ac9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f718;
void FUN_00319ac9(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  
  if (2.5 <= param_1) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (param_1 - 0.8) * 0.58823526;
  }
  pfVar5 = (float *)&DAT_0032f718;
  do {
    iVar3 = 2;
    pfVar4 = pfVar5;
    do {
      uVar6 = FUN_00319a67(fVar1 * *pfVar4 * 24000.0);
      *(undefined4 *)((ulonglong)uVar6 >> 0x20) = (int)uVar6;
      pfVar4 = pfVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pfVar5 = pfVar5 + 1;
  } while ((int)pfVar5 < 0x32f728);
  uVar2 = FUN_00319a67(fVar1 * 24000.0);
  *(undefined4 *)(extraout_ECX + 0x164) = uVar2;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 471A5A416A55734B42CA262B52F5E3680D717F0EB4C234ABA75623EC959297E8
 * Entry: 0x00167a80, Ghidra index: 4732, label: FUN_00167a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f4f0;
extern uint32_t DAT_0041f4f4;
extern uint32_t DAT_0041f4f8;
extern uint32_t DAT_0041f4fc;
extern uint32_t DAT_0046d254;
extern uint32_t DAT_0046d258;
extern uint32_t DAT_0046d25c;
extern uint32_t DAT_0046d288;
extern uint32_t DAT_0046d28c;
extern uint32_t DAT_0046d2b4;
extern uint32_t DAT_0046d2b8;
extern uint32_t DAT_0046d2bc;
extern uint32_t _DAT_003c0278;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00167a80(float *param_1,undefined4 param_2,undefined4 param_3,float *param_4,undefined4 param_5,
            undefined4 param_6,float param_7)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  float *extraout_ECX;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *param_1 - *param_4;
  DAT_0041f4f0 = 1;
  DAT_0041f4fc = 0;
  local_14 = param_1[1] - (param_7 + param_4[1]);
  DAT_0041f4f8 = 0;
  DAT_0041f4f4 = 1;
  local_10 = param_1[2] - param_4[2];
  while( true ) {
    uVar2 = DAT_0041f4f8;
    local_c = -local_18;
    local_8 = -local_14;
    iVar1 = DAT_0041f4f8 * 3;
    local_4 = -local_10;
    FUN_00167750();
    FUN_001678a0(param_7,param_6);
    if (0.0 < ((float)(&DAT_0046d254)[iVar1] - *extraout_ECX) * local_18 +
              ((float)(&DAT_0046d258)[uVar2 * 3] - (float)(&DAT_0046d288)[uVar2 * 3]) * local_14 +
              local_10 * ((float)(&DAT_0046d25c)[uVar2 * 3] - (float)(&DAT_0046d28c)[uVar2 * 3])) {
      return 0;
    }
    (&DAT_0046d2b4)[uVar2 * 3] = (float)(&DAT_0046d254)[iVar1] - *extraout_ECX;
    (&DAT_0046d2b8)[uVar2 * 3] =
         (float)(&DAT_0046d258)[uVar2 * 3] - (float)(&DAT_0046d288)[uVar2 * 3];
    (&DAT_0046d2bc)[uVar2 * 3] =
         (float)(&DAT_0046d25c)[uVar2 * 3] - (float)(&DAT_0046d28c)[uVar2 * 3];
    cVar3 = FUN_00166c60(&local_18);
    if (cVar3 == '\0') {
      return 0;
    }
    if (DAT_0041f4fc == 0xf) {
      return 1;
    }
    do {
      DAT_0041f4f8 = DAT_0041f4f8 + 1 & 3;
      DAT_0041f4f4 = 1 << (sbyte)DAT_0041f4f8;
    } while ((DAT_0041f4fc & DAT_0041f4f4) != 0);
    DAT_0041f4f0 = DAT_0041f4f0 + 1;
    if (100 < DAT_0041f4f0) break;
    if (local_18 * local_18 + local_14 * local_14 + local_10 * local_10 <= _DAT_003c0278) {
      return 1;
    }
  }
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45D742E01B992C29786DDC33AEFB251D1C9699D5F5F7BA72C8ED0F6E4FDDA3C4
 * Entry: 0x00167c40, Ghidra index: 4733, label: FUN_00167c40
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
extern uint32_t DAT_0046d284;
extern uint32_t DAT_0046d288;
extern uint32_t DAT_0046d28c;
extern uint32_t DAT_0046d2b4;
extern uint32_t DAT_0046d2b8;
extern uint32_t DAT_0046d2bc;
extern uint32_t _DAT_003c0278;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00167c40(float *param_1,undefined4 param_2,undefined4 param_3,float *param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *param_1 - *param_4;
  local_14 = param_1[1] - param_4[1];
  DAT_0041f4f0 = 1;
  DAT_0041f4fc = 0;
  DAT_0041f4f8 = 0;
  DAT_0041f4f4 = 1;
  local_10 = param_1[2] - param_4[2];
  while( true ) {
    uVar4 = DAT_0041f4f8;
    local_4 = -local_10;
    local_8 = -local_14;
    local_c = -local_18;
    iVar2 = DAT_0041f4f8 * 3;
    FUN_00167750();
    FUN_00167920(param_4,param_5,&DAT_0046d284 + uVar4 * 3);
    fVar1 = (float)(&DAT_0046d254)[iVar2] - (float)(&DAT_0046d284)[uVar4 * 3];
    if (0.0 < fVar1 * local_18 +
              ((float)(&DAT_0046d258)[uVar4 * 3] - (float)(&DAT_0046d288)[uVar4 * 3]) * local_14 +
              local_10 * ((float)(&DAT_0046d25c)[uVar4 * 3] - (float)(&DAT_0046d28c)[uVar4 * 3])) {
      return 0;
    }
    (&DAT_0046d2b4)[uVar4 * 3] = fVar1;
    (&DAT_0046d2b8)[uVar4 * 3] =
         (float)(&DAT_0046d258)[uVar4 * 3] - (float)(&DAT_0046d288)[uVar4 * 3];
    (&DAT_0046d2bc)[uVar4 * 3] =
         (float)(&DAT_0046d25c)[uVar4 * 3] - (float)(&DAT_0046d28c)[uVar4 * 3];
    cVar3 = FUN_00166c60(&local_18);
    if (cVar3 == '\0') {
      return 0;
    }
    if (DAT_0041f4fc == 0xf) {
      return 1;
    }
    do {
      uVar4 = uVar4 + 1 & 3;
      DAT_0041f4f4 = 1 << (sbyte)uVar4;
    } while ((DAT_0041f4fc & DAT_0041f4f4) != 0);
    DAT_0041f4f0 = DAT_0041f4f0 + 1;
    if (100 < DAT_0041f4f0) break;
    DAT_0041f4f8 = uVar4;
    if (local_18 * local_18 + local_14 * local_14 + local_10 * local_10 <= _DAT_003c0278) {
      return 1;
    }
  }
  DAT_0041f4f8 = uVar4;
  return 0;
}

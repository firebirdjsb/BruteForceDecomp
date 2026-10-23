/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3266912D44D6539A444836D4211321E7B76615C9ED9798A71A740DCA78C3EB7
 * Entry: 0x00319df2, Ghidra index: 12252, label: FUN_00319df2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0032f750;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00319df2(int param_1,int param_2,float param_3,float param_4)

{
  double dVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar2 = 0;
  if ((-10000 < param_1) && (param_2 != 0)) {
    fVar3 = ((float10)_DAT_0032f750 / (float10)param_4) * (float10)param_3;
    fVar3 = (float10)fcos(fVar3 + fVar3);
    dVar1 = (double)fVar3;
    fVar3 = (float10)FUN_00319a70(param_2 * 2);
    fVar4 = ((float10)1 - (float10)dVar1) * fVar3;
    fVar3 = (((float10)1.0 - (float10)dVar1 * fVar3) -
            SQRT((fVar4 + fVar4) - ((float10)1.0 - (float10)dVar1 * (float10)dVar1) * fVar3 * fVar3)
            ) / ((float10)1 - fVar3);
    if (fVar3 < (float10)1.0) {
      uVar2 = FUN_00319a67((float)(fVar3 * (float10)65536.0));
    }
    else {
      uVar2 = 0xffff;
    }
  }
  return uVar2;
}

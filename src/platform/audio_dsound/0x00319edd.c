/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 713BED9284F771077E619692AEBEEFE82BF400D4D44BBAF1BA280E05D26496F3
 * Entry: 0x00319edd, Ghidra index: 12254, label: FUN_00319edd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0032f690;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319edd(int param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  float fVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int iVar3;
  undefined8 uVar4;
  
  fVar1 = (float)(int)param_2;
  if ((int)param_2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  param_2 = ((fVar1 * 4.1666666e-05) / param_3) * -6000.0;
  FUN_00319a67(param_2);
  if (param_4 < 1.0) {
    param_2 = param_2 / param_4;
  }
  uVar4 = FUN_00319a67(param_2);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  FUN_00319d10(iVar3,(int)uVar4 - iVar3,param_5,0x46bb8000,&param_4,&param_2);
  uVar2 = FUN_00319a67(_DAT_0032f690 * param_4);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar2 = FUN_00319a67(_DAT_0032f690 * param_2);
  *(undefined4 *)(extraout_ECX + 8) = uVar2;
  return;
}

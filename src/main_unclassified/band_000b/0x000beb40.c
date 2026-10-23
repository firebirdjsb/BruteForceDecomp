/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E727BFEA92B93F76C4DD1253D8FDC81D47E8BB8D3C6981C97F47087125B3DEDD
 * Entry: 0x000beb40, Ghidra index: 2325, label: FUN_000beb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003c0554;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000beb40(int param_1,int param_2,float param_3,float param_4,float param_5,float *param_6,
                 float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_8;
  int local_4;
  
  FUN_000ab390(*(undefined4 *)(param_2 + 0xf0),&local_8);
  fVar7 = ABS(param_3 - (float)local_8);
  fVar1 = ABS(param_4 - (float)local_4);
  fVar2 = param_5 * 0.5 * *(float *)(param_1 + 0x34);
  fVar3 = (float)(int)*(short *)(param_2 + 0x20) * *(float *)(param_1 + 0x2c) * fVar2;
  fVar2 = (float)(int)*(short *)(param_2 + 0x22) * *(float *)(param_1 + 0x30) * fVar2;
  fVar4 = _DAT_003c0554 * fVar3;
  fVar5 = _DAT_003c0554 * fVar2;
  if ((fVar4 <= fVar7) || (fVar5 <= fVar1)) {
    *param_6 = 0.0;
    *param_7 = 0.0;
    return;
  }
  fVar4 = fVar7 / fVar4;
  fVar5 = fVar1 / fVar5;
  fVar6 = SQRT((1.0 - fVar4) * (1.0 - fVar5));
  *param_7 = (3.0 - (fVar6 + fVar6)) * fVar6 * fVar6;
  if ((fVar7 < fVar3) && (fVar1 < fVar2)) {
    fVar7 = SQRT((1.0 - _DAT_003c0554 * fVar4) * (1.0 - _DAT_003c0554 * fVar5));
    *param_6 = (3.0 - (fVar7 + fVar7)) * fVar7 * fVar7;
    return;
  }
  *param_6 = 0.0;
  return;
}

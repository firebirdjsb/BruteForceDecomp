/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19547C2CD0EC63616CE9E3711E326A2700DB9F06A908F27D693C7049826357EE
 * Entry: 0x002df650, Ghidra index: 10337, label: FUN_002df650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004a5c50;
extern uint32_t *DAT_004a5c58;
extern uint32_t _DAT_003b7da0;
extern uint32_t _DAT_003b7db0;
extern uint32_t *_DAT_004a5c54;
extern uint32_t *_DAT_004a5c5c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002df650(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  
  *(float **)(param_1 + 0x40) = param_2;
  fVar2 = param_2[5] - param_2[1];
  *(float *)(param_1 + 0x3c) = 1.0 / fVar2;
  DAT_004a5c50 = *param_2;
  _DAT_004a5c54 = param_2[4];
  if ((param_2[3] == -NAN) || (param_2[7] == -NAN)) {
    _DAT_004a5c5c = 0.0;
    DAT_004a5c58 = 0.0;
  }
  else {
    DAT_004a5c58 = fVar2 * param_2[3];
    _DAT_004a5c5c = fVar2 * param_2[6];
  }
  auVar9 = rcpss(in_XMM2,fVar2);
  fVar2 = fRam003b7da4 * _DAT_004a5c54;
  fVar3 = fRam003b7da8 * DAT_004a5c58;
  fVar4 = fRam003b7dac * _DAT_004a5c5c;
  pfVar1 = *(float **)(param_1 + 0x38);
  fVar5 = _DAT_003b7db0 * DAT_004a5c50;
  fVar6 = fRam003b7db4 * _DAT_004a5c54;
  fVar7 = fRam003b7db8 * DAT_004a5c58;
  fVar8 = fRam003b7dbc * _DAT_004a5c5c;
  *pfVar1 = _DAT_003b7da0 * DAT_004a5c50;
  pfVar1[1] = fVar2;
  pfVar1[2] = fVar3;
  pfVar1[3] = fVar4;
  *(int *)(param_1 + 0x3c) = auVar9._0_4_;
  pfVar1[4] = fVar5;
  pfVar1[5] = fVar6;
  pfVar1[6] = fVar7;
  pfVar1[7] = fVar8;
  *(float *)(*(int *)(param_1 + 0x38) + 0x20) = DAT_004a5c50;
  *(float *)(*(int *)(param_1 + 0x38) + 0x24) = DAT_004a5c58;
  return;
}

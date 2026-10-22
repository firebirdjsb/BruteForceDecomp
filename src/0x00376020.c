/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B417243826C37C25B522DC79B1A7EE4A1B9B14747020B196E2880CD29E5E736A
 * Entry: 0x00376020, Ghidra index: 13448, label: FUN_00376020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b088;
extern uint32_t DAT_0037b08c;
extern uint32_t DAT_0037b108;
extern uint32_t DAT_0037b10c;
extern uint32_t _DAT_0037af50;
extern uint32_t _DAT_0037af54;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00376020(float param_1)

{
  float fVar1;
  int iVar2;
  float *in_EDX;
  float *extraout_EDX;
  float *unaff_ESI;
  float10 fVar3;
  undefined8 uVar4;
  
  if (param_1 < 1.0) {
    if (param_1 == 0.0) {
      fVar3 = (float10)0.0;
    }
    else {
      fVar3 = (float10)FUN_00373a40(-(_DAT_0037af50 / param_1));
      in_EDX = extraout_EDX;
    }
    *unaff_ESI = (float)-fVar3;
    *in_EDX = (float)((float10)1.0 - ((float10)1.0 - fVar3) * (float10)param_1);
    return;
  }
  fVar3 = (float10)FUN_00373aa0(param_1);
  fVar1 = (float)(fVar3 * (float10)_DAT_0037af54 * (float10)3.0);
  uVar4 = FUN_00373a30(fVar1);
  iVar2 = (int)uVar4;
  fVar1 = fVar1 - (float)iVar2;
  *unaff_ESI = fVar1 * *(float *)(&DAT_0037b10c + iVar2 * 4) +
               (1.0 - fVar1) * *(float *)(&DAT_0037b108 + iVar2 * 4);
  *(float *)((ulonglong)uVar4 >> 0x20) =
       fVar1 * *(float *)(&DAT_0037b08c + iVar2 * 4) +
       (1.0 - fVar1) * *(float *)(&DAT_0037b088 + iVar2 * 4);
  return;
}

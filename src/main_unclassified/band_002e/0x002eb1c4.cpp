/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B264ADEBDD86B702815A0BBC07AB8E4E795146B39A95889D932A43D24B31E82
 * Entry: 0x002eb1c4, Ghidra index: 10614, label: FUN_002eb1c4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
float10 FUN_002eb1c4(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  while( true ) {
    if (DAT_003b6c30 < 2) {
      uVar2 = (byte)PTR_DAT_003b6c3c[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_002eba73((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  iVar4 = FUN_002ef41e(param_1,(int)pbVar3 - (int)(param_1 + 1),0,0);
  return (float10)*(double *)(iVar4 + 0x10);
}

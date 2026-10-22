/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B6E5702785FD9246F482123C069763506ED248CDD7E898556AB09E6AA5A970F
 * Entry: 0x002644b0, Ghidra index: 8702, label: FUN_002644b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443324;
extern uint32_t DAT_004433b0;
extern uint32_t DAT_00443638;
extern uint32_t DAT_0046b22c;
extern uint32_t *DAT_0046b248;
extern uint32_t DAT_0046b24c;
extern uint32_t DAT_0046b250;
extern uint32_t *DAT_0046b254;
undefined4 FUN_002644b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_retaddr;
  
  if (DAT_004433b0 != 0x20) {
    RtlEnterCriticalSection(&DAT_0046b22c);
    puVar4 = DAT_0046b248;
    puVar1 = (undefined4 *)DAT_0046b248[1];
    puVar2 = (undefined4 *)*DAT_0046b248;
    puVar5 = puVar2;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar2;
      puVar5 = DAT_0046b248;
    }
    DAT_0046b248 = puVar5;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = puVar1;
      puVar1 = DAT_0046b24c;
    }
    DAT_0046b24c = puVar1;
    puVar4[1] = 0;
    *puVar4 = 0;
    if (DAT_0046b254 == (undefined4 *)0x0) {
      puVar4[1] = 0;
      DAT_0046b250 = puVar4;
    }
    else {
      *DAT_0046b254 = puVar4;
      puVar4[1] = DAT_0046b254;
    }
    DAT_0046b254 = puVar4;
    puVar4[3] = unaff_retaddr;
    puVar4[4] = param_1;
    DAT_004433b0 = DAT_004433b0 + 1;
    if (DAT_00443638 == '\0') {
      XAPILIB__SetEvent(DAT_00443324);
    }
    uVar3 = puVar4[2];
    RtlLeaveCriticalSection(&DAT_0046b22c);
    return uVar3;
  }
  return 0;
}

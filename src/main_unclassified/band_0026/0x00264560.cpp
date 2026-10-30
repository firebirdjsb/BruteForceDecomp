/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D891D139D2BB21596A6A4BFAEF2B9713E8F72E32BBF754D7A128A459CFFFC8EB
 * Entry: 0x00264560, Ghidra index: 8703, label: FUN_00264560
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
extern uint32_t DAT_0046b248;
extern uint32_t *DAT_0046b24c;
extern uint32_t DAT_0046b250;
extern uint32_t DAT_0046b254;
undefined4 FUN_00264560(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  
  RtlEnterCriticalSection(&DAT_0046b22c);
  puVar1 = DAT_0046b250;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      RtlLeaveCriticalSection(&DAT_0046b22c);
      return 0x80004005;
    }
    if (unaff_ESI == puVar1[2]) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  puVar2 = (undefined4 *)puVar1[1];
  puVar3 = (undefined4 *)*puVar1;
  puVar4 = puVar3;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar3;
    puVar4 = DAT_0046b250;
  }
  DAT_0046b250 = puVar4;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = puVar2;
    puVar2 = DAT_0046b254;
  }
  DAT_0046b254 = puVar2;
  puVar1[1] = 0;
  *puVar1 = 0;
  if (DAT_0046b24c == (undefined4 *)0x0) {
    puVar1[1] = 0;
    DAT_0046b248 = puVar1;
  }
  else {
    *DAT_0046b24c = puVar1;
    puVar1[1] = DAT_0046b24c;
  }
  DAT_004433b0 = DAT_004433b0 + -1;
  DAT_0046b24c = puVar1;
  if (DAT_00443638 == '\0') {
    XAPILIB__SetEvent(DAT_00443324);
  }
  RtlLeaveCriticalSection(&DAT_0046b22c);
  return 0;
}

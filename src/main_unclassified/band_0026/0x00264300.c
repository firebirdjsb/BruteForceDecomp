/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBF3105EFF566187CDC1B7E2E7C7D4D0C99C876BD07EF88C8377E40364143664
 * Entry: 0x00264300, Ghidra index: 8700, label: FUN_00264300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443320;
extern uint32_t DAT_004433ac;
extern uint32_t DAT_004433b0;
extern uint32_t DAT_004433b8;
extern uint32_t DAT_00443638;
extern uint32_t DAT_004698b0;
extern uint32_t DAT_0046b248;
extern uint32_t DAT_0046b24c;
extern uint32_t DAT_0046b250;
extern uint32_t DAT_0046b254;
undefined4 FUN_00264300(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined1 local_4 [4];
  
  if (DAT_004698b0 == '\x01') {
    return 0x80004005;
  }
  DAT_00443638 = 0;
  puVar3 = &DAT_00443320;
  do {
    uVar1 = XAPILIB__CreateEventA(0,1,0,0);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x44332c);
  DAT_004433b0 = 0;
  puVar3 = DAT_0046b248;
  while (puVar3 != (undefined4 *)0x0) {
    DAT_0046b248 = (undefined4 *)*puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = DAT_0046b248;
  }
  DAT_0046b248 = (undefined4 *)0x0;
  DAT_0046b24c = (undefined4 *)0x0;
  puVar3 = DAT_0046b250;
  while (puVar3 != (undefined4 *)0x0) {
    DAT_0046b250 = (undefined4 *)*puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = DAT_0046b250;
  }
  puVar3 = &DAT_004433b8;
  for (iVar2 = 0xa0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0046b250 = (undefined4 *)0x0;
  DAT_0046b254 = 0;
  puVar3 = &DAT_004433b8;
  do {
    puVar4 = puVar3;
    uVar1 = XAPILIB__CreateEventA(0,1,0,0);
    puVar4[2] = uVar1;
    puVar3 = DAT_0046b24c;
    bVar5 = DAT_0046b24c == (undefined4 *)0x0;
    *puVar4 = 0;
    if (bVar5) {
      puVar4[1] = 0;
      DAT_0046b248 = puVar4;
    }
    else {
      *puVar3 = puVar4;
      puVar4[1] = DAT_0046b24c;
    }
    puVar3 = puVar4 + 5;
    DAT_0046b24c = puVar4;
  } while ((int)(puVar4 + 5) < 0x443638);
  DAT_004433ac = XAPILIB__CreateThread(0,0x4000,&LAB_00264620,0,0,local_4);
  if ((DAT_004433ac != 0) && (iVar2 = XAPILIB__SetThreadPriority(DAT_004433ac,1), iVar2 != 0)) {
    XAPILIB__SleepEx(0,0);
    DAT_004698b0 = 1;
    return 0;
  }
  return 0x80004005;
}

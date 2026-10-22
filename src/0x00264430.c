/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7806C3DADBA6A46D588A0AE1516ED9F3A06062655BC754D04D2EAD4BE53A4069
 * Entry: 0x00264430, Ghidra index: 8701, label: FUN_00264430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443320;
extern uint32_t DAT_00443328;
extern uint32_t DAT_004433ac;
extern uint32_t DAT_004433c0;
extern uint32_t DAT_004698b0;
undefined4 FUN_00264430(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_004698b0 == '\0') {
    return 0x80004005;
  }
  XAPILIB__SetEvent(DAT_00443328);
  XAPILIB__SleepEx(0,0);
  XAPILIB__CloseHandle(DAT_004433ac);
  puVar2 = &DAT_00443320;
  do {
    iVar1 = XAPILIB__CloseHandle(*puVar2);
    if (iVar1 == 0) {
      return 0x80004005;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x44332c);
  puVar2 = &DAT_004433c0;
  do {
    iVar1 = XAPILIB__CloseHandle(*puVar2);
    if (iVar1 == 0) {
      return 0x80004005;
    }
    puVar2 = puVar2 + 5;
  } while ((int)puVar2 < 0x443640);
  DAT_004698b0 = 0;
  return 0;
}

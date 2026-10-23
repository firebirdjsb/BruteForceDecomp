/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E6379CA69EF898019B160E455DF44763EC11BE9BF4A90BB8EDBCAEC095BF9F8
 * Entry: 0x00311b5a, Ghidra index: 11916, label: CDirectSound_GetCaps
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7bc;
extern uint32_t DAT_0032f7c0;
extern uint32_t DAT_0032f7cc;
extern uint32_t DAT_0032f7d0;
extern uint32_t DAT_0032f7d4;
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4 DSOUND__CDirectSound_GetCaps(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    *param_2 = DAT_0032f7cc;
    param_2[1] = DAT_0032f7d0;
    param_2[2] = DAT_0032f7d4;
    param_2[3] = DAT_0032f7c0 + DAT_0032f7bc;
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    uVar2 = 0;
  }
  else {
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    uVar2 = 0x80004005;
  }
  return uVar2;
}

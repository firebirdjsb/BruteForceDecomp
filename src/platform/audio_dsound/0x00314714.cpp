/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88946558D429E7A3A2DEF043E7A112332975AEF19EA478CD122DCFEA8E9E9D8A
 * Entry: 0x00314714, Ghidra index: 12064, label: DirectSoundCreate
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int DSOUND__DirectSoundCreate(undefined4 param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  cVar1 = DirectSoundEnterCriticalSection();
  iVar2 = FUN_003146a7(&local_8);
  if (-1 < iVar2) {
    *param_2 = -(uint)(local_8 != 0) & local_8 + 8U;
  }
  if (cVar1 != '\0') {
    RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
  }
  return iVar2;
}

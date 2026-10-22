/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9BBEA35ED6CBA9C5F5F9ACE0677929FFBBACC8BEFAD270DE68B9E5390D4D610
 * Entry: 0x003147b2, Ghidra index: 12066, label: DirectSoundCreateStream
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int DSOUND__DirectSoundCreateStream(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *local_8;
  
  local_8 = (int *)0x0;
  cVar2 = DirectSoundEnterCriticalSection();
  iVar3 = FUN_003146a7(&local_8);
  piVar1 = local_8;
  if (-1 < iVar3) {
    iVar3 = CDirectSound_CreateSoundStream(local_8,param_1,param_2,0);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (cVar2 != '\0') {
    RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
  }
  return iVar3;
}

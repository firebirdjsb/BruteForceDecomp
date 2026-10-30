/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 163054B6E045F8058E6ED97B00F8F1EF4829CEEC85C7297A0FE6348AF5E9FE18
 * Entry: 0x0031475b, Ghidra index: 12065, label: DirectSoundCreateBuffer
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int DSOUND__DirectSoundCreateBuffer(undefined4 param_1,undefined4 param_2)

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
    iVar3 = CDirectSound_CreateSoundBuffer(local_8,param_1,param_2,0);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (cVar2 != '\0') {
    RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
  }
  return iVar3;
}

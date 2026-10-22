/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B16C3E647E82147C74FE65CE4D26492A0436B0697D41E4455914961DDBBE5C4
 * Entry: 0x00314493, Ghidra index: 12059, label: CDirectSound_CreateSoundBuffer
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int DSOUND__CDirectSound_CreateSoundBuffer(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = DirectSoundEnterCriticalSection();
  piVar3 = (int *)0x0;
  if (DAT_0032f7dc == 0) {
    iVar2 = FUN_003118df(0x24);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_003131f8(param_1);
    }
    iVar2 = (-(uint)(piVar3 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
    if ((iVar2 < 0) || (iVar2 = FUN_0031438a(piVar3,param_2), iVar2 < 0)) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    }
    else {
      *param_3 = -(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + 7);
    }
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
  }
  else {
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    iVar2 = -0x7fffbffb;
  }
  return iVar2;
}

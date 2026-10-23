/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E25B54C568A5DE5A135525BE5C67D003BDCE06E40C8499B44069E3811E9853FA
 * Entry: 0x00314254, Ghidra index: 12053, label: CDirectSound_CreateSoundStream
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int DSOUND__CDirectSound_CreateSoundStream
              (undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = DirectSoundEnterCriticalSection();
  piVar3 = (int *)0x0;
  if (DAT_0032f7dc == 0) {
    iVar2 = FUN_003118df(0x28);
    if (iVar2 != 0) {
      piVar3 = (int *)CDirectSoundStream_Constructor(param_1);
    }
    iVar2 = (-(uint)(piVar3 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
    if ((iVar2 < 0) || (iVar2 = FUN_003140c7(piVar3,param_2), iVar2 < 0)) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
    else {
      *param_3 = piVar3;
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

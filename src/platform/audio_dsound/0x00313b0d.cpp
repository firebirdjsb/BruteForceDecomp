/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B52D4754B846AF0DD764905226A31C9D008042CFDA332A44ECC417C24C43B23
 * Entry: 0x00313b0d, Ghidra index: 12036, label: FUN_00313b0d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int FUN_00313b0d(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint local_8;
  
  iVar1 = param_1;
  cVar2 = DSOUND__DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    iVar3 = DSOUND__DSound_CRefCount_Release(param_1);
    if (iVar3 == 5) {
      piVar6 = (int *)(param_1 + 0x18);
      param_1 = 4;
      piVar4 = piVar6;
      do {
        DSOUND__IDirectSoundBuffer_Stop(*piVar4);
        piVar4 = piVar4 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      uVar5 = 0;
LAB_00313b6f:
      do {
        DSOUND__CDirectSound_DoWork(iVar1);
        iVar3 = DSOUND__IDirectSoundBuffer_GetStatus(*piVar6,&local_8);
        if (-1 < iVar3) {
          if ((local_8 & 1) != 0) goto LAB_00313b6f;
        }
        if (*piVar6 != 0) {
          DSOUND__IDirectSoundBuffer_Release(*piVar6);
          *piVar6 = 0;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar5 < 4);
      if (*(int *)(iVar1 + 0x28) != 0) {
        FUN_00314937(*(int *)(iVar1 + 0x28));
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
      iVar3 = DSOUND__DSound_CRefCount_Release(iVar1);
    }
    if (cVar2 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
  }
  else {
    if (cVar2 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    iVar3 = -0x7fffbffb;
  }
  return iVar3;
}

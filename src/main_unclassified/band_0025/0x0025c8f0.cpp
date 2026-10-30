/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32508FBD617552B190A04FB2E007AF4E2F41470CB453926780119B27BF42299F
 * Entry: 0x0025c8f0, Ghidra index: 8557, label: FUN_0025c8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b2c8;
undefined4 FUN_0025c8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_retaddr;
  
  uVar3 = 0;
  RtlEnterCriticalSection(&DAT_0046b2c8);
  iVar2 = FUN_0025c2b0();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*unaff_retaddr + 0x50))(param_1,param_2,param_3);
    if (iVar2 == 0) {
      uVar3 = 0x80004005;
      goto LAB_0025c952;
    }
  }
  piVar1 = *(int **)(iVar2 + 4);
  *param_4 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    RtlLeaveCriticalSection(&DAT_0046b2c8);
    return 0;
  }
LAB_0025c952:
  RtlLeaveCriticalSection(&DAT_0046b2c8);
  return uVar3;
}

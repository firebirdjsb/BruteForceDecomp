/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2931316499A5ACEF3592FFE4BAE830AD20151E78C2B27268F533733F54D93CA
 * Entry: 0x0025c740, Ghidra index: 8555, label: FUN_0025c740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b2c8;
undefined4 FUN_0025c740(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_retaddr;
  
  if (param_2 == -1) {
    return 0x80004005;
  }
  RtlEnterCriticalSection(&DAT_0046b2c8);
  if (param_2 == 0) {
    piVar4 = *(int **)(unaff_retaddr + 0xc);
    piVar2 = (int *)*piVar4;
    while (piVar2 != piVar4) {
      piVar3 = (int *)piVar2[5];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x14))(piVar3);
      }
      FUN_00076220();
    }
  }
  else {
    piVar4 = (int *)FUN_0025d440();
    iVar6 = *piVar4;
    if (iVar6 != *(int *)(unaff_retaddr + 0x18)) {
      iVar1 = *(int *)(iVar6 + 0x1c);
      iVar6 = *(int *)(iVar6 + 0x18);
      if (iVar6 != iVar1) {
        do {
          iVar5 = FUN_0025c2b0();
          if ((iVar5 != 0) && (piVar4 = *(int **)(iVar5 + 4), piVar4 != (int *)0x0)) {
            (**(code **)(*piVar4 + 0x14))(piVar4);
          }
          iVar6 = iVar6 + 4;
        } while (iVar6 != iVar1);
        RtlLeaveCriticalSection(&DAT_0046b2c8);
        return 0;
      }
    }
  }
  RtlLeaveCriticalSection(&DAT_0046b2c8);
  return 0;
}

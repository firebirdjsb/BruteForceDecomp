/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79DEE3BA14896069F6234FA34E9834AB7CB129BBD372C914DCE3336DD2ACBE45
 * Entry: 0x00117580, Ghidra index: 3599, label: FUN_00117580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d004;
extern uint32_t DAT_0046d064;
undefined4 FUN_00117580(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(*(int *)(unaff_EBX + 0x2e8) + 0x130);
  if (iVar1 != 0) {
    if (DAT_0046d064 == 0x1531db8a) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_000da800();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xe0))(iVar1,&DAT_0046d004);
        *(byte *)(piVar2 + 0x43) = *(byte *)(piVar2 + 0x43) | 2;
        FUN_0021c380(0x3f800000);
      }
    }
    if (*(int **)(unaff_EBX + 0x548) != piVar2) {
      FUN_0008f6a0(piVar2);
    }
  }
  if (*(int *)(unaff_EBX + 0x548) == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(unaff_EBX + 0x548) >> 8),1);
}

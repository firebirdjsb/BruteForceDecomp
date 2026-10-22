/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8264593865D286DC2317CD3059D85EB89FBDC2326F65DA89BA701D726BE24663
 * Entry: 0x000f50f0, Ghidra index: 3069, label: FUN_000f50f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000f50f0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_EDI;
  undefined1 auStack_204 [516];
  
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x248))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(unaff_EDI + 0xc);
    if (iVar2 != 0) {
      uVar3 = FUN_001e97c0();
      if (*(uint *)(iVar2 + 0x18) < 8) {
        iVar2 = iVar2 + 4;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
      }
      FUN_002ea9a9(unaff_EDI + 0x1c,0x40,uVar3,iVar2);
      uVar3 = FUN_001e97c0(unaff_EDI + 0x1c);
      FUN_002ea9a9(auStack_204,0x100,uVar3);
      piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar4 + 0xc))(auStack_204,0,0);
    }
  }
  return 1;
}

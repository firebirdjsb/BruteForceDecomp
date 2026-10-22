/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73CB4C740096B16C5F84CF5979B57870FA7044DCA2E79764FE0BDAFAB882B46F
 * Entry: 0x00223ce0, Ghidra index: 7606, label: FUN_00223ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_00223ce0(void)

{
  int iVar1;
  int *piVar2;
  int *in_EDX;
  int unaff_EDI;
  undefined1 local_30 [48];
  
  if ((*in_EDX != DAT_0046d064) && (unaff_EDI != 0)) {
    iVar1 = FUN_00160da0(0xffffffff,1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0x18)) {
      piVar2 = (int *)FUN_000da840(iVar1);
      if (piVar2 != (int *)0x0) {
        FUN_00040f40();
        FUN_0003d7e0();
        (**(code **)(*piVar2 + 0x50))(local_30);
        FUN_0010fed0();
        (**(code **)(**(int **)(*(int *)(unaff_EDI + 8) + 0xbec) + 0xc))();
        FUN_0010fef0();
        FUN_0014a150();
        *(byte *)(piVar2 + 0x77) = *(byte *)(piVar2 + 0x77) | 2;
        return 1;
      }
    }
  }
  return 0;
}

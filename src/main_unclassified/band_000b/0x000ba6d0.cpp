/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 682CB21958978FE31A28F36AD31E3816CADB3AEA9C08B1AD470E533255945DDD
 * Entry: 0x000ba6d0, Ghidra index: 2264, label: FUN_000ba6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000a7770(uint *param_1);

extern uint32_t DAT_0046d064;
undefined4 FUN_000ba6d0(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int unaff_EDI;
  
  iVar2 = *unaff_EBX;
  if (*(int *)(unaff_EDI + 0x24) != iVar2) {
    piVar3 = (int *)0x0;
    if (iVar2 != DAT_0046d064) {
      piVar3 = (int *)FUN_000a7770(unaff_EBX);
    }
    piVar1 = *(int **)(unaff_EDI + 0x20);
    if ((piVar3 != piVar1) && (piVar1 != piVar3)) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(unaff_EDI + 0x20) = 0;
      }
      *(int **)(unaff_EDI + 0x20) = piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
    iVar2 = *unaff_EBX;
    *(int *)(unaff_EDI + 0x24) = iVar2;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

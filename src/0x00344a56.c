/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D099F6FB706E9B054FA9206A69EBF6265C0EEC1BC58C7F6286CE1D502E27FF0A
 * Entry: 0x00344a56, Ghidra index: 12746, label: FUN_00344a56
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b1420;
undefined4 FUN_00344a56(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  size_t __n;
  undefined1 *puVar4;
  
  if (*(int *)(param_1 + 0x2c) == 0x200) {
    iVar2 = FUN_003437b3(param_1,2);
    if (iVar2 == 0) {
      return 0;
    }
    piVar1 = (int *)(param_1 + 0x24);
    *(undefined1 *)*piVar1 = 0;
    *piVar1 = *piVar1 + 1;
    *(undefined1 *)*piVar1 = 0;
    *piVar1 = *piVar1 + 1;
  }
  else {
    puVar4 = (undefined1 *)(*(int *)(param_1 + 0x10) + param_2);
    __n = (*(int *)(param_1 + 0x24) - (int)puVar4) - 1;
    iVar2 = FUN_003430ea(__n,&DAT_004b1420,4);
    if (iVar2 == 1) {
      *puVar4 = (char)__n;
    }
    else {
      iVar3 = FUN_003437b3(param_1,iVar2 + -1);
      if (iVar3 == 0) {
        return 0;
      }
      param_2 = *(int *)(param_1 + 0x10) + param_2;
      _memmove((void *)(iVar2 + param_2),(void *)(param_2 + 1),__n);
      *(int *)(param_1 + 0x24) = param_2;
      FUN_0034310e(param_1,__n,iVar2);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + __n;
    }
  }
  return 1;
}

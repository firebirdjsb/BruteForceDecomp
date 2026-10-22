/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AAC914569A9F9895AB7D5667C5AD8B4DAD347082221373CDB45B0A1D8FEF891
 * Entry: 0x001210c0, Ghidra index: 3652, label: FUN_001210c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_001210c0(void)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(in_EAX + 0x7e8) != '\0') {
    return false;
  }
  iVar3 = *(int *)(in_EAX + 0x2e8);
  cVar1 = (**(code **)(*(int *)(iVar3 + 0x178) + 0x20))();
  if ((cVar1 == '\0') || (*(int *)(iVar3 + 0x198) == 0)) {
    piVar2 = (int *)FUN_0014cc30();
    if ((piVar2 != (int *)0x0) && (*(short *)((int)piVar2 + 0x1a) != 0)) {
      iVar3 = (**(code **)(*piVar2 + 0x5c))();
      iVar4 = FUN_001463c0();
      if (iVar4 != 0xd) {
        if (iVar4 == 6) {
LAB_00121142:
          cVar1 = (**(code **)(**(int **)(iVar3 + 0x15c) + 0x3c))
                            (piVar2,*(undefined4 *)(in_EAX + 0x2e8));
          return cVar1 != '\0';
        }
        if (*(int *)(in_EAX + 0x214) == 0) {
          cVar1 = FUN_00117210();
          if (cVar1 != '\0') goto LAB_00121142;
        }
      }
    }
  }
  return false;
}

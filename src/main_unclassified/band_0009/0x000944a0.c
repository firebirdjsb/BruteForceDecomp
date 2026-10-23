/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47979EAF495E56A3E2F9CEB668BEA6A955706B462D7D0969438EBC3C942F059F
 * Entry: 0x000944a0, Ghidra index: 1813, label: FUN_000944a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000944a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  piVar3 = param_1;
  cVar4 = FUN_00090930(param_1);
  if (cVar4 != '\0') {
    param_1 = (int *)0xb85cb09;
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x50))(piVar3,&param_1);
    iVar2 = piVar3[3];
    piVar1 = piVar3 + 3;
    uVar6 = FUN_00220dd0(*puVar5);
    (**(code **)(iVar2 + 0x20))(piVar1,uVar6);
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x50))(piVar3,&stack0xfffffff0);
    iVar2 = *piVar1;
    uVar6 = FUN_00220dd0(*puVar5);
    (**(code **)(iVar2 + 0x20))(piVar1,uVar6);
  }
  return cVar4;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A5B46495ECC500AB07FC5F7A097A172AA1EABBD8B25E0C93736E33811C38102
 * Entry: 0x000a1990, Ghidra index: 1911, label: FUN_000a1990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x000a1a08) */
/* WARNING: Removing unreachable block (ram,0x000a1a25) */

undefined4 FUN_000a1990(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *unaff_retaddr;
  
  cVar2 = FUN_00090930(param_1);
  if (cVar2 != '\0') {
    piVar3 = (int *)FUN_000a7770(param_1 + 0x3c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
      if (unaff_retaddr != (int *)0x0) {
        (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
      }
      (**(code **)(*piVar3 + 0x30))(piVar3,0,&stack0x00000000);
    }
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return 1;
}

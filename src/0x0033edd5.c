/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8E09D668113C670FD0656FDDFF1F721752A954BFF06DCACAACE05C78D2F3AD8
 * Entry: 0x0033edd5, Ghidra index: 12629, label: FUN_0033edd5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033edd5(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    iVar1 = XAPILIB__WriteFile(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x10),
                               *(undefined4 *)(param_1 + 0x14),0,param_1 + 0x20);
  }
  else {
    iVar1 = XAPILIB__ReadFile(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x10),
                              *(undefined4 *)(param_1 + 0x14),0,param_1 + 0x20);
  }
  if (*(int *)(param_1 + 8) != 0) {
    XAPILIB__SetEvent(*(int *)(param_1 + 8));
  }
  uVar3 = 0;
  if (((iVar1 == 0) && (uVar2 = XAPILIB__GetLastError(), uVar2 != 0x3e5)) &&
     (uVar3 = uVar2, 0 < (int)uVar2)) {
    uVar3 = uVar2 & 0xffff | 0x80070000;
  }
  return uVar3;
}

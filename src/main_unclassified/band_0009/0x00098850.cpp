/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C95A56392AB59EA130A8A7702A76DF0DA2D7F6D84A03E980F8F0A2AECAA1976
 * Entry: 0x00098850, Ghidra index: 1840, label: FUN_00098850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00090930(int *param_1);
extern undefined4 FUN_000908f0(void);

uint FUN_00098850(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_00090930(param_1);
  if ((char)uVar2 != '\0') {
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 0x20))(piVar1);
      uVar2 = FUN_000908f0();
      if (((((char)uVar2 == '\0') && (uVar2 = 0, iVar3 != 0xc)) && (uVar2 = 0, iVar3 != 0xe)) &&
         (uVar2 = 0, iVar3 != 0xf)) {
        piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
        iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1);
        *(float *)(param_1 + 0x30) = (float)iVar3;
        piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
        uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
        *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
        *(float *)(param_1 + 0x34) = (float)(int)uVar2;
      }
    }
  }
  return uVar2 & 0xffffff00;
}

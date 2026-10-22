/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 037033D38655CEB3C5FA2578402ACB7D96BB1E590D26C7FE2F0AB986B02CF467
 * Entry: 0x00346386, Ghidra index: 12831, label: FUN_00346386
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00346386(int param_1,undefined2 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
  }
  else {
    iVar1 = FUN_003454a2(param_1);
    if (iVar1 != 0) {
      if (((*(byte *)(iVar1 + 0xc) & 2) == 0) || (*(char *)(iVar1 + 0x7c) != '\x01')) {
        param_1 = 0x2726;
      }
      else {
        do {
          KeRaiseIrqlToDpcLevel();
          iVar3 = FUN_00353829();
          KfLowerIrql();
          if (iVar3 != 0) goto LAB_00346414;
          if ((*(byte *)(iVar1 + 0xe) & 4) != 0) {
            param_1 = 0x2733;
            goto LAB_00346476;
          }
          iVar2 = FUN_00345e05(iVar1,0x2000,0);
        } while (iVar2 == 0);
        if (iVar2 < 0) {
          param_1 = RtlNtStatusToDosError(iVar2);
        }
        else {
LAB_00346414:
          param_1 = 0;
        }
        if (((iVar3 != 0) && (FUN_00345541(0xffffffff,0x400000), param_2 != (undefined2 *)0x0)) &&
           (param_3 != (undefined4 *)0x0)) {
          *param_2 = 2;
          param_2[1] = *(undefined2 *)(iVar3 + 0x48);
          *(undefined4 *)(param_2 + 2) = *(undefined4 *)(iVar3 + 0x44);
          *(undefined4 *)(param_2 + 4) = 0;
          *(undefined4 *)(param_2 + 6) = 0;
          *param_3 = 0x10;
        }
      }
LAB_00346476:
      *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
      if (param_1 == 0) {
        return iVar3;
      }
      XAPILIB__SetLastError(param_1);
    }
  }
  return -1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86A4CCA44D2C80D58699BB392DAF35B3E672A227A501A238C802B6D0BF8CF894
 * Entry: 0x0034681d, Ghidra index: 12833, label: FUN_0034681d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0034681d(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
            undefined4 *param_5)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    iVar2 = 0x276d;
  }
  else {
    iVar1 = FUN_003454a2(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_2[3] == -0x7ff8fc1b) && (param_4 != 0)) {
      XAPILIB__WaitForSingleObject(param_2[4],0xffffffff);
      KeRaiseIrqlToDpcLevel();
      if (param_2[3] == -0x7ff8fc1b) {
        FUN_00345e88(iVar1,*param_2,(-(uint)(param_2[2] != 0) & 0x7ff8d889) + 0x80072777);
      }
      KfLowerIrql();
    }
    iVar2 = param_2[3];
    if (iVar2 == -0x7ff8fc1b) {
      iVar2 = 0x3e4;
    }
    else if (iVar2 < 0) {
      iVar2 = RtlNtStatusToDosError(iVar2);
    }
    else {
      *param_3 = param_2[2];
      *param_5 = param_2[1];
      iVar2 = 0;
    }
    *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
    if (iVar2 == 0) {
      return 1;
    }
  }
  XAPILIB__SetLastError(iVar2);
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7426799B5229665D1DFE9A8B1DFD41DD28488814838A4C9460512A7869DA99C0
 * Entry: 0x0033e833, Ghidra index: 12612, label: FUN_0033e833
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033e833(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_14 [16];
  
  uVar1 = FUN_0033e7ff(param_1 + 0x24,local_14);
  if (-1 < (int)uVar1) {
    iVar2 = FUN_00345079(2,1,0);
    if (iVar2 == -1) {
      iVar2 = XAPILIB__GetLastError();
      if (iVar2 < 1) {
        uVar1 = XAPILIB__GetLastError();
      }
      else {
        uVar1 = XAPILIB__GetLastError();
        uVar1 = uVar1 & 0xffff | 0x80070000;
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x1b) & 0x40) != 0) {
        FUN_003450a5(iVar2,0xffff,0x4001);
      }
      FUN_0033f02a(iVar2,*(undefined4 *)(param_1 + 8),param_1 + 100);
      uVar1 = FUN_0033ef9c(local_14,param_1 + 100);
    }
  }
  return uVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 699439BCC7F235B0E5B05E2BCD6149E28071F10E041EBEC2653D0BA904628184
 * Entry: 0x003473a3, Ghidra index: 12847, label: FUN_003473a3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003473a3(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
  }
  else {
    iVar1 = FUN_003454a2(param_1);
    if (iVar1 != 0) {
      KeRaiseIrqlToDpcLevel();
      if ((*(byte *)(iVar1 + 0xe) & 0x80) == 0) {
        FUN_00345541(0xffbfffff,0);
        iVar1 = FUN_00346cd5(iVar1,0);
      }
      else {
        FUN_00345579(iVar1);
        iVar1 = 0;
      }
      KfLowerIrql();
      if ((-1 < iVar1) || (iVar1 = RtlNtStatusToDosError(iVar1), iVar1 == 0)) {
        return 0;
      }
      XAPILIB__SetLastError(iVar1);
    }
  }
  return 0xffffffff;
}

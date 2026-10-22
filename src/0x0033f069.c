/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF40B4558C10390D7E229DD944B25DADD13A4527E6C1AC5C88EB72204BBEC21C
 * Entry: 0x0033f069, Ghidra index: 12636, label: FUN_0033f069
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033f069(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_003450ef(*(undefined4 *)(param_1 + 0x10),param_1 + 0x24,param_1 + 0x1c,0,
                       param_1 + 0x20);
  if (iVar1 == 0) {
    uVar2 = XAPILIB__GetLastError();
    if ((uVar2 == 0x3e5) || (uVar2 == 0x3e4)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else {
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0xffff | 0x80070000;
      }
      *(uint *)(param_1 + 0xc) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0x1500f0;
  }
  return *(undefined4 *)(param_1 + 0xc);
}

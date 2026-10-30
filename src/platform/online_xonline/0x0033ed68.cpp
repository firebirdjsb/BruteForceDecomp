/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD9EA1EEDACCB263E3A6B1F22A17BE0DB7C99FF3A9D8A079DB23F6C6BD831AC6
 * Entry: 0x0033ed68, Ghidra index: 12628, label: FUN_0033ed68
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033ed68(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = XAPILIB__GetOverlappedResult
                    (*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,param_1 + 0x18,0);
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

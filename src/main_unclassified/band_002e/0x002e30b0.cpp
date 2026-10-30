/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A64115EF21306FEC446740725D037484BD3EE3D36F6341292EE58AB7753951CA
 * Entry: 0x002e30b0, Ghidra index: 10389, label: FUN_002e30b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e30b0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  iVar1 = FUN_003450bf(*in_ECX,param_1,0x10);
  if (iVar1 == -1) {
    uVar2 = XAPILIB__GetLastError();
    if (uVar2 == 0x2733) {
      return 1;
    }
    if (0 < (int)uVar2) {
      return uVar2 & 0xffff | 0x80070000;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

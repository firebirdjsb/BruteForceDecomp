/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB0316BD77830B06AA538C9137EF427D109CC8C8180A8213FA2D329805F53957
 * Entry: 0x00335b70, Ghidra index: 12444, label: FUN_00335b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00335b70(int param_1)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((param_1 == 0) || (uVar1 = *(ushort *)(param_1 + 0xc), 0xfa < uVar1)) {
LAB_00335bab:
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar1 != 0) {
      pbVar2 = (byte *)(param_1 + 0x38);
      do {
        if ((*(int *)(pbVar2 + -8) == 0 && *(int *)(pbVar2 + -4) == 0) || ((*pbVar2 & 3) != 0))
        goto LAB_00335bab;
        uVar4 = uVar4 + 1;
        pbVar2 = pbVar2 + 0x10;
      } while (uVar4 < uVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

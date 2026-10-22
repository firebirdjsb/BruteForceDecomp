/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50B25EB835BCBCEAC471158548EA39F65B47AACF66373A45D6F9946D9A854C79
 * Entry: 0x003561dd, Ghidra index: 13138, label: FUN_003561dd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003561dd(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 8) {
    param_1[2] = param_1[2] & 0xfffffff9 | 1;
    FUN_0034bd47(param_1);
  }
  else if ((((param_2 == 0x6488) || (param_2 == 0x133c)) || (param_2 == 0x6388)) ||
          (param_2 == 0x123c)) {
    uVar3 = (uint)*(ushort *)(param_1 + 1);
    if (((5 < uVar3) &&
        (uVar1 = *(ushort *)((char *)*param_1 + 4), uVar2 = (ushort)(uVar1 >> 8 | uVar1 << 8) + 6,
        *(char *)*param_1 == '\x11')) && (uVar2 <= uVar3)) {
      if (uVar2 < uVar3) {
        *(short *)(param_1 + 1) = (short)uVar2;
      }
      FUN_003526e9(param_1,param_2);
    }
  }
  else if (param_2 == 0x608) {
    FUN_00355e3d(param_1);
  }
  return;
}

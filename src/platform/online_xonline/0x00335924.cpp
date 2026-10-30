/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80ABDE61DB0F80C4E3DAD2336075B210BDC97C4C1F98CFEE2259DE36309D17A8
 * Entry: 0x00335924, Ghidra index: 12439, label: FUN_00335924
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00335924(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00347699(*(undefined4 *)(param_1 + 0x14));
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 0x10) == 0) {
          if ((uVar1 & 4) == 0) {
            return 0;
          }
          uVar2 = 2;
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  uVar2 = FUN_003352c9(*(undefined4 *)(param_1 + 0x14),uVar2,param_1);
  return uVar2;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F07DB844A199FAF81B44B80989C960022603B56BBBBE95BE7432C727807B250B
 * Entry: 0x001d0960, Ghidra index: 6195, label: FUN_001d0960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0960(int param_1,int param_2)

{
  int unaff_EBX;
  
  if (param_1 != param_2) {
    do {
      FUN_001d2580();
      FUN_0001f4f0(unaff_EBX + 0x128,0,0xffffffff);
      param_1 = param_1 + 0x144;
    } while (param_1 != param_2);
  }
  return;
}

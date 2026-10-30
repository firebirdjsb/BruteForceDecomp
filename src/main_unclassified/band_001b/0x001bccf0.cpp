/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 776F1798C84184307A974E2AE47095FB2D4C180287F63FFACD2576162A999594
 * Entry: 0x001bccf0, Ghidra index: 5743, label: FUN_001bccf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001bccf0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d7470(param_3);
    FUN_00069aa0(uVar1,*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D44CA5B8EF408CFCBEF8CD6789E2C04056A3725AE18B3646A546B161B03E0156
 * Entry: 0x001d89d0, Ghidra index: 6436, label: FUN_001d89d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra callee 0x001D26F0 has no explicit source parameters.
 * Implicit guest registers and C++ object ABI remain ABI_UNVERIFIED. */
extern void FUN_001d26f0(void);
int * FUN_001d89d0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar2 = param_4 + -0x1b8;
    iVar1 = param_3 + -0x1b8;
    FUN_001d26f0();
    *(undefined4 *)(param_4 + -0x10) = *(undefined4 *)(param_3 + -0x10);
    *(undefined4 *)(param_4 + -0xc) = *(undefined4 *)(param_3 + -0xc);
    *(undefined1 *)(param_4 + -8) = *(undefined1 *)(param_3 + -8);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = iVar2;
  } while (iVar1 != param_2);
  *param_1 = iVar2;
  return param_1;
}

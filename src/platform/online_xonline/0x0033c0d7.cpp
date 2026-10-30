/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28B0AF26F9E8568737A9986BDE99DA54E4C3A499237CD169B7360FA809EF5A33
 * Entry: 0x0033c0d7, Ghidra index: 12544, label: FUN_0033c0d7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033c0d7(int param_1,int param_2,uint param_3,void *param_4)

{
  void *__src;
  uint __n;
  
  __src = (void *)(*(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc) + param_1);
  __n = 500 - *(int *)(param_2 + 0xc);
  if (__n < param_3) {
    do {
      _memmove(param_4,__src,__n);
      param_3 = param_3 - __n;
      param_4 = (void *)((int)param_4 + __n);
      __src = (void *)((int)__src + __n + 0xc);
      __n = 500;
    } while (500 < param_3);
  }
  _memmove(param_4,__src,param_3);
  return;
}

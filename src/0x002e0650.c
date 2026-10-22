/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 531281360FAFD590D3C58CF91DE85937D9F4458CCC84F5CD622AB988DD95ADCA
 * Entry: 0x002e0650, Ghidra index: 10351, label: FUN_002e0650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e0650(int param_1,uint *param_2,int param_3)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  
  if (((param_3 == 0) || (param_1 == 0)) || (param_2 == (uint *)0x0)) {
    return 0x80004003;
  }
  uVar1 = *param_2;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(param_1 + uVar2 * 4) == param_3) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_2);
  }
  if (uVar2 != uVar1) {
    __dest = (void *)(param_1 + uVar2 * 4);
    _memmove(__dest,(void *)((int)__dest + 4),(uVar1 - uVar2) * 4 - 4);
    *param_2 = *param_2 - 1;
    return 0;
  }
  return 0x80040002;
}

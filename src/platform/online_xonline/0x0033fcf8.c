/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17BC3291BAEB139126F29D081F34C5770F3206099188D203A61B204877009E9C
 * Entry: 0x0033fcf8, Ghidra index: 12659, label: FUN_0033fcf8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033fcf8(int param_1,char *param_2,long *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  *param_3 = 0;
  param_3[1] = 0;
  lVar3 = _atol(param_2);
  *param_3 = lVar3;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  cVar1 = *param_2;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    puVar4 = *(undefined4 **)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = puVar4 + 2;
    if (*(undefined4 **)(param_1 + 4) < puVar4 + 2) {
      *(undefined4 **)(param_1 + 8) = puVar4;
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    *puVar4 = 0;
    puVar4[1] = param_2;
    if (puVar2 == (undefined4 *)0x0) {
      param_3[1] = (long)puVar4;
    }
    else {
      *puVar2 = puVar4;
    }
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    cVar1 = *param_2;
    puVar2 = puVar4;
  }
  return 0x3c;
}

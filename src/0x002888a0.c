/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 913B6463CFBED86D1A23D313D8290C434469EE8C7692C92494E0D09F91BC1C0F
 * Entry: 0x002888a0, Ghidra index: 9114, label: FUN_002888a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002888a0(undefined4 param_1,size_t param_2,char *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  char *__src;
  
  puVar2 = (undefined4 *)0x0;
  if (*(undefined4 **)(in_ECX + 0x20) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x20);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x20);
  while( true ) {
    if (puVar2 == puVar1) {
      return 0;
    }
    iVar3 = FUN_00234c90();
    if (iVar3 == 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  iVar3 = puVar2[2];
  if (*(int *)(iVar3 + 0x30) != 0) {
    if (*(uint *)(iVar3 + 0x34) < 0x10) {
      __src = (char *)(iVar3 + 0x20);
    }
    else {
      __src = *(char **)(iVar3 + 0x20);
    }
    _strncpy(param_3,__src,param_2);
    param_3[param_2 - 1] = '\0';
    return 1;
  }
  *param_3 = '\0';
  return 1;
}

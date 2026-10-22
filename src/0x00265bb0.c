/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3037A04957BC4CA91023EC39C83E99563953A8390C729D1447CA4D928C50F83
 * Entry: 0x00265bb0, Ghidra index: 8731, label: FUN_00265bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00265bb0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = param_1;
  if (*(char *)(param_1 + 5) != '\0') {
    return 0x80004005;
  }
  iVar3 = XAPILIB__WriteFile(*(undefined4 *)(param_1 + 0x10c),param_2,param_3,&param_1,0);
  if ((iVar3 == 0) && (iVar3 = XAPILIB__GetLastError(), iVar3 != 0x3e5)) {
    return 0x80004005;
  }
  puVar4 = (uint *)(iVar2 + 0x118);
  *puVar4 = *(int *)(iVar2 + 0x118) + param_1;
  puVar1 = (uint *)(iVar2 + 0x124);
  if (*puVar4 <= *puVar1) {
    puVar4 = puVar1;
  }
  *puVar1 = *puVar4;
  if (param_4 != (int *)0x0) {
    *param_4 = param_1;
  }
  return 0;
}

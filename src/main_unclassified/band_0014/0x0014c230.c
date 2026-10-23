/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FDD4B74A9FF21A48D72455F3905E74F5260E67DD629F620204217A386092CBA
 * Entry: 0x0014c230, Ghidra index: 4335, label: FUN_0014c230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014c230(int param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint in_EAX;
  int in_ECX;
  int *piVar4;
  
  if (in_ECX == 10) {
    in_ECX = 0;
    in_EAX = 0xffffffff;
  }
  else if (9 < in_ECX) goto LAB_0014c2e1;
  do {
    iVar1 = in_ECX * 0x10 + param_1;
LAB_0014c260:
    in_EAX = in_EAX + 1;
    if ((*(int *)(iVar1 + 0xc) != 0) &&
       (in_EAX < (uint)(*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2))) {
      if (in_ECX != 0) goto LAB_0014c284;
      piVar4 = *(int **)(param_1 + 0xbc);
      goto LAB_0014c2a1;
    }
    in_EAX = 0xffffffff;
    in_ECX = in_ECX + 1;
  } while (in_ECX < 10);
LAB_0014c2e1:
  *param_2 = 10;
  *param_3 = 0xffffffff;
  return 0;
LAB_0014c284:
  if (((in_ECX < 10) && (iVar2 = *(int *)(iVar1 + 0xc), iVar2 != 0)) &&
     (in_EAX < (uint)(*(int *)(iVar1 + 0x10) - iVar2 >> 2))) {
    piVar4 = *(int **)(iVar2 + in_EAX * 4);
LAB_0014c2a1:
    if (((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0x20))(), cVar3 != '\0')) &&
       ((param_4 == (undefined4 *)0x0 ||
        (cVar3 = (**(code **)*param_4)(in_ECX,in_EAX), cVar3 != '\0')))) {
      *param_2 = in_ECX;
      *param_3 = in_EAX;
      return 1;
    }
  }
  goto LAB_0014c260;
}

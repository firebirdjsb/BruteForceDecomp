/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0FBDE138172B2AB71E15888F49FE2FE1A342D0C892CDDF87C319C223EA72474
 * Entry: 0x002f182c, Ghidra index: 10781, label: FUN_002f182c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f182c(char *param_1,int param_2,int param_3)

{
  char *__src;
  char *__dest;
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  __dest = param_1;
  pcVar2 = *(char **)(param_3 + 0xc);
  __src = param_1 + 1;
  *param_1 = '0';
  pcVar1 = __src;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar3 = *pcVar2;
      if (cVar3 == '\0') {
        cVar3 = '0';
      }
      else {
        pcVar2 = pcVar2 + 1;
      }
      *pcVar1 = cVar3;
      pcVar1 = pcVar1 + 1;
      param_1 = (char *)((int)param_1 + -1);
    } while (param_1 != (char *)0x0);
  }
  *pcVar1 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar2)) {
    while (pcVar1 = pcVar1 + -1, *pcVar1 == '9') {
      *pcVar1 = '0';
    }
    *pcVar1 = *pcVar1 + '\x01';
  }
  if (*__dest == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    pcVar2 = __src;
    do {
      cVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar3 != '\0');
    _memmove(__dest,__src,(size_t)(pcVar2 + (1 - (int)(__dest + 2))));
  }
  return;
}

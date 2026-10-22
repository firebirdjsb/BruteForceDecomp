/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4480BC643253C817BAACA462C1439FA00E890983620D82F4D14E17B42F136A0
 * Entry: 0x002ea8dc, Ghidra index: 10590, label: FUN_002ea8dc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ea8dc(char *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *param_1 = *param_2;
    param_1[1] = ':';
    param_1 = param_1 + 2;
  }
  if ((param_3 != (char *)0x0) && (cVar1 = *param_3, pcVar2 = param_3, cVar1 != '\0')) {
    do {
      pcVar3 = param_1;
      *pcVar3 = cVar1;
      param_1 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_002ed1a8(param_3,pcVar2);
    if ((*pcVar2 != '/') && (*pcVar2 != '\\')) {
      *param_1 = '\\';
      param_1 = pcVar3 + 2;
    }
  }
  if (param_4 != (char *)0x0) {
    cVar1 = *param_4;
    while (cVar1 != '\0') {
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
      cVar1 = *param_4;
    }
  }
  if (param_5 == (char *)0x0) {
    *param_1 = '\0';
  }
  else {
    if ((*param_5 != '\0') && (*param_5 != '.')) {
      *param_1 = '.';
      param_1 = param_1 + 1;
    }
    do {
      cVar1 = *param_5;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      param_5 = param_5 + 1;
    } while (cVar1 != '\0');
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8902BC884D8161A13AFC46C258121BEB0C176549560CAC1C5A3BA22885E02F65
 * Entry: 0x0033065d, Ghidra index: 12365, label: FUN_0033065d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void FUN_0033065d(char *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  piVar2 = *(int **)LaunchDataPage_exref;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 + (int)(pcVar4 + (8 - (int)(param_2 + 1))) < (char *)0x1ec) {
    *(undefined2 *)(piVar2 + 0x85) = 1;
    *(short *)((int)piVar2 + 0x216) = (short)pcVar4;
    piVar2[0x86] = *piVar2;
    if (*piVar2 == -1) {
      *piVar2 = 0;
    }
    iVar3 = 0x21c - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)piVar2 + iVar3] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    iVar3 = 0x21c - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)((int)piVar2 + (int)(pcVar4 + iVar3))] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}

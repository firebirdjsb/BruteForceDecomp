/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48DCD119EE6ED5BE01661502267F1566E8CFAB064545BF5B2149E240467AB1D9
 * Entry: 0x00341d7a, Ghidra index: 12682, label: FUN_00341d7a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00341d7a(char *param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  *param_5 = 0;
  pcVar8 = param_1;
  do {
    pcVar5 = pcVar8;
    pcVar8 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  if ((param_1 != pcVar5) && (pcVar6 = param_1, pcVar8 = param_1, param_1 < pcVar5)) {
    do {
      cVar1 = *pcVar6;
      pcVar7 = pcVar6;
      if (cVar1 == '\0') {
LAB_00341e31:
        if ((!bVar2) || (cVar1 == '\0')) {
          *pcVar6 = '\0';
          if (bVar3) {
            *(char **)(param_3 + *param_5 * 4) = pcVar8;
            bVar3 = false;
          }
          else if (pcVar6 == pcVar8) {
            bVar4 = true;
          }
          else {
            *(char **)(param_2 + *param_5 * 4) = pcVar8;
            *(char **)(param_3 + *param_5 * 4) = pcVar6;
          }
          pcVar8 = pcVar6 + 1;
          if (bVar4) {
            bVar4 = false;
          }
          else {
            *param_5 = *param_5 + 1;
            if (param_4 <= *param_5) {
              pcVar7 = pcVar5;
            }
          }
        }
      }
      else if ('\b' < cVar1) {
        if (((cVar1 < '\v') || (cVar1 == '\r')) || (cVar1 == ' ')) goto LAB_00341e31;
        if (cVar1 == '\"') {
          if ((pcVar6 == param_1) || (pcVar6[-1] != '\\')) {
            if (bVar2) {
              bVar2 = false;
              *pcVar6 = '\0';
            }
            else {
              bVar2 = true;
              if (pcVar6 == pcVar8) {
                pcVar8 = pcVar8 + 1;
              }
            }
          }
        }
        else if (((cVar1 == '=') && (!bVar2)) && (!bVar3)) {
          *pcVar6 = '\0';
          *(char **)(param_2 + *param_5 * 4) = pcVar8;
          pcVar8 = pcVar6 + 1;
          bVar3 = true;
        }
      }
      pcVar6 = pcVar7 + 1;
    } while (pcVar7 + 1 <= pcVar5);
  }
  return;
}

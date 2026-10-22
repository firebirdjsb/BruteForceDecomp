/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 142180E6CA59889EB454AD465D4EC9ACCF9AA0A0DC33985FB0BF58CD719E7E6D
 * Entry: 0x002f56db, Ghidra index: 10894, label: FUN_002f56db
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f56db(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar1 = param_1 + 1;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  iVar5 = param_2 - (int)param_1;
  do {
    cVar2 = *param_1;
    param_1[iVar5] = cVar2;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  pcVar4 = "\\ContentMeta.xbx";
  do {
    cVar2 = *pcVar4;
    pcVar4[(int)(pcVar3 + (param_2 - (int)pcVar1) + -0x387860)] = cVar2;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  return;
}

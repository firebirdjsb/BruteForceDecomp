/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D072C02BF6436EB42658B8B0D867DEEEC2E7C1DD77D0A56304BF892D4EAC8D99
 * Entry: 0x0034db96, Ghidra index: 13008, label: FUN_0034db96
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034db96(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *in_ECX;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 + (2 - (int)(param_1 + 1)) < (char *)0x100) {
    *in_ECX = '.';
    pcVar5 = param_1;
    pcVar4 = in_ECX + 1;
    for (uVar3 = (uint)(pcVar2 + (1 - (int)(param_1 + 1))) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar3 = (uint)(pcVar2 + (1 - (int)(param_1 + 1))) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    }
    pcVar2 = in_ECX;
    pcVar5 = in_ECX;
    if (*in_ECX != '\0') {
LAB_0034dbe6:
      do {
        pcVar2 = pcVar2 + 1;
        if (*pcVar2 != '\0') {
          if (*pcVar2 != '.') goto LAB_0034dbe6;
        }
        pcVar4 = pcVar2 + (-1 - (int)pcVar5);
        if ((char *)0x3f < pcVar4) {
          *pcVar2 = '\0';
          goto LAB_0034dc09;
        }
        if ((pcVar4 == (char *)0x0) && (*pcVar2 != '\0')) goto LAB_0034dc09;
        *pcVar5 = (char)pcVar4;
        pcVar5 = pcVar2;
      } while (*pcVar2 != '\0');
      if (*in_ECX != '\0') {
        return 1;
      }
    }
  }
LAB_0034dc09:
  *in_ECX = '\0';
  return 0;
}

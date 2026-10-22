/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C2870317F3B9987A2FEC53174A47898E4025C38B33633ABE1B50A7C290E4CB0
 * Entry: 0x002ee3a6, Ghidra index: 10695, label: FUN_002ee3a6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ee3a6(uint param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  char *in_ECX;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = in_ECX;
  if (param_2 != 0) {
    *in_ECX = '-';
    in_ECX = in_ECX + 1;
    in_EAX = -in_EAX;
    pcVar2 = in_ECX;
  }
  do {
    pcVar3 = pcVar2;
    uVar1 = (ulonglong)in_EAX;
    in_EAX = in_EAX / param_1;
    cVar4 = (char)(uVar1 % (ulonglong)param_1);
    if ((uint)(uVar1 % (ulonglong)param_1) < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *pcVar3 = cVar4;
    pcVar2 = pcVar3 + 1;
  } while (in_EAX != 0);
  pcVar3[1] = '\0';
  do {
    cVar4 = *pcVar3;
    *pcVar3 = *in_ECX;
    pcVar3 = pcVar3 + -1;
    *in_ECX = cVar4;
    in_ECX = in_ECX + 1;
  } while (in_ECX < pcVar3);
  return;
}

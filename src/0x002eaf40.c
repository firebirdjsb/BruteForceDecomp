/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B599EA33C0E50B515A59DC8E4F453F040752C0A3AF01AFA77F3695F7753BA12
 * Entry: 0x002eaf40, Ghidra index: 10606, label: _strrchr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio */

char * __cdecl _strrchr(char *__s,int __c)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = __s;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = __s + 1;
    cVar1 = *__s;
    __s = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)__c != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)__c) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}

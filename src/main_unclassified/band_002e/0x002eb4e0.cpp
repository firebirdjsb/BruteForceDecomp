/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 591725832ADB8343CDB0B00CB336D17F54BF82C34875EDE3BECE382072DD0644
 * Entry: 0x002eb4e0, Ghidra index: 10622, label: _strncmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl _strncmp(char *__s1,char *__s2,size_t __n)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = __n;
  pcVar6 = __s1;
  if (__n != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = __n - sVar3;
    do {
      pcVar6 = __s2;
      pcVar7 = __s1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = __s1 + 1;
      pcVar6 = __s2 + 1;
      cVar2 = *__s1;
      cVar1 = *__s2;
      __s2 = pcVar6;
      __s1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC7833FDA4E6D81AAC734C2C5F121B4B8FAA6001AD589EED7AF561F889F9C3B6
 * Entry: 0x001f1b40, Ghidra index: 6995, label: FUN_001f1b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f1b40(void)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  int in_ECX;
  char *in_EDX;
  char *pcVar3;
  
  pcVar2 = (char *)(in_EAX + 0x138);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3[in_ECX - (int)pcVar2] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (in_ECX - (in_EAX + 0x139));
  *pcVar2 = '\\';
  cVar1 = *in_EDX;
  while (pcVar2 = pcVar2 + 1, cVar1 != '\0') {
    if (cVar1 == '/') {
      *pcVar2 = '\\';
    }
    else {
      *pcVar2 = cVar1;
    }
    pcVar3 = in_EDX + 1;
    in_EDX = in_EDX + 1;
    cVar1 = *pcVar3;
  }
  *pcVar2 = '\0';
  return;
}

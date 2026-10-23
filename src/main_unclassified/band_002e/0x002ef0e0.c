/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9208EFE7B20EBF707490AA3334DABF576A42BFABCB93356DFD2505C20DD6D658
 * Entry: 0x002ef0e0, Ghidra index: 10704, label: ___ascii_stricmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2003 Release */

int ___ascii_stricmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_002ef126;
      bVar3 = *param_2;
      param_2 = param_2 + 1;
      bVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (bVar2 == bVar3);
    bVar1 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar2 = bVar2 + 0xbf;
    bVar3 = bVar2 + (-(bVar2 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar1);
  cVar4 = (bVar3 < bVar1) * -2 + '\x01';
LAB_002ef126:
  return (int)cVar4;
}

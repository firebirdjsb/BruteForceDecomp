/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 877A3586DCA251323D3C7213A46840BDCBA14555785750E833D3B3387DEBD529
 * Entry: 0x00350bc6, Ghidra index: 13055, label: FUN_00350bc6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00350bc6(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  if ((*(byte *)(in_ECX + 0xa31) & 8) == 0) {
    cVar1 = *(char *)(in_ECX + 0xa33);
    *(char *)(in_ECX + 0xa32) = cVar1;
    *(char *)(in_ECX + 0xa33) = cVar1 + '\x01';
    pcVar2 = (char *)(in_ECX + 0x95a);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = (char *)(in_ECX + 0x99a);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00350a7a(0x23c0,1,*(undefined1 *)(in_ECX + 0xa32),&local_5,1,in_ECX + 0x95a,
                 (char)pcVar2 - ((char)in_ECX + '['),&local_6,1,(char *)(in_ECX + 0x99a),
                 (char)pcVar3 - ((char)in_ECX + -0x65),0,0,0);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D44721C202F3F1F2D2211D31C84D583B0E4928E5E477204CFFB5BC899F17178
 * Entry: 0x00292ed0, Ghidra index: 9263, label: FUN_00292ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00292ed0(int param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  char *in_EDX;
  
  iVar2 = FUN_002eba41();
  if (iVar2 == 0) {
    while( true ) {
      pcVar3 = in_EDX;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar2 = (int)pcVar3 - (int)(in_EDX + 1);
      if (iVar2 == in_ECX) {
        return (iVar2 == param_1) - 1;
      }
      if (iVar2 == param_1) break;
      iVar2 = iVar2 + 1;
      in_EAX = in_EAX + iVar2;
      in_EDX = in_EDX + iVar2;
      in_ECX = in_ECX - iVar2;
      param_1 = param_1 - iVar2;
      iVar2 = FUN_002eba41(in_EDX,in_EAX);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = 1;
  }
  return iVar2;
}

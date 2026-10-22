/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4820B5853B8A7ECB16632BBBDA8A2824BE46AFCE73490CC78E2DD18E3E17970
 * Entry: 0x0006eb80, Ghidra index: 1247, label: FUN_0006eb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0006eb80(char param_1,int *param_2)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined1 uVar1;
  char *unaff_ESI;
  int *unaff_EDI;
  
  uVar1 = 0;
  if ((*unaff_ESI == '\0') && (*param_2 == *unaff_EDI)) {
    if (param_1 != '\0') {
      FUN_0003d730(in_EAX,in_ECX);
      *unaff_ESI = '\x01';
      return 0;
    }
    FUN_0003d730(in_ECX,in_EAX);
    uVar1 = 1;
    *unaff_ESI = '\x01';
  }
  return uVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2FB264EF867887A49E87395526045AFAF5F24ABFD10E3DBBDA61A7828B4DD2E
 * Entry: 0x0012ac20, Ghidra index: 3774, label: FUN_0012ac20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0012ac20(char param_1,int *param_2)

{
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  undefined1 uVar1;
  char *unaff_ESI;
  int *unaff_EDI;
  
  uVar1 = 0;
  if ((*unaff_ESI == '\0') && (*param_2 == *unaff_EDI)) {
    if (param_1 != '\0') {
      *in_ECX = *in_EDX;
      in_ECX[1] = in_EDX[1];
      in_ECX[2] = in_EDX[2];
      in_ECX[3] = in_EDX[3];
      FUN_001d46c0();
      *unaff_ESI = '\x01';
      return 0;
    }
    *in_EDX = *in_ECX;
    in_EDX[1] = in_ECX[1];
    in_EDX[2] = in_ECX[2];
    in_EDX[3] = in_ECX[3];
    FUN_001d46c0();
    uVar1 = 1;
    *unaff_ESI = '\x01';
  }
  return uVar1;
}

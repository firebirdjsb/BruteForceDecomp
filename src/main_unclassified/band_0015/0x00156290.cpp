/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77BBC61F3919C22CF075D0E3D0E85BC34B4C7FDDE1E1BFB39F40B6545DF4383E
 * Entry: 0x00156290, Ghidra index: 4474, label: FUN_00156290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00156290(undefined4 param_1)

{
  char cVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  cVar1 = '\x01';
  if ((unaff_ESI[4] != *(int *)(*(int *)(unaff_EDI + 8) + 0xb60)) &&
     (cVar1 = (**(code **)(*unaff_ESI + 0x6c))(param_1), cVar1 == '\0')) {
    FUN_000db3e0(unaff_ESI);
  }
  return cVar1;
}

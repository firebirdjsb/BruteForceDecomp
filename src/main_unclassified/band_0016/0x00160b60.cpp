/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B92C481A3BBEF2A3B73AD24FBFAF27056AFD88DE40A5FD26ADBD21A9938D8DAD
 * Entry: 0x00160b60, Ghidra index: 4595, label: FUN_00160b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00160b60(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x10))(param_1);
  if (iVar2 != 0) {
    return '\x01';
  }
  iVar2 = FUN_002ea01d(0x118);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0015fca0();
  }
  cVar1 = FUN_00160570(param_1);
  if (cVar1 == '\0') {
    if (iVar2 != 0) {
      FUN_00160b00(1);
      return '\0';
    }
  }
  else {
    FUN_001611d0();
  }
  return cVar1;
}

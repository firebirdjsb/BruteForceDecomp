/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A56946E254F3B25B70AF836C7E27FD0FDE78B146E5EFA45FDC87F6872B8ED23
 * Entry: 0x000a2340, Ghidra index: 1922, label: FUN_000a2340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000a2340(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x10))(param_1);
  if (iVar2 != 0) {
    return '\x01';
  }
  iVar2 = FUN_002ea01d(0x11c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_000a1fa0();
  }
  cVar1 = FUN_000a20e0(iVar2);
  if (cVar1 == '\0') {
    if (iVar2 != 0) {
      FUN_000a22e0(1);
      return '\0';
    }
  }
  else {
    FUN_001611d0();
  }
  return cVar1;
}

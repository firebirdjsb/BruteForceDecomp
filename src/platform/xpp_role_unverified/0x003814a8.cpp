/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D12E49E02403AF7D0E16A18752CE6D3E924BE660FE8989370393257B69C144D
 * Entry: 0x003814a8, Ghidra index: 13564, label: FUN_003814a8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void FUN_003814a8(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 auStack_1c [6];
  
  iVar3 = 5;
  do {
    iVar3 = iVar3 + -1;
    pcVar2 = (char *)FUN_00380f6c();
    cVar1 = *pcVar2;
    auStack_1c[iVar3] = pcVar2;
  } while (cVar1 != '\0');
  if (((byte)*XboxHardwareInfo_exref & 1) == 0) {
    FUN_00381304(auStack_1c + iVar3,5 - iVar3);
  }
  else {
    FUN_00381466(auStack_1c + iVar3,5 - iVar3);
  }
  return;
}

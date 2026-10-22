/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6E0FE9B97E4540A3F7CF3AFA8BBDF576F0583860BEAA5D16DF404C712476CC2
 * Entry: 0x0037fd54, Ghidra index: 13515, label: XInputOpen
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__XInputOpen(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000010;
  int local_8;
  
  local_8 = 0;
  iVar1 = GetTypeInformation_4();
  if (iVar1 == 0) {
    SetLastError(0x57);
    local_8 = 0;
  }
  else {
    if (in_stack_00000010 == 0) {
      in_stack_00000010 = *(int *)(iVar1 + 0x10);
    }
    uVar2 = FUN_00380a8e(&local_8,in_stack_00000010);
    if (local_8 == 0) {
      SetLastError(uVar2);
    }
  }
  return local_8;
}

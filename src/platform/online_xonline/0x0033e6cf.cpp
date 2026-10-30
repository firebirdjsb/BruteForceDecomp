/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A758093DCE428F71F7CFABC4401D6235D3710893063019F9C6C27299F86F4E9
 * Entry: 0x0033e6cf, Ghidra index: 12609, label: FUN_0033e6cf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033e6cf(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = XAPILIB__CreateEventA(0,0,0,0);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) {
      iVar1 = XAPILIB__GetLastError();
      if (iVar1 < 1) {
        uVar2 = XAPILIB__GetLastError();
        return uVar2;
      }
      uVar2 = XAPILIB__GetLastError();
      return uVar2 & 0xffff | 0x80070000;
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 8);
  }
  return 0;
}

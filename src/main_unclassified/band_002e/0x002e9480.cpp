/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBFF84193D8AF16430BC221E0C6E52791DA61BD1B70F37C707B93FE6CEF767CB
 * Entry: 0x002e9480, Ghidra index: 10552, label: FUN_002e9480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e9480(uint param_1,undefined4 param_2)

{
  int in_ECX;
  uint unaff_retaddr;
  
  if (*(int *)(in_ECX + 0x14) == 1) {
    FUN_002e9b40(param_1,param_2);
    param_1 = ~*(uint *)(in_ECX + 0x10);
    if (*(int **)(in_ECX + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x20))(&param_1);
    }
    if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
      param_2 = 0;
      (**(code **)(**(int **)(in_ECX + 0x18) + 0x20))(&param_2);
      if (param_1 != unaff_retaddr) {
        XAPILIB__OutputDebugStringA("Running checksum does not match streamed input checksum");
        XAPILIB__DebugBreak();
      }
    }
  }
  return;
}

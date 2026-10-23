/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19C0FD449EC8D721FB65E5CFADF3FD2582D7427676376A94C4DCBE5F86AA1BEB
 * Entry: 0x00232200, Ghidra index: 7761, label: FUN_00232200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00232200(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int in_EDX;
  
  if ((*(byte *)(in_EDX + 0x225) & 1) == 0) {
    FUN_0022e780(in_EDX);
  }
  if ((*(byte *)(in_EDX + 0x225) & 2) != 0) {
    uVar1 = *(undefined4 *)(in_EDX + 0x2e4);
    uVar2 = *(undefined4 *)(in_EDX + 0x2e0);
    *in_ECX = *(undefined4 *)(in_EDX + 0x2dc);
    in_ECX[1] = uVar2;
    in_ECX[2] = uVar1;
    uVar1 = *(undefined4 *)(in_EDX + 0x2f0);
    uVar2 = *(undefined4 *)(in_EDX + 0x2ec);
    *in_EAX = *(undefined4 *)(in_EDX + 0x2e8);
    in_EAX[1] = uVar2;
    in_EAX[2] = uVar1;
    return;
  }
  FUN_00232180(param_1);
  return;
}

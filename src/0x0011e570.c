/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CEED89B1B84373A8BD0354C78449856CE2FA8263E7B4F6FC123993B7FD333CC0
 * Entry: 0x0011e570, Ghidra index: 3628, label: FUN_0011e570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011e570(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = in_EAX[2];
  uVar2 = in_EAX[1];
  *(undefined4 *)(in_ECX + 0x5e8) = *in_EAX;
  *(undefined4 *)(in_ECX + 0x5ec) = uVar2;
  *(undefined4 *)(in_ECX + 0x5f0) = uVar1;
  return;
}

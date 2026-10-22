/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0400ADBFB73F8B43072493BD3F7BA646661794997FD32FCF7A5DF24CEB6EEB4
 * Entry: 0x00314c5b, Ghidra index: 12085, label: thunk_FUN_00314a29
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void thunk_FUN_00314a29(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 1) & 2) != 0) {
    XAPILIB__CancelIo(*in_ECX);
  }
  if ((in_ECX[1] & 1U) != 0) {
    *in_ECX = 0;
    in_ECX[1] = in_ECX[1] & 0xfffffffe;
    return;
  }
  iVar1 = *in_ECX;
  if ((iVar1 != 0) && (iVar1 != -1)) {
    XAPILIB__CloseHandle(iVar1);
    *in_ECX = 0;
  }
  return;
}

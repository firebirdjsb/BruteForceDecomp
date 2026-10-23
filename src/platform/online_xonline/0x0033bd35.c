/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC27B527EAE7F80C5C6E51640402DB177711D2D389B002BE0FD38851ECD99AA0
 * Entry: 0x0033bd35, Ghidra index: 12536, label: FUN_0033bd35
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bd35(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[1] != -1) {
    XAPILIB__CloseHandle(in_ECX[1]);
  }
  iVar1 = in_ECX[3];
  if (iVar1 != 0) {
    if (in_ECX[0x230] == 0) {
      thunk_FUN_0033e986(iVar1,0x13);
    }
    else {
      FUN_0033ea20(iVar1);
    }
  }
  *(undefined4 *)(in_ECX[0x22f] + 0x15cc + *in_ECX * 4) = 0;
  if (in_ECX[0x230] != 0) {
    FUN_0033ea20(in_ECX);
    return;
  }
  thunk_FUN_0033e986(in_ECX,0x8012);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3064151AE7F83F0C228D0FD89C21F32FFFB2C96BD061C206D821EFA9478AB032
 * Entry: 0x0035bc50, Ghidra index: 13204, label: FUN_0035bc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035bc50(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  int *in_EAX;
  undefined1 *in_ECX;
  int iVar2;
  
  iVar2 = param_3;
  while( true ) {
    if (in_EAX[3] == 0) {
      uVar1 = *(uint *)*in_EAX;
      *in_EAX = (int)((uint *)*in_EAX + 1);
      in_EAX[2] = uVar1 >> 1;
      in_EAX[3] = 0x1f;
    }
    else {
      uVar1 = in_EAX[2];
      in_EAX[2] = uVar1 >> 1;
      in_EAX[3] = in_EAX[3] + -1;
    }
    if ((uVar1 & 1) == 0) {
      *in_ECX = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    }
    else {
      *in_ECX = *param_2;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    }
    in_ECX = in_ECX + 1;
    if (param_3 == 0) break;
    if (iVar2 == 0) {
      do {
        *in_ECX = *param_1;
        in_ECX = in_ECX + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_ECX = *param_2;
    in_ECX = in_ECX + 1;
    param_2 = param_2 + 1;
  }
  return;
}
